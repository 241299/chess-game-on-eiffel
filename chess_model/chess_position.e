note
	description: "Summary description for {CHESS_POSITION}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	CHESS_POSITION

inherit ANY redefine out end

create
	with_xy

feature -- Initialization
	with_xy (an_x, an_y: INTEGER)
	require
		x_correct: an_x > 0 and an_x <= 8
		y_correct: an_y > 0 and an_y <= 8
	do
		x := an_x
		y := an_y
	end

feature {CHESS_FIGURE, CHESSBOARD} -- Access
	x: INTEGER
	y: INTEGER
	chess_figure: detachable CHESS_FIGURE

feature {CHESSBOARD, CHESS_ROW} -- Setter
	set_chess_figure(a_figure: CHESS_FIGURE)
	do
		chess_figure := a_figure
	end

feature -- Getter
	get_chess_figure: detachable CHESS_FIGURE
	do
		Result := chess_figure
	end

	is_empty: BOOLEAN
	do
		Result := not attached chess_figure
	end

feature out: STRING
	do
		Result := ""
		inspect x
		when 1 then Result.append("A")
		when 2 then Result.append("B")
		when 3 then Result.append("C")
		when 4 then Result.append("D")
		when 5 then Result.append("E")
		when 6 then Result.append("F")
		when 7 then Result.append("G")
		when 8 then Result.append("H")
		else end
		Result.append(y.out)
	end

end
