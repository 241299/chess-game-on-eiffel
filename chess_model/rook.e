note
	description: "A rook figure model."
	author: "Marsel Shaihin"
	date: "$Date: 2017/11/5 17:18:00 $"
	revision: "0.1.1"

class
	ROOK

inherit
	CHESS_FIGURE
RENAME
	short_name as prev_s_name,
	full_name as prev_f_name
redefine
	out, get_possible_moves
end

create
	with_color_position

feature -- Implementation

	get_possible_moves (in_chessboard: CHESSBOARD): ARRAYED_LIST[CHESS_POSITION]
		-- A rook can move either by row or by column
		local
			i: INTEGER
			l_obst_found: BOOLEAN -- Variable that is whether obstacle is encountered or not
			l_another_figure: CHESS_FIGURE
		do
			create Result.make (16)

			-- Check from right
			from i := position.x + 1
			until i > 8 or l_obst_found
			loop
				l_another_figure := in_chessboard [i, position.y]
				if attached l_another_figure then
					if not l_another_figure.color.is_equal (color) then
						Result.force (l_another_figure.position)
					end
					l_obst_found := true
				else
					Result.force (in_chessboard.get_position_at_xy (i, position.y))
				end
				i := i + 1
			end

			-- Again
			l_obst_found := false

			-- Check from left
			from i := position.x - 1
			until i < 1 or l_obst_found
			loop
				l_another_figure := in_chessboard [i, position.y]
				if attached l_another_figure then
					if not l_another_figure.color.is_equal (color) then
						Result.force (l_another_figure.position)
					end
					l_obst_found := true
				else
					Result.force (in_chessboard.get_position_at_xy (i, position.y))
				end
				i := i - 1
			end

			-- And again
			l_obst_found := false

			-- Check from up
			from i := position.y - 1
			until i < 1 or l_obst_found
			loop
				l_another_figure := in_chessboard [position.x, i]
				if attached l_another_figure then
					if not l_another_figure.color.is_equal (color) then
						Result.force (l_another_figure.position)
					end
					l_obst_found := true
				else
					Result.force (in_chessboard.get_position_at_xy (position.x, i))
				end
				i := i - 1
			end

			-- And again...
			l_obst_found := false

			-- Check from down
			from i := position.y + 1
			until i > 8 or l_obst_found
			loop
				l_another_figure := in_chessboard [position.x, i]
				if attached l_another_figure then
					if not l_another_figure.color.is_equal (color) then
						Result.force (l_another_figure.position)
					end
					l_obst_found := true
				else
					Result.force (in_chessboard.get_position_at_xy (position.x, i))
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
	full_name: STRING = "rook"
	short_name: STRING = "R"
end
