note
	description: "Operates with the images on the row."
	author: "Marsel Shaihin"
	date: "$Date$"
	revision: "0.1.1"

class
	CHESSBOARD_PRESENTER_FIGURES_ROW

create with_y

feature {NONE} -- Initialization
	with_y(an_y: INTEGER)
		do
			create row_figures.make_empty
		end

feature {CHESSBOARD_PRESENTER_FIGURES, CHESSBOARD_PRESENTER} -- Interface
	get(an_x: INTEGER): detachable FIGURE_MOVABLE
		require
			x_valid: an_x > 0 and an_x < 9
		do
			if row_figures.valid_index (an_x) then
				Result := row_figures.at (an_x)
			else
				Result := Void
			end
		rescue
			Result := Void
		end

	set(an_x: INTEGER; a_figure: FIGURE_MOVABLE)
		do
			row_figures.force (a_figure, an_x)
		end

	freeze_all
		do
			row_figures.do_all (agent freeze_figure_movable)
		end

	freeze_figure_movable (a_figure: detachable FIGURE_MOVABLE)
		do
			if attached a_figure then a_figure.disable_move end
		end

feature {NONE}
	row_figures: ARRAY[detachable FIGURE_MOVABLE]
end
