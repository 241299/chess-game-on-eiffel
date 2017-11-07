note
	description: "Strings for the Graphical User Interface"
	author: "Generated by the New Vision2 Application Wizard."
	date: "$Date: 2017/11/3 14:12:59 $"
	revision: "1.0.0"

class
	CHESS_GAME_CONSTANTS

inherit
	ANY
		export {CHESS_GAME_CONSTANTS}
			all
		end
    KL_SHARED_FILE_SYSTEM
    		-- use KL_SHARED_FILE_SYSTEM (from Gobo Kernel library) to make file paths OS independent
        export {NONE}
            all
        end

feature -- Access

	Image_folder: STRING = "images"
	chess_folder: STRING = "chess_game"

	chess_img_path: KL_PATHNAME
			-- Path for image folder of main_ui
		do
			create Result.make
			Result.set_relative (True)
			Result.append_name (Image_folder)
			Result.append_name (chess_folder)
		end

	chess_img_figures: KL_PATHNAME
			-- Path to all figures
		once
			Result := chess_img_path
			Result.append_name ("figures.png")
		end

	chess_img_by_figure(a_figure: CHESS_FIGURE): KL_PATHNAME
			-- Path to figure by name
			-- Acceptable: pawn, rook, bishop, knight, queen, king
		do
			Result := chess_img_path
			Result.append_name (a_figure.out + a_figure.color.out + ".png")
		end

	chess_img_by_name(a_name: STRING): KL_PATHNAME
			-- Path to figure by name
			-- Acceptable: pawnw, pawnb, rookw, rookb, bishopw, bishopb, knightw, knightb, queenw, quuenb, kingw, kingb
		do
			Result := chess_img_path
			Result.append_name (a_name + ".png")
		end

feature -- Colors
	color_white: EV_COLOR
	once
		Result := create {EV_COLOR}.make_with_8_bit_rgb (238, 238, 210)
	end

	color_black: EV_COLOR
	once
		Result := create {EV_COLOR}.make_with_8_bit_rgb (118, 150, 86)
	end

	color_highlighted: EV_COLOR
	once
		Result := create {EV_COLOR}.make_with_8_bit_rgb (72, 0, 255)
	end

	tile_height: INTEGER = 60
	tile_width: INTEGER = 60

feature -- Access text fields

	Button_ok_item: STRING = "OK"
			-- String for "OK" buttons.

	menu_game_item: STRING = "&Game"
			-- String for menu "Game"

	menu_game_new_item: STRING = "&New game%TCtrl+N"
			-- String for menu "Game/New game"

	menu_game_open_item: STRING = "&Open saved games...%TCtrl+O"
			-- String for menu "Game/Open saved games"

	menu_game_save_item: STRING = "&Save game%TCtrl+S"
			-- String for menu "Game/Save"

	Menu_file_saveas_item: STRING = "Save &As..."
			-- String for menu "Game/Save As"

	menu_game_config_item: STRING = "&Configurations"
			-- String for menu "Game/Configurations"

	Menu_file_exit_item: STRING = "E&xit"
			-- String for menu "Game/Exit"

	Menu_help_item: STRING = "&Help"
			-- String for menu "Help"

	menu_help_howtoplay_item: STRING = "&How to play"
			-- String for menu "Help/How to play"

	Menu_help_about_item: STRING = "&About..."
			-- String for menu "Help/About"

	Label_confirm_close_window: STRING = "Thank you for playing my game :)%NClick OK to exit."
			-- String for the confirmation dialog box that appears
			-- when the user tries to close the window.

	label_status_bar: STRING = "Status: waiting for user actions"

end
