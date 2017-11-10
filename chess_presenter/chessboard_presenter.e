note
	description: "Summary description for {CHESSBOARD_PRESENTER}."
	author: "Marsel Shaihin"
	date: "05 Nov 2017"
	revision: "0.0.1"

class
	CHESSBOARD_PRESENTER

inherit CHESS_GAME_CONSTANTS

create
	with_chessboard_view, with_view

feature {NONE} -- Initialization

	with_chessboard_view(a_chessboard: CHESSBOARD; a_chess_world_view: EV_MODEL_WORLD)
			-- Initialization for `Current'.
			-- Links this presenter with a chessboard and a view where changes would be displayed
		do
			chessboard := a_chessboard
			chess_world := a_chess_world_view

			create chess_tiles_highlighted.make (32)

			create chessboard_figures.make_with_chessboard(chessboard)

			create chessboard_tiles
			chessboard_tiles.create_chessboard (a_chess_world_view)
			init_chess_figures

			set_figures_from_chessboard (chessboard)
		end

	with_view(a_chess_world_view: EV_MODEL_WORLD)
			-- Initialization for `Current'.
			-- Creates default game and links itself to the view.
		do
			create chessboard
			chessboard.init_default_game
			chess_world := a_chess_world_view

			create chess_tiles_highlighted.make (32)

			create chessboard_tiles
			chessboard_tiles.create_chessboard (a_chess_world_view)

			create chessboard_figures.make_with_chessboard(chessboard)

			init_chess_figures
			set_figures_from_chessboard (chessboard)
		end

feature {NONE}
	chessboard: CHESSBOARD -- The chessboard to interact with the figures
	chessboard_tiles: CHESSBOARD_PRESENTER_TILES -- Views of highlightable chess tiles
	chessboard_figures: CHESSBOARD_PRESENTER_FIGURES -- Views of movable chess figures
	chess_world: EV_MODEL_WORLD -- The main view where everything will be displayed
	chess_tiles_highlighted: ARRAYED_LIST[CHESS_TILE] -- The array of currently highlighted tiles
	number_captured: INTEGER -- How many figures are now captured?

feature -- State changers
	notify_board_changed
		do
			on_board_changed
		end

	set_figures_from_chessboard(a_chessboard: CHESSBOARD)
		local
			i, j: INTEGER
			a_figure: FIGURE_MOVABLE
			l_chess_figure: CHESS_FIGURE
			l_tile: CHESS_TILE
			an_img: EV_PIXMAP
		do
			create l_tile.make_with_coordinates (0, 0)
			from
				i := 1
			until
				i > 8
			loop
				from
					j := 1
				until
					j > 8
				loop
					l_chess_figure := a_chessboard.get_figure_at_xy (j, i)
					if attached l_chess_figure then
						an_img := get_image(l_chess_figure)
						if attached an_img then
							a_figure := create {FIGURE_MOVABLE}.create_with_image_coordinates (an_img,
							l_tile.width * j + (l_tile.width - an_img.width) // 2,
							l_tile.height * i)

							a_figure.set_point_position_relative (
							l_tile.width * j + (l_tile.width - an_img.width) // 2,
							l_tile.height * i)

							a_figure.add_on_pointer_button_press (agent on_chess_figure_pressed)
							a_figure.add_on_pointer_button_release (agent on_chess_figure_released)

							chessboard_figures.figures.at (i).set (j, a_figure)

							chess_world.extend (a_figure)
						end
					end
					j := j + 1
				end
				i := i + 1
			end
		end

feature {NONE} -- Movement observers

		prev_x, prev_y: INTEGER

		bind_figure_to_position (a_chess_figure: CHESS_FIGURE; a_position: CHESS_POSITION)
		local
			l_array: ARRAY[INTEGER]
			l_figure: FIGURE_MOVABLE
		do
			if (attached chessboard and attached a_position) then
				l_array := chessboard.get_xy_of_position(a_position)
				if attached l_array
				then
					l_figure := chessboard_figures
						.figures
						.at  (l_array[2])
						.get (l_array[1])

					if
					attached l_figure
					then
						l_figure.set_point_position (tile_width * l_array[1] + abs_value(l_figure.width - tile_width) // 2, tile_height * l_array[2])
					end
				end
			end
		end

		on_chess_figure_released (ax, ay, button: INTEGER; x_tilt, y_tilt, pressure: DOUBLE; a_screen_x, a_screen_y: INTEGER)
			-- Observes and commits changes
		local
			l_figure: CHESS_FIGURE
			l_new_x, l_new_y: INTEGER
			l_figure_movable: FIGURE_MOVABLE
			l_captured: BOOLEAN
		do
			chess_tiles_highlighted.do_all (agent remove_highlight_from_tile)
			chess_tiles_highlighted.wipe_out

			l_new_x := ax // tile_width
			l_new_y := ay // tile_height
			l_figure := chessboard.get_figure_at_xy (prev_x // tile_width, prev_y // tile_height)

			if l_new_x > 0 -- Within borders of a chessboard
			and then l_new_y > 0
			and then l_new_x < 9
			and then l_new_y < 9
			and then attached l_figure
			and then
				l_figure.can_move (chessboard.get_position_at_xy (l_new_x, l_new_y), chessboard)
			then
				if attached l_figure then
					if
						(abs_value(ax - prev_x) > tile_width // 2 or abs_value(ay - prev_y) > tile_height // 2)
					then
						l_captured := chessboard.set_figure_at_position(chessboard.get_position_at_xy (l_new_x, l_new_y), l_figure)
						l_figure.set_moved

						if l_captured then -- If there was a capture
							l_figure_movable := chessboard_figures.figures.at(l_new_y).get(l_new_x)
							if attached l_figure_movable then
								l_figure_movable.set_point_position (tile_width * 10 + number_captured \\ 5 * tile_width // 2, tile_height * (number_captured // 5))
								l_figure_movable.disable_move
							end
							number_captured := number_captured + 1
						end

						l_figure_movable := chessboard_figures.figures.at(prev_y // tile_height).get(prev_x // tile_width)
						if attached l_figure_movable then
							chessboard_figures
								.figures
								.at(l_new_y)
								.set(l_new_x, l_figure_movable)
						end
					end
					bind_figure_to_position (l_figure, chessboard.get_position_at_xy (l_new_x, l_new_y))
				end
			else -- Movement denied (out of borders or the figure can't move)
				l_figure := chessboard.get_figure_at_xy (prev_x // tile_width, prev_y // tile_height)
				if attached l_figure then
					bind_figure_to_position (l_figure, l_figure.position)
				end
			end
		end

		on_chess_figure_pressed(ax, ay, button: INTEGER; x_tilt, y_tilt, pressure: DOUBLE; a_screen_x, a_screen_y: INTEGER)
		local
			l_figure: CHESS_FIGURE
			l_positions: ARRAYED_LIST[CHESS_POSITION]
		do
			prev_x := ax
			prev_y := ay
			if (ax // tile_height) > 0
			and then (ay // tile_width) > 0
			and then (ax // tile_height) < 9
			and then (ay // tile_width) < 9
			then
				l_figure := chessboard.get_figure_at_xy (ax // tile_width, ay // tile_height)
				if attached l_figure then
					l_positions := chessboard.get_positions_where_figure_can_move (l_figure)
					l_positions.do_all (agent highlight_tile_at_position)
				end
			end
		end

		abs_value(a_number: INTEGER): INTEGER
		do
			if a_number > 0 then
				Result := a_number
			else
				Result := -a_number
			end
		end


feature {NONE} -- Highlighters
	highlight_tile_at_position(a_position: CHESS_POSITION)
	local
		l_x, l_y: INTEGER
		l_tile: CHESS_TILE
	do
		l_x := chessboard.get_xy_of_position (a_position).at (1)
		l_y := chessboard.get_xy_of_position (a_position).at (2)
		l_tile := chessboard_tiles.get_tile_at (l_x, l_y)
		l_tile.highlight
		chess_tiles_highlighted.force (l_tile)
	end

	remove_highlight_from_tile (a_tile: CHESS_TILE)
	do
		a_tile.unhighlight
	end

feature {NONE} -- Getter
	get_image(a_chess_figure: CHESS_FIGURE): EV_PIXMAP
	local
		l_name: STRING
	do
		l_name := a_chess_figure.out
		Result := chess_figure_kingb
		if attached l_name then
		if l_name.is_equal ("pawnw") then
			Result := chess_figure_pawnw
		else if l_name.is_equal ("pawnb") then
			Result := chess_figure_pawnb
		else if l_name.is_equal ("rookw") then
			Result := chess_figure_rookw
		else if l_name.is_equal ("rookb") then
			Result := chess_figure_rookb
		else if l_name.is_equal ("knightw") then
			Result := chess_figure_knightw
		else if l_name.is_equal ("knightb") then
			Result := chess_figure_knightb
		else if l_name.is_equal ("bishopw") then
			Result := chess_figure_bishopw
		else if l_name.is_equal ("bishopb") then
			Result := chess_figure_bishopb
		else if l_name.is_equal ("queenw") then
			Result := chess_figure_queenw
		else if l_name.is_equal ("queenb") then
			Result := chess_figure_queenb
		else if l_name.is_equal ("kingw") then
			Result := chess_figure_kingw
		else if l_name.is_equal ("kingb") then
			Result := chess_figure_kingb
		end end end end end end end end end end end end
		else
			print("Mismatch%N")
		end
	end

feature {NONE} -- Initialization
	init_chess_figures
			-- Loads all pixmaps from the disk
	do
		create chess_figure_pawnw
		chess_figure_pawnw.set_with_named_file (file_system.pathname_to_string(chess_img_by_name("pawnw")))
		create chess_figure_pawnb
		chess_figure_pawnb.set_with_named_file (file_system.pathname_to_string(chess_img_by_name("pawnb")))
		create chess_figure_rookw
		chess_figure_rookw.set_with_named_file (file_system.pathname_to_string(chess_img_by_name("rookw")))
		create chess_figure_rookb
		chess_figure_rookb.set_with_named_file (file_system.pathname_to_string(chess_img_by_name("rookb")))
		create chess_figure_knightw
		chess_figure_knightw.set_with_named_file (file_system.pathname_to_string(chess_img_by_name("knightw")))
		create chess_figure_knightb
		chess_figure_knightb.set_with_named_file (file_system.pathname_to_string(chess_img_by_name("knightb")))
		create chess_figure_bishopw
		chess_figure_bishopw.set_with_named_file (file_system.pathname_to_string(chess_img_by_name("bishopw")))
		create chess_figure_bishopb
		chess_figure_bishopb.set_with_named_file (file_system.pathname_to_string(chess_img_by_name("bishopb")))
		create chess_figure_kingw
		chess_figure_kingw.set_with_named_file (file_system.pathname_to_string(chess_img_by_name("kingw")))
		create chess_figure_kingb
		chess_figure_kingb.set_with_named_file (file_system.pathname_to_string(chess_img_by_name("kingb")))
		create chess_figure_queenw
		chess_figure_queenw.set_with_named_file (file_system.pathname_to_string(chess_img_by_name("queenw")))
		create chess_figure_queenb
		chess_figure_queenb.set_with_named_file (file_system.pathname_to_string(chess_img_by_name("queenb")))
	end

feature {NONE} -- Attributes
	chess_figure_pawnw: 	EV_PIXMAP
	chess_figure_pawnb: 	EV_PIXMAP
	chess_figure_rookw: 	EV_PIXMAP
	chess_figure_rookb: 	EV_PIXMAP
	chess_figure_knightw: 	EV_PIXMAP
	chess_figure_knightb: 	EV_PIXMAP
	chess_figure_bishopw: 	EV_PIXMAP
	chess_figure_bishopb: 	EV_PIXMAP
	chess_figure_kingw: 	EV_PIXMAP
	chess_figure_kingb: 	EV_PIXMAP
	chess_figure_queenw: 	EV_PIXMAP
	chess_figure_queenb: 	EV_PIXMAP


feature {NONE} -- Implementation
	on_board_changed
	do
		-- Stub
	end
end
