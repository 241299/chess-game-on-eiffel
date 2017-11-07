note
	description: "Summary description for {CHESS_FIGURE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	CHESS_FIGURE

inherit ANY redefine out end

feature can_move(to_position: CHESS_POSITION; in_chessboard: CHESSBOARD): BOOLEAN
	deferred
	end

feature -- Initialization
	with_position(a_position: CHESS_POSITION)
	do
		position := a_position
	end

	with_color_position(a_color: CHESS_COLOR; a_position: CHESS_POSITION)
	do
		color := a_color
		position := a_position
	end

feature {CHESS_FIGURE, CHESS_GAME_CONSTANTS, CHESSBOARD} -- Access
	position: CHESS_POSITION assign set_position
	short_name: STRING = "F"
	full_name: STRING = "ABSTRACT FIGURE"
	color: CHESS_COLOR
	moved: BOOLEAN

feature {CHESS_FIGURE, CHESSBOARD} -- Setters
	set_color(a_color: CHESS_COLOR)
	do
		color := a_color
	end

	set_position(a_position: CHESS_POSITION)
	do
		position := a_position
	end

	set_position_with_xy(an_x, an_y: INTEGER)
	do
		position := create {CHESS_POSITION}.with_xy (an_x, an_y)
	end

feature
	set_moved
	do
		moved := true
	end

feature out: STRING
	do
		Result := full_name + color.out
	end
end
