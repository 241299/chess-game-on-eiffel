note
	description: "Main user interface"
	author: "Marsel Shaihin"
	date: "$Date: 2017/11/3 14:12:59 $"
	revision: "0.1.1"

class
	MAIN_WINDOW

inherit
	EV_TITLED_WINDOW
		redefine
			create_interface_objects,
			initialize,
			is_in_default_state
		end

	CHESS_GAME_CONSTANTS
		export
			{NONE} all
		undefine
			default_create, copy
		end

create
	default_create

feature {NONE} -- Initialization

	create_interface_objects
			-- <Precursor>
		do
				-- Create main container.
			create main_container
				-- Create the menu bar.
			create standard_menu_bar
				-- Create file menu.
			create game_menu.make_with_text (menu_game_item)
				-- Create help menu.
			create help_menu.make_with_text (Menu_help_item)

				-- Create a status bar and a status label.
			create standard_status_bar
			create standard_status_label.make_with_text (label_status_bar)
			standard_status_label.set_background_color (create {EV_COLOR}.make_with_8_bit_rgb (0, 255, 0))

		end

	initialize
			-- Build the interface for this window.
		do
			Precursor {EV_TITLED_WINDOW}

			set_minimum_size (400, 400)
				-- Create and add the menu bar.
			build_standard_menu_bar
			set_menu_bar (standard_menu_bar)

			build_main_container
			extend (main_container)

				-- Create and add the status bar.
			build_standard_status_bar
			main_container.extend (standard_status_bar)
			main_container.disable_item_expand (standard_status_bar)


				-- Execute `request_close_window' when the user clicks
				-- on the cross in the title bar.
			close_request_actions.extend (agent request_close_window)

				-- Set the title of the window.
			set_title (Window_title)

				-- Set the initial size of the window.
			set_size (Window_width, Window_height)

			set_position (30, 10)
		end

	is_in_default_state: BOOLEAN
			-- Is the window in its default state?
			-- (as stated in `initialize')
		do
			Result := (width = Window_width) and then
				(height = Window_height) and then
				(title.is_equal (Window_title))
		end


feature {NONE} -- Menu Implementation

	standard_menu_bar: EV_MENU_BAR
			-- Standard menu bar for this window.

	game_menu: EV_MENU
			-- "File" menu for this window (contains New, Open, Save, Exit...)

	help_menu: EV_MENU
			-- "Help" menu for this window (contains About...)

	build_standard_menu_bar
			-- Create and populate `standard_menu_bar'.
		do
				-- Add the "File" menu.
			build_game_menu
			standard_menu_bar.extend (game_menu)
				-- Add the "Help" menu.
			build_help_menu
			standard_menu_bar.extend (help_menu)
		ensure
			menu_bar_initialized: not standard_menu_bar.is_empty
		end

	build_game_menu
			-- Create and populate `game_menu'.
		local
			menu_item: EV_MENU_ITEM
		do
			create menu_item.make_with_text (menu_game_new_item)
			menu_item.select_actions.extend (agent on_new_game)
			game_menu.extend (menu_item)

			create menu_item.make_with_text (menu_game_open_item)
				--| TODO: Add the action associated with "Open" here.
			game_menu.extend (menu_item)

			create menu_item.make_with_text (menu_game_save_item)
				--| TODO: Add the action associated with "Save" here.
			game_menu.extend (menu_item)

			create menu_item.make_with_text (Menu_file_saveas_item)
				--| TODO: Add the action associated with "Save As..." here.
			game_menu.extend (menu_item)

			create menu_item.make_with_text (menu_game_config_item)
				--| TODO: Add the action associated with "Config" here.
			game_menu.extend (menu_item)

			game_menu.extend (create {EV_MENU_SEPARATOR})

				-- Create the File/Exit menu item and make it call
				-- `request_close_window' when it is selected.
			create menu_item.make_with_text (Menu_file_exit_item)
			menu_item.select_actions.extend (agent request_close_window)
			game_menu.extend (menu_item)
		ensure
			file_menu_initialized: not game_menu.is_empty
		end

	build_help_menu
			-- Create and populate `help_menu'.
		local
			menu_item: EV_MENU_ITEM
		do
			create menu_item.make_with_text (menu_help_howtoplay_item)
			menu_item.select_actions.extend (agent on_howto)
			help_menu.extend (menu_item)

			create menu_item.make_with_text (Menu_help_about_item)
			menu_item.select_actions.extend (agent on_about)
			help_menu.extend (menu_item)

		ensure
			help_menu_initialized: not help_menu.is_empty
		end

feature {NONE} -- StatusBar Implementation

	standard_status_bar: EV_STATUS_BAR
			-- Standard status bar for this window

	standard_status_label: EV_LABEL
			-- Label situated in the standard status bar.
			--
			-- Note: Call `standard_status_label.set_text (...)' to change the text
			--       displayed in the status bar.

	build_standard_status_bar
			-- Populate the standard toolbar.
		do
				-- Initialize the status bar.
			standard_status_bar.set_border_width (2)

				-- Populate the status bar.
			standard_status_label.align_text_left
			standard_status_bar.extend (standard_status_label)
		end

feature {NONE}
	on_new_game
	do
		print ("Discarding old game...%N")
		build_main_container
	end

feature {NONE} -- About Dialog Implementation

	on_about
			-- Display the About dialog.
		local
			about_dialog: ABOUT_DIALOG
		do
			create about_dialog
			about_dialog.show_modal_to_window (Current)
		end

feature -- How to play
	on_howto
            -- Opens the browser with tutorial
        external
            "C inline use <stdlib.h>"
        alias
            "system(%"start \%"q\%" \%"https://www.chess.com/learn-how-to-play-chess\%"%")"
        end

feature {NONE} -- Implementation, Close event

	request_close_window
			-- Process user request to close the window.
		local
			question_dialog: EV_CONFIRMATION_DIALOG
		do
			create question_dialog.make_with_text (Label_confirm_close_window)
			question_dialog.show_modal_to_window (Current)

			if question_dialog.selected_button ~ (create {EV_DIALOG_CONSTANTS}).ev_ok then
					-- Destroy the window.
				destroy

				if attached (create {EV_ENVIRONMENT}).application as a then
					a.destroy
				end
			end
		end

feature {NONE} -- Implementation

	main_container: EV_VERTICAL_BOX
			-- Main container (contains all widgets displayed in this window).

	build_main_container
			-- Fill `main_container'.
		local
			l_buffer: EV_PIXMAP
			l_projector: EV_MODEL_DRAWING_AREA_PROJECTOR
			chess_world: EV_MODEL_WORLD
			draw_area: EV_DRAWING_AREA
			chessboard_presenter: CHESSBOARD_PRESENTER
		do
			main_container.wipe_out

			create chess_world

			create chessboard_presenter.with_view (chess_world)
			print("New game created successfully!%N")

			create l_buffer.make_with_size (Window_width, Window_height)
			create draw_area
			create l_projector.make_with_buffer (chess_world, l_buffer, draw_area)

				-- add the drawing area to the container
			main_container.extend (draw_area)

				-- Refresh the drawing area
			l_projector.project
		ensure
			main_container_created: main_container /= Void
		end

feature {NONE} -- Implementation / Constants

	Window_title: STRING = "ChessGame"
			-- Title of the window.

	Window_width: INTEGER = 900
			-- Initial width for this window.

	Window_height: INTEGER = 700
			-- Initial height for this window.

end
