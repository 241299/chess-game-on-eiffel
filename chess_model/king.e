note
	description: "A king chess figure."
	author: "Marsel Shaihin"
	date: "$Date: 2017/11/6 09:01:00 $"
	revision: "0.1.1"

class
	KING

inherit
	CHESS_FIGURE
RENAME
	short_name as prev_s_name,
	full_name as prev_f_name
redefine
	out, get_possible_moves, move
end

create
	with_color_position

feature {CHESSBOARD} -- Implementation

	get_possible_moves (in_chessboard: CHESSBOARD): ARRAYED_LIST[CHESS_POSITION]
			-- A king can move in one of eight positions
			-- Castling is not implemented yet
		local
			l_m: INTEGER -- Multiplier to invert checking for black and white
		do
			create Result.make (8)

			if color.is_equal(color.black) then -- Defining invertor logic
				l_m := 1
			else
				l_m := -1
			end

			add_if_possible (in_chessboard, position.x + 1, position.y, Result)
			add_if_possible (in_chessboard, position.x - 1, position.y, Result)

			add_if_possible (in_chessboard, position.x + 1, position.y + 1, Result)
			add_if_possible (in_chessboard, position.x - 1, position.y + 1, Result)

			add_if_possible (in_chessboard, position.x + 1, position.y - 1, Result)
			add_if_possible (in_chessboard, position.x - 1, position.y - 1, Result)

			add_if_possible (in_chessboard, position.x, position.y + 1, Result)
			add_if_possible (in_chessboard, position.x, position.y - 1, Result)

			if not moved then
				-- Castling
				add_if_possible (in_chessboard, position.x - 2, position.y, Result)
				add_if_possible (in_chessboard, position.x + 2, position.y, Result)
			end
		end

	move (to_position: CHESS_POSITION; in_chessboard: CHESSBOARD)
			-- Moves a figure to new position
		do
			-- Castling
			if
				not moved
				and then to_position.x = position.x + 2
				and then attached {ROOK} in_chessboard.get_figure_at_xy (8, position.y) as rook
				and then rook.color.is_equal (color)
			then
				in_chessboard.set_figure_at_xy (6, position.y, rook).do_nothing
			elseif
				not moved
				and then to_position.x = position.x - 2
				and then attached {ROOK} in_chessboard.get_figure_at_xy (1, position.y) as rook
				and then rook.color.is_equal (color)
			then
				in_chessboard.set_figure_at_xy (4, position.y, rook).do_nothing
			end

			-- Regardless of castling
			position.set_chess_figure (Void)
			position := to_position
			moved := true
		end

	is_castling_possible (to_position: CHESS_POSITION; in_chessboard: CHESSBOARD): BOOLEAN
		do
			Result :=
				not moved
				and then to_position.x = position.x + 2
				and then attached {ROOK} in_chessboard.get_figure_at_xy (8, position.y)
				or
				not moved
				and then to_position.x = position.x - 2
				and then attached {ROOK} in_chessboard.get_figure_at_xy (1, position.y)
		end

feature {NONE} -- Supplementary
	add_if_possible (in_chessboard: CHESSBOARD; an_x, an_y: INTEGER; to_list: ARRAYED_LIST[CHESS_POSITION])
		local a_position: CHESS_POSITION
		do
			if
				an_x > 0
				and then an_y > 0
				and then an_x < 9
				and then an_y < 9
			then
				a_position := in_chessboard.get_position_at_xy (an_x, an_y)
				if a_position.is_empty then
					to_list.force (in_chessboard.get_position_at_xy (an_x, an_y))
				elseif attached a_position.chess_figure as l_figure then
					if not l_figure.color.is_equal (color) then
						to_list.force (in_chessboard.get_position_at_xy (an_x, an_y))
					end
				end
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
