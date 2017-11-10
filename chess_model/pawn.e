note
	description: "A pawn figure model."
	author: "Marsel Shaihin"
	date: "04 Nov 2017"
	revision: "0.0.1"

class
	PAWN

inherit
	CHESS_FIGURE
		RENAME
			short_name as prev_s_name,
			full_name as prev_f_name
		redefine
			with_position, with_color_position, can_move, out
		end

create
	with_position, with_color_position

feature {NONE} -- Initialization

	with_position (a_position: CHESS_POSITION)
			-- Initialization for `Current'.
		do
			Precursor(a_position)
			set_color((create {CHESS_COLOR}).black)
		end

	with_color_position (a_color: CHESS_COLOR; a_position: CHESS_POSITION)
			-- Initialization for `Current'.
		do
			Precursor(a_color, a_position)
			set_color(a_color)
		end

FEATURE {NONE}
	can_move (to_position: CHESS_POSITION; a_chessboard: CHESSBOARD): BOOLEAN
	local
		l_figure: CHESS_FIGURE
		l_m: INTEGER -- Multiplier to invert checking for black and
	do
		if color.is_equal(color.black) then -- Defining invertor logic
			l_m := 1
		else
			l_m := -1
		end

		if position.y = 1 or position.y = 8 or position.is_equal(to_position) then
			Result := false
		else
			l_figure := to_position.chess_figure
			if attached l_figure then
				if
					abs_value(to_position.x - position.x) = 1
					and then to_position.y - position.y = 1 * l_m
					and then not color.is_equal(l_figure.color)
				then
					Result := true
				end
			elseif
				to_position.is_equal(a_chessboard.get_position_at_xy(position.x, position.y + 1 * l_m))
			then
				Result := true
			elseif
				not moved then
					if
						to_position.is_equal(a_chessboard.get_position_at_xy(position.x, position.y + 2 * l_m))
						and then not attached a_chessboard.get_figure_at_xy (position.x, position.y + 1 * l_m)
						then
						Result := True
					end
			end
--		else -- For white
--			if not moved then
--				if (to_position.is_equal(a_chessboard.get_position_at_xy(position.x, position.y - 2))
--					or to_position.is_equal(a_chessboard.get_position_at_xy(position.x, position.y - 1)))
--				then
--					Result := true
--				end
--			else
--				if to_position.is_equal(a_chessboard.get_position_at_xy(position.x, position.y - 1))
--				then
--					Result := true
--				end
--			end
		end
	end

feature -- Supplementary
	abs_value (a_number: INTEGER): INTEGER
	do
		if a_number > 0 then
			Result := a_number
		else
			Result := -a_number
		end
	end

feature {ANY} -- Attributes
	short_name: STRING = "P"
	full_name: STRING = "pawn"

feature out: STRING
	do
		Result := full_name + color.out
	end
end
