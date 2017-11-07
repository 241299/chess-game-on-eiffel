note
	description: "A pawn figure model."
	author: "Marsel"
	date: "$Date$"
	revision: "$Revision$"

class
	PAWN

inherit
	CHESS_FIGURE
		RENAME
			short_name as prev_s_name,
			full_name as prev_f_name
		redefine
			with_position, with_color_position, can_move, out
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

FEATURE {NONE}
	can_move (to_position: CHESS_POSITION; a_chessboard: CHESSBOARD): BOOLEAN
	do
		if color.is_equal(color.black)
		then -- For black
			if not moved then
				if (to_position.is_equal(a_chessboard.get_position_at_xy(position.x, position.y + 2))
					or to_position.is_equal(a_chessboard.get_position_at_xy(position.x, position.y + 1)))
				then
					Result := true
				end
			else
				if to_position.is_equal(a_chessboard.get_position_at_xy(position.x, position.y + 1))
				then
					Result := true
				end
			end
		else -- For white
			if not moved then
				if (to_position.is_equal(a_chessboard.get_position_at_xy(position.x, position.y - 2))
					or to_position.is_equal(a_chessboard.get_position_at_xy(position.x, position.y - 1)))
				then
					Result := true
				end
			else
				if to_position.is_equal(a_chessboard.get_position_at_xy(position.x, position.y - 1))
				then
					Result := true
				end
			end
		end
		if to_position.is_equal(position) then
			Result := true
		end
	end

feature {ANY} -- Attributes
	short_name: STRING = "P"
	full_name: STRING = "pawn"

feature out: STRING
	do
		Result := full_name + color.out
	end
end
