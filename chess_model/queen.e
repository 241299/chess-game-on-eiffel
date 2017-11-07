note
	description: "Summary description for {QUEEN}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	QUEEN

inherit
	CHESS_FIGURE
RENAME
	short_name as prev_s_name,
	full_name as prev_f_name
redefine
	can_move, out
end

create
	with_color_position

feature -- Implementation
	can_move (to_position: CHESS_POSITION; a_chessboard: CHESSBOARD): BOOLEAN
			-- A rook can move either by row or by column
		do
			Result := True -- Stub
		end
	out: STRING
		do
			Result := full_name + color.out
		end
feature -- Attributes
	full_name: STRING = "queen"
	short_name: STRING = "Q"
end
