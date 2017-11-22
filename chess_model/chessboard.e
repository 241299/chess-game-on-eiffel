note
	description: "A model of chessboard. Used as the interface to interact with presenter"
	author: "Marsel Shaihin"
	date: "$Date: 2017/11/5 11:04:00 $"
	revision: "0.1.1"

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
			-- Starts classical game
		local
			j: INTEGER
			chess_color: CHESS_COLOR
		do
			print ("Starting new game...%N")
			if attached chess_matrix then
				print ("Reconfiguring chessboard...%N")
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

				-- White start first
				white_move := true

			else print("An error has occurred, please restart an application") end
		end

feature -- Element change
	set_figure_at_xy (an_x, an_y: INTEGER; a_chess_figure: CHESS_FIGURE): BOOLEAN
			-- Changes the position of the chess figure
			-- Returns true if there was a capture
		require
			x_not_too_small: an_x > 0
			x_not_too_big: an_x < 9
			y_not_too_small: an_y > 0
			y_not_too_big: an_y < 9
		do
			Result := set_figure_at_position (chess_matrix[an_y].chess_row[an_x], a_chess_figure)
		end

	set_figure_at_position (a_position: CHESS_POSITION; a_chess_figure: CHESS_FIGURE): BOOLEAN
			-- Changes the position of the chess figure
			-- Returns true if there was a capture
		require
			move_is_valid: a_chess_figure.can_move (a_position, Current)
		do
			if attached {KING} a_chess_figure as king then
				if king.is_castling_possible (a_position, Current) then
					request_castling (king, a_position)
				end
			end

			Result := false

			a_chess_figure.move (a_position, Current)

			if attached a_position.chess_figure as another_figure then
				request_capture (another_figure)
				Result := true
			end
			a_position.set_chess_figure (a_chess_figure)

			-- PRINT

			print (a_chess_figure.out)
			if Result then print ("x") end
			print (" " + a_position.out)
			if white_move then print (" ") else io.put_new_line end
		end

	request_castling (king: KING; to_position: CHESS_POSITION)
			-- Castles king and rook and notifies presenter
		do
			if attached presenter as l_presenter then
				if to_position.x > king.position.x then
					if
						attached get_figure_at_xy (8, king.position.y) as l_rook
					then
						l_presenter.on_castling (l_rook, get_position_at_xy (king.position.x + 1, king.position.y))
					end
				else
					if
						attached get_figure_at_xy (1, king.position.y) as l_rook
					then
						l_presenter.on_castling (l_rook, get_position_at_xy (king.position.x - 1, king.position.y))
					end
				end
			end
		end

	request_capture (a_captured: CHESS_FIGURE)
			-- Ends game if needed
		do
			if attached {KING} a_captured then
				if
					a_captured.color.is_equal (a_captured.color.white)
				then
					winner := a_captured.color.black
				else
					winner := a_captured.color.white
				end
			end
		end

	request_color_change
			-- Changes the color of currently moving to opposite
		do
			white_move := not white_move
		end

feature -- Getters
	get_figure_at_xy alias "[]" (an_x, an_y: INTEGER): detachable CHESS_FIGURE
		require
			x_not_too_small: an_x > 0
			x_not_too_big: an_x < 9
			y_not_too_small: an_y > 0
			y_not_too_big: an_y < 9
		do
			Result := chess_matrix[an_y].chess_row[an_x].get_chess_figure
		end

	get_xy_of_position (a_position: CHESS_POSITION): ARRAY[INTEGER]
			-- Bruteforces all the positions in order to find out to which positions can figure move
		do
			create Result.make_empty
			Result.force(a_position.x, 1)
			Result.force(a_position.y, 2)
		end

	get_position_at_xy alias "()" (an_x, an_y: INTEGER): CHESS_POSITION
			-- Getter for a `CHESS_POSITION' at index
			-- Note that indices go from (1, 1) (upper left corner, A8)
			-- to (8, 8) (lower right corner, H1)
		require
			x_not_too_small: an_x > 0
			x_not_too_big: an_x < 9
			y_not_too_small: an_y > 0
			y_not_too_big: an_y < 9
		do
			Result := chess_matrix[an_y].chess_row[an_x]
		end

	get_positions_where_figure_can_move (a_figure: CHESS_FIGURE): ARRAYED_LIST[CHESS_POSITION]
			-- Gets a list of positions where the figure can move
		require
			attached a_figure
		do
			if
				is_move_allowed (a_figure.color)
			then
				if not is_king_under_attack (a_figure.color) then
					Result := a_figure.get_possible_moves (Current)
				end
			end

			if not attached Result then
				create Result.make (0)
			end
		end

	get_all_attacked_positions alias "implies" (by_color: CHESS_COLOR): ARRAYED_SET[CHESS_POSITION]
			-- Gets the list of all attacked positions
		do

			create Result.make(32)

			across chess_matrix as row loop
				across row.item.chess_row as position loop
					if
						attached position.item.chess_figure as figure
						and then figure.color.is_equal (by_color)
					then
						Result.merge (figure.get_possible_moves (Current))
					end
				end
			end
		end

	is_king_under_attack (a_color: CHESS_COLOR): BOOLEAN
		local
			l_i: INTEGER
		do
			-- Get the list of all positions attacked by opponents figures
			if attached (Current implies a_color.opposite).to_array as attacked then
				from
					l_i := 1
				until
					Result or l_i > attacked.count
				loop
					if
						attached {KING} (attacked[l_i]).chess_figure as figure
						and then figure.color.is_equal (a_color)
					then
						Result := true
					end
					l_i := l_i + 1
				end
			end
		end

	is_move_allowed (a_color: CHESS_COLOR): BOOLEAN
			-- True if current color is moving, false otherwise
		do
			if
				(white_move and then a_color.is_equal (a_color.white)
				or
				not white_move and then a_color.is_equal (a_color.black))
			then
				Result := true
			else
				Result := false
			end
		end

	winner: detachable CHESS_COLOR -- Void if game hasn't ended, color of the winner otherwise

feature {CHESSBOARD_PRESENTER} -- Subscribe
	subscribe (a_presenter: CHESSBOARD_PRESENTER)
		do
			presenter := a_presenter
		end

feature {NONE} -- Attributes
	chess_matrix: ARRAY[CHESS_ROW]
	white_move: BOOLEAN -- True if white are moving, false if black
	presenter: detachable CHESSBOARD_PRESENTER
end
