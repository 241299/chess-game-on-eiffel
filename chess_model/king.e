note
	description: "A king chess figure."
	author: "Marsel Shaihin"
	date: "$Date: 2017/11/6 09:01:00 $"
	revision: "0.1.1"

class
	KING

inherit
	CHESS_FIGURE
RENAME
	short_name as prev_s_name,
	full_name as prev_f_name
redefine
	can_move, out, get_possible_moves
end

create
	with_color_position

feature -- Implementation
	can_move (to_position: CHESS_POSITION; a_chessboard: CHESSBOARD): BOOLEAN
			-- A king can move in one of eight positions
			-- Castling is not implemented
		do
			Result := get_possible_moves (a_chessboard).has (to_position)
		end

	get_possible_moves (in_chessboard: CHESSBOARD): ARRAYED_LIST[CHESS_POSITION]
	local
		l_m: INTEGER -- Multiplier to invert checking for black and white
	do
		create Result.make (8)

		if color.is_equal(color.black) then -- Defining invertor logic
			l_m := 1
		else
			l_m := -1
		end

		add_if_possible (in_chessboard, position.x + 1, position.y, Result)
		add_if_possible (in_chessboard, position.x - 1, position.y, Result)

		add_if_possible (in_chessboard, position.x + 1, position.y + 1, Result)
		add_if_possible (in_chessboard, position.x - 1, position.y + 1, Result)

		add_if_possible (in_chessboard, position.x + 1, position.y - 1, Result)
		add_if_possible (in_chessboard, position.x - 1, position.y - 1, Result)

		add_if_possible (in_chessboard, position.x, position.y + 1, Result)
		add_if_possible (in_chessboard, position.x, position.y - 1, Result)

		if not moved then
			-- Stub for castling
--			add_if_possible (in_chessboard, position.x - 2, position.y, Result)
--			add_if_possible (in_chessboard, position.x + 3, position.y, Result)
		end
	end

feature {NONE} -- Supplementary
	add_if_possible(in_chessboard: CHESSBOARD; an_x, an_y: INTEGER; to_list: ARRAYED_LIST[CHESS_POSITION])
	local a_position: CHESS_POSITION
	do
		if
			an_x > 0
			and then an_y > 0
			and then an_x < 9
			and then an_y < 9
			then
				a_position := in_chessboard.get_position_at_xy (an_x, an_y)
				if a_position.is_empty then
					to_list.force (in_chessboard.get_position_at_xy (an_x, an_y))
				elseif attached a_position.chess_figure as l_figure then
					if not l_figure.color.is_equal (color) then
						to_list.force (in_chessboard.get_position_at_xy (an_x, an_y))
					end
				end
		end
	end

feature -- Redefinition
	out: STRING
		do
			Result := full_name + color.out
		end
feature -- Attributes
	full_name: STRING = "king"
	short_name: STRING = "K"

end
