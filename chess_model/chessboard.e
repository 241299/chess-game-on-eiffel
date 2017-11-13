note
	description: "A model of chessboard. Used as interface to interact with presenter"
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
	set_figure_at_xy(an_x, an_y: INTEGER; a_chess_figure: CHESS_FIGURE)
	require
		x_not_too_small: an_x > 0
		x_not_too_big: an_x < 9
		y_not_too_small: an_y > 0
		y_not_too_big: an_y < 9
	do
		chess_matrix[an_y].chess_row[an_x].set_chess_figure (a_chess_figure)
		a_chess_figure.set_position(chess_matrix[an_y].chess_row[an_x])
	end

	set_figure_at_position (a_position: CHESS_POSITION; a_chess_figure: CHESS_FIGURE): BOOLEAN
	require
		move_is_valid: a_chess_figure.can_move (a_position, Current)
	do
		Result := false
		a_chess_figure.position.set_chess_figure (Void)
		a_chess_figure.set_position (a_position)
		if attached a_position.chess_figure as another_figure then
			request_capture (another_figure)
			Result := true
		end
		a_position.set_chess_figure (a_chess_figure)
	end

	request_capture (a_captured: CHESS_FIGURE)
		-- Ends game if needed
	do
		if a_captured.generator.is_equal ("KING") then
			if
				a_captured.color.is_equal (a_captured.color.white)
			then
				winner := a_captured.color.black
			else
				winner := a_captured.color.white
			end
		end
	end

feature -- Getters
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

	get_positions_where_figure_can_move (a_figure: CHESS_FIGURE): ARRAYED_LIST[CHESS_POSITION]
		-- Gets a list of positions where figure can move
	require
		attached a_figure
	do
		Result := a_figure.get_possible_moves (Current)
	end

	winner: detachable CHESS_COLOR

feature {NONE} -- Attributes
	chess_matrix: ARRAY[CHESS_ROW]
end
