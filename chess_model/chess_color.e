note
	description: "A model of chess color."
	author: "Marsel Shaihin"
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

feature -- Field
	color: BOOLEAN -- True if this is black, false if white
	set_color (a_color: BOOLEAN)
		do
			color := a_color
		end

feature
	opposite: CHESS_COLOR
			-- Returns the opposite color
		do
			if Current.is_equal (white) then
				Result := black
			else
				Result := white
			end
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
