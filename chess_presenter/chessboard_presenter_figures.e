note
	description: "Summary description for {CHESSBOARD_PRESENTER_FIGURES}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	CHESSBOARD_PRESENTER_FIGURES
create make_with_chessboard

feature {NONE} -- Initialization
	make_with_chessboard (a_chessboard: CHESSBOARD)
	local
		i: INTEGER
	do
		create figures.make_empty
		from
			i := 1
		until
			i > 8
		loop
			figures.force (create {CHESSBOARD_PRESENTER_FIGURES_ROW}.with_y(i), i)
			i := i + 1
		end
	end

feature {CHESSBOARD_PRESENTER}
	figures: ARRAY[CHESSBOARD_PRESENTER_FIGURES_ROW]
end
