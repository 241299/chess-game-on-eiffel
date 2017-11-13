note
	description: "A queen chess figure."
	author: "Marsel Shaihin"
	date: "$Date: 2017/11/6 09:02:00 $"
	revision: "0.1.1"

class
	QUEEN

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
			-- A rook can move either by row or by column
		do
			Result := get_possible_moves (a_chessboard).has (to_position)
		end

	get_possible_moves (in_chessboard: CHESSBOARD): ARRAYED_LIST[CHESS_POSITION]
		-- A queen can move by row, by column or by diagonals
	local
		i: INTEGER
		l_obst_found: BOOLEAN -- Variable that is whether obstacle is encountered or not
	do
		create Result.make (32)

		-- Check from right
		from i := position.x + 1
		until i > 8 or l_obst_found
		loop
			if attached in_chessboard.get_figure_at_xy (i, position.y) as l_another_figure then
				if not l_another_figure.color.is_equal (color) then
					Result.force (l_another_figure.position)
				end
				l_obst_found := true
			else
				Result.force (in_chessboard.get_position_at_xy (i, position.y))
			end
			i := i + 1
		end

		-- Restart iteration
		l_obst_found := false

		-- Check from right down
		from i := 1
		until i + position.x > 8 or i + position.y > 8 or l_obst_found
		loop
			if attached in_chessboard.get_figure_at_xy (i + position.x, i + position.y) as l_another_figure then
				if not l_another_figure.color.is_equal (color) then
					Result.force (l_another_figure.position)
				end
				l_obst_found := true
			else
				Result.force (in_chessboard.get_position_at_xy (i + position.x, i + position.y))
			end
			i := i + 1
		end

		-- Again
		l_obst_found := false

		-- Check from left
		from i := position.x - 1
		until i < 1 or l_obst_found
		loop
			if attached in_chessboard.get_figure_at_xy (i, position.y) as l_another_figure then
				if not l_another_figure.color.is_equal (color) then
					Result.force (l_another_figure.position)
				end
				l_obst_found := true
			else
				Result.force (in_chessboard.get_position_at_xy (i, position.y))
			end
			i := i - 1
		end

		-- Restart iteration
		l_obst_found := false

		-- Check from left down
		from i := 1
		until position.x - i < 1 or i + position.y > 8 or l_obst_found
		loop
			if attached in_chessboard.get_figure_at_xy (position.x - i, i + position.y) as l_another_figure then
				if not l_another_figure.color.is_equal (color) then
					Result.force (l_another_figure.position)
				end
				l_obst_found := true
			else
				Result.force (in_chessboard.get_position_at_xy (position.x - i, i + position.y))
			end
			i := i + 1
		end

		-- And again
		l_obst_found := false

		-- Check from up
		from i := position.y - 1
		until i < 1 or l_obst_found
		loop
			if attached in_chessboard.get_figure_at_xy (position.x, i) as l_another_figure then
				if not l_another_figure.color.is_equal (color) then
					Result.force (l_another_figure.position)
				end
				l_obst_found := true
			else
				Result.force (in_chessboard.get_position_at_xy (position.x, i))
			end
			i := i - 1
		end

		-- Restart iteration
		l_obst_found := false

		-- Check from left up
		from i := 1
		until position.x - i < 1 or position.y - i < 1 or l_obst_found
		loop
			if attached in_chessboard.get_figure_at_xy (position.x - i, position.y - i) as l_another_figure then
				if not l_another_figure.color.is_equal (color) then
					Result.force (l_another_figure.position)
				end
				l_obst_found := true
			else
				Result.force (in_chessboard.get_position_at_xy (position.x - i, position.y - i))
			end
			i := i + 1
		end

		-- And again...
		l_obst_found := false

		-- Check from down
		from i := position.y + 1
		until i > 8 or l_obst_found
		loop
			if attached in_chessboard.get_figure_at_xy (position.x, i) as l_another_figure then
				if not l_another_figure.color.is_equal (color) then
					Result.force (l_another_figure.position)
				end
				l_obst_found := true
			else
				Result.force (in_chessboard.get_position_at_xy (position.x, i))
			end
			i := i + 1
		end

		-- Restart iteration
		l_obst_found := false

		-- Check from right up
		from i := 1
		until position.x + i > 8 or position.y - i < 1 or l_obst_found
		loop
			if attached in_chessboard.get_figure_at_xy (position.x + i, position.y - i) as l_another_figure then
				if not l_another_figure.color.is_equal (color) then
					Result.force (l_another_figure.position)
				end
				l_obst_found := true
			else
				Result.force (in_chessboard.get_position_at_xy (position.x + i, position.y - i))
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
	full_name: STRING = "queen"
	short_name: STRING = "Q"
end
