note
	description: "A rook figure model."
	author: "Marsel"
	date: "$Date$"
	revision: "$Revision$"

class
	ROOK

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
		local
			l_figure: CHESS_FIGURE
		do
			if color.is_equal(color.black)
			then -- For black
				l_figure := to_position.chess_figure
				if
					attached l_figure
				then
					if not l_figure.color.is_equal(color.black)
					then
						if (to_position.x.is_equal(position.x)
							or to_position.y.is_equal(position.y))
						then
							Result := true
						end
					else -- The same color standing right there
						Result := false
					end
				else
					if (to_position.x.is_equal(position.x)
							or to_position.y.is_equal(position.y))
						then
							Result := true
						end
				end
			else -- For white
				if (to_position.is_equal(a_chessboard.get_position_at_xy(position.x, position.y - 2))
					or to_position.is_equal(a_chessboard.get_position_at_xy(position.x, position.y - 1)))
				then
					Result := true
				end
			end
			if to_position.is_equal(position) then
				Result := true
			end
		end
	out: STRING
		do
			Result := full_name + color.out
		end
feature -- Attributes
	full_name: STRING = "rook"
	short_name: STRING = "R"
end
