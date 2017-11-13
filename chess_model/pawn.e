note
	description: "A pawn figure model."
	author: "Marsel Shaihin"
	date: "$Date: 2017/11/4 8:11:59 $"
	revision: "0.0.1"

class
	PAWN

inherit
	CHESS_FIGURE
		RENAME
			short_name as prev_s_name,
			full_name as prev_f_name
		redefine
			with_position, with_color_position, can_move, out, get_possible_moves
		end

create
	with_position, with_color_position

feature {NONE} -- Initialization

	with_position (a_position: CHESS_POSITION)
			-- Initialization for `Current'.
		do
			Precursor(a_position)
			set_color((create {CHESS_COLOR}).black)
		end

	with_color_position (a_color: CHESS_COLOR; a_position: CHESS_POSITION)
			-- Initialization for `Current'.
		do
			Precursor(a_color, a_position)
			set_color(a_color)
		end

FEATURE {NONE} -- Implementation
	can_move (to_position: CHESS_POSITION; a_chessboard: CHESSBOARD): BOOLEAN
	do
		Result := get_possible_moves (a_chessboard).has (to_position)
	end

	get_possible_moves (in_chessboard: CHESSBOARD): ARRAYED_LIST[CHESS_POSITION]
	local
		l_m: INTEGER -- Multiplier to invert checking for black and white
		l_first_pos, l_second_pos: CHESS_POSITION
		l_another_chess_figure: CHESS_FIGURE
	do
		create Result.make (4) -- Initializing list with capacity 4 (maximum number of positions)

		if color.is_equal(color.black) then -- Defining invertor logic
			l_m := 1
		else
			l_m := -1
		end

		if not (position.y = 1 or position.y = 8) then
			l_first_pos := in_chessboard.get_position_at_xy (position.x, position.y + 1 * l_m)

			if not moved then -- If there was no move, check two positions
				l_second_pos := in_chessboard.get_position_at_xy (position.x, position.y + 2 * l_m)
				if l_first_pos.is_empty then
					if l_second_pos.is_empty then
						Result.force(l_second_pos)
					end
					Result.force (l_first_pos)
				end
			else -- Otherwise check only next one
				if l_first_pos.is_empty then
					Result.force(l_first_pos)
				end
			end

			if position.x < 8 then -- Check if pawn can capture from right
				l_first_pos := in_chessboard.get_position_at_xy (position.x + 1, position.y + 1 * l_m)
				l_another_chess_figure := l_first_pos.chess_figure
				if
					attached l_another_chess_figure
					and then not l_another_chess_figure.color.is_equal (color)
				then
					Result.force(l_first_pos)
				end
			end

			if position.x > 1 then -- Check if pawn can capture from left
				l_first_pos := in_chessboard.get_position_at_xy (position.x - 1, position.y + 1 * l_m)
				l_another_chess_figure := l_first_pos.chess_figure
				if
					attached l_another_chess_figure
					and then not l_another_chess_figure.color.is_equal (color)
				then
					Result.force(l_first_pos)
				end
			end
		end
	end

feature -- Supplementary
	abs_value (a_number: INTEGER): INTEGER
	do
		if a_number > 0 then
			Result := a_number
		else
			Result := -a_number
		end
	end

feature {ANY} -- Attributes
	short_name: STRING = "P"
	full_name: STRING = "pawn"

feature -- Redefinition
	out: STRING
	do
		Result := full_name + color.out
	end
end
