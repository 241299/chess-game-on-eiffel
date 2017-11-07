note
	description: "Summary description for {CHESS_TILE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	CHESS_TILE

inherit
	EV_MODEL_RECTANGLE

create
	make_with_color_positions, make_with_coordinates

feature {NONE} -- Initialization
	make_with_color_positions(a_color: EV_COLOR; an_x, an_y: INTEGER)
	do
		make_rectangle(an_x, an_y, tile_width, tile_height)
		primary_color := a_color
		set_background_color(a_color)
	end

	make_with_coordinates(an_x, an_y: INTEGER)
	do
		make_rectangle(an_x, an_y, tile_width, tile_height)
		primary_color := create {EV_COLOR}.make_with_8_bit_rgb (0, 255, 255)
		set_background_color(primary_color)
	end

feature {ANY} -- Constants
	tile_width: INTEGER = 60
	tile_height: INTEGER = 60
	primary_color: EV_COLOR
end
