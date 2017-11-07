note
	description: "Suplementary class for storing row in matrix"
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	CHESS_ROW

create make_with_y

feature {NONE}
	make_with_y(an_y: INTEGER)
	local
		j: INTEGER
		a_position: CHESS_POSITION
	do
		create a_position.with_xy (1, 1)
		create chess_row.make_filled(a_position, 1, 8)
		from
			j := 1
		until
			j > 8
		loop
			a_position := create {CHESS_POSITION}.with_xy (j, an_y)
			chess_row.put (a_position, j)
			j := j + 1
		end
	end

feature {CHESSBOARD}
	chess_row: ARRAY[CHESS_POSITION]
end
