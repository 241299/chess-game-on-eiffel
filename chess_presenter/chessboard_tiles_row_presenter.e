note
	description: "Summary description for {CHESSBOARD_TILES_ROW_PRESENTER}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	CHESSBOARD_TILES_ROW_PRESENTER

inherit CHESS_GAME_CONSTANTS

create with_y

feature {NONE} -- Initialization
	with_y(an_y: INTEGER)
	local
		j: INTEGER
		a_tile: CHESS_TILE
		l_tile_width, l_tile_height: INTEGER
	do
		create a_tile.make_with_color_positions (color_white, 0, 0)
		l_tile_width := a_tile.tile_width
		l_tile_height := a_tile.tile_height
		create row_tiles.make_empty

		from
			j := 1
		until
			j > 8
		loop
			if (an_y + j) \\ 2 = 0
				then
					create a_tile.make_with_color_positions (color_white, l_tile_width * j, l_tile_height * an_y)
					set (j, a_tile)
				else
					create a_tile.make_with_color_positions (color_black, l_tile_width * j, l_tile_height * an_y)
					set (j, a_tile)
				end
			j := j + 1
		end
	end

feature {CHESSBOARD_PRESENTER_TILES, CHESSBOARD_PRESENTER} -- Interface
	get(an_x: INTEGER): CHESS_TILE
	require
		x_valid: an_x > 0 and an_x < 9
	do
		Result := row_tiles.at (an_x)
	end

	set(an_x: INTEGER; a_tile: CHESS_TILE)
	do
		row_tiles.force (a_tile, an_x)
	end

feature {NONE}
	row_tiles: ARRAY[CHESS_TILE]
end
