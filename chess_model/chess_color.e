note
	description: "Summary description for {CHESS_COLOR}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	CHESS_COLOR

inherit ANY redefine default_create, out end
create default_create

feature -- Initialization

	white: CHESS_COLOR
		once
			create Result
			Result.set_color(false)
		end

	black: CHESS_COLOR
		once
			create Result
			Result.set_color(true)
		end

feature {ANY}-- Field
	color: BOOLEAN -- False if this is white, true if black
	set_color(a_color: BOOLEAN)
		do
			color := a_color
		end

feature -- Redefinition

	default_create
	do
		color := false
	end

	out: STRING
		do
			if color then
				Result := "b"
			else
				Result := "w"
			end
		end

end
