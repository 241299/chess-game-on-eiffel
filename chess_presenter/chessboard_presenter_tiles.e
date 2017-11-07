note
	description: "Summary description for {CHESSBOARD_PRESENTER_TILES}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	CHESSBOARD_PRESENTER_TILES

inherit ANY redefine default_create end

feature -- Creation
	default_create
	do
		create tiles.make_empty
	end

feature -- Initialization
	create_chessboard(chess_world: EV_MODEL_WORLD)
	local
		a_tile: CHESS_TILE
		i, j: INTEGER
	do

		from
				i := 1 -- Row, i.e. y
			until
				i > 8
			loop
				tiles.force (create {CHESSBOARD_TILES_ROW_PRESENTER}.with_y (i), i)
				from
					j := 1 -- Column, i.e. x
				until
					j > 8
				loop
					a_tile := get_tile_at (j, i)
					chess_world.extend (a_tile)
					j := j + 1
				end
				i := i + 1
			end
	end

feature {CHESSBOARD_PRESENTER} -- Element change
	set_color_at_tile(an_x, an_y: INTEGER; a_color: EV_COLOR)
	require
		x_not_too_small: an_x > 0
		x_not_too_big: an_x < 9
		y_not_too_small: an_y > 0
		y_not_too_big: an_y < 9
	do
		tiles[an_y].get(an_x).set_background_color(a_color)
	end

feature {CHESSBOARD_PRESENTER} -- Getter
	get_tile_at(an_x, an_y: INTEGER): CHESS_TILE
	require
		x_not_too_small: an_x > 0
		x_not_too_big: an_x < 9
		y_not_too_small: an_y > 0
		y_not_too_big: an_y < 9
	do
		Result := tiles[an_y].get(an_x)
	end


feature {CHESSBOARD_PRESENTER} -- Attributes
	tiles: ARRAY[CHESSBOARD_TILES_ROW_PRESENTER]
end
