note
	description: "A tile on the chessboard to be displayed."
	author: "Marsel Shaihin"
	date: "04 Nov 2017"
	revision: "0.0.1"

class
	CHESS_TILE

inherit
	EV_MODEL_RECTANGLE
		select default_create end
	CHESS_GAME_CONSTANTS
		rename default_create as make_c end

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

feature -- State changers
	highlight
	do
		set_background_color (color_highlighted)
	end

	unhighlight
	do
		set_background_color (primary_color)
	end

feature {ANY} -- Constants
	primary_color: EV_COLOR
end
