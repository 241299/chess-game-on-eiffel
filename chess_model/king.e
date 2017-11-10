note
	description: "Summary description for {KING}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

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
			Result := True -- Stub
		end

	get_possible_moves (in_chessboard: CHESSBOARD): ARRAYED_LIST[CHESS_POSITION]
	local
		i, j: INTEGER
	do
		create Result.make (32)
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
					can_move (in_chessboard.get_position_at_xy (j, i), in_chessboard)
				then
					Result.force(in_chessboard.get_position_at_xy (j, i))
				end
				j := j + 1
			end
			i := i + 1
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
