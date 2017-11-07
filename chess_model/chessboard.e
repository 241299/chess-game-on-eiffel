note
	description: "A model of chessboard."
	author: "Marsel"
	date: "$Date$"
	revision: "$Revision$"

class
	CHESSBOARD

inherit ANY redefine default_create end

feature {NONE} -- Initialization
	default_create
		-- Creates an object. To init standard game call `init_default_game'
	local
		i: INTEGER
	do
		create chess_matrix.make_filled (create {CHESS_ROW}.make_with_y (1), 1, 8)
		if attached chess_matrix then
			from
				i := 1
			until
				i > 8
			loop
				chess_matrix.put (create {CHESS_ROW}.make_with_y(i), i)
				i := i + 1
			end
		end
	end

feature -- Status setting
	init_default_game
	local
		j: INTEGER
		chess_color: CHESS_COLOR
	do
		print("Starting new game...%N")
		if attached chess_matrix then
			print("Reconfiguring chessboard...%N")
			create chess_color

			-- Black figures
			-- Rooks
			chess_matrix[1].chess_row[1].set_chess_figure (create {ROOK}.with_color_position (chess_color.black, chess_matrix[1].chess_row[1]))
			chess_matrix[1].chess_row[8].set_chess_figure (create {ROOK}.with_color_position (chess_color.black, chess_matrix[1].chess_row[8]))
			-- Knights
			chess_matrix[1].chess_row[2].set_chess_figure (create {KNIGHT}.with_color_position (chess_color.black, chess_matrix[1].chess_row[2]))
			chess_matrix[1].chess_row[7].set_chess_figure (create {KNIGHT}.with_color_position (chess_color.black, chess_matrix[1].chess_row[7]))
			-- Bishops
			chess_matrix[1].chess_row[3].set_chess_figure (create {BISHOP}.with_color_position (chess_color.black, chess_matrix[1].chess_row[3]))
			chess_matrix[1].chess_row[6].set_chess_figure (create {BISHOP}.with_color_position (chess_color.black, chess_matrix[1].chess_row[6]))
			-- Queen
			chess_matrix[1].chess_row[4].set_chess_figure (create {QUEEN}.with_color_position (chess_color.black, chess_matrix[1].chess_row[4]))
			-- King
			chess_matrix[1].chess_row[5].set_chess_figure (create {KING}.with_color_position (chess_color.black, chess_matrix[1].chess_row[5]))

			-- Pawns
			from
				j := 1
			until
				j > 8
			loop
				chess_matrix[2].chess_row[j].set_chess_figure (create {PAWN}.with_color_position (chess_color.black, chess_matrix[2].chess_row[j]))
				j := j + 1
			end

			-- White figures
			-- Rooks
			chess_matrix[8].chess_row[1].set_chess_figure (create {ROOK}.with_color_position (chess_color.white, chess_matrix[8].chess_row[1]))
			chess_matrix[8].chess_row[8].set_chess_figure (create {ROOK}.with_color_position (chess_color.white, chess_matrix[8].chess_row[8]))
			-- Knights
			chess_matrix[8].chess_row[2].set_chess_figure (create {KNIGHT}.with_color_position (chess_color.white, chess_matrix[8].chess_row[2]))
			chess_matrix[8].chess_row[7].set_chess_figure (create {KNIGHT}.with_color_position (chess_color.white, chess_matrix[8].chess_row[7]))
			-- Bishops
			chess_matrix[8].chess_row[3].set_chess_figure (create {BISHOP}.with_color_position (chess_color.white, chess_matrix[8].chess_row[3]))
			chess_matrix[8].chess_row[6].set_chess_figure (create {BISHOP}.with_color_position (chess_color.white, chess_matrix[8].chess_row[6]))
			-- Queen
			chess_matrix[8].chess_row[4].set_chess_figure (create {QUEEN}.with_color_position (chess_color.white, chess_matrix[8].chess_row[4]))
			-- King
			chess_matrix[8].chess_row[5].set_chess_figure (create {KING}.with_color_position (chess_color.white, chess_matrix[8].chess_row[5]))

			-- Pawns
			from
				j := 1
			until
				j > 8
			loop
				chess_matrix[7].chess_row[j].set_chess_figure (create {PAWN}.with_color_position (chess_color.white, chess_matrix[7].chess_row[j]))
				j := j + 1
			end
		else print("An error has occurred, please restart an application") end
	end

feature -- Element change
	set_figure_at_xy(an_x, an_y: INTEGER; a_figure: CHESS_FIGURE)
	require
		x_not_too_small: an_x > 0
		x_not_too_big: an_x < 9
		y_not_too_small: an_y > 0
		y_not_too_big: an_y < 9
	do
		chess_matrix[an_y].chess_row[an_x].set_chess_figure (a_figure)
		a_figure.set_position(chess_matrix[an_y].chess_row[an_x])
	end

	set_figure_at_position (a_position: CHESS_POSITION; a_chess_figure: CHESS_FIGURE)
	require
		move_is_valid: a_chess_figure.can_move (a_position, Current)
	do
		a_chess_figure.set_position (a_position)
		a_position.set_chess_figure (a_chess_figure)
	end

feature -- Getter
	get_figure_at_xy(an_x, an_y: INTEGER): detachable CHESS_FIGURE
	require
		x_not_too_small: an_x > 0
		x_not_too_big: an_x < 9
		y_not_too_small: an_y > 0
		y_not_too_big: an_y < 9
	do
		Result := chess_matrix[an_y].chess_row[an_x].get_chess_figure
	end

	get_xy_of_position(a_position: CHESS_POSITION): ARRAY[INTEGER]
			-- Bruteforces all the positions in order to find out to which positions can figure move
	do
		create Result.make_empty
		Result.force(a_position.x, 1)
		Result.force(a_position.y, 2)
	end

	get_position_at_xy(an_x, an_y: INTEGER): CHESS_POSITION
	require
		x_not_too_small: an_x > 0
		x_not_too_big: an_x < 9
		y_not_too_small: an_y > 0
		y_not_too_big: an_y < 9
	do
		Result := chess_matrix[an_y].chess_row[an_x]
	end

	get_positions_where_figure_can_move(a_figure: CHESS_FIGURE): ARRAYED_LIST[CHESS_POSITION]
	require
		attached a_figure
	local
		i, j: INTEGER
	do
		create Result.make (64)
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
				if
					a_figure.can_move (chess_matrix[i].chess_row[j], Current)
				then
					Result.force(chess_matrix[i].chess_row[j])
				end
				j := j + 1
			end
			i := i + 1
		end
	end

feature {NONE} -- Attributes
	chess_matrix: ARRAY[CHESS_ROW]
end
