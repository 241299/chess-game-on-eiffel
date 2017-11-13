note
	description: "A figure that can be dragged."
	author: "Marsel Shaihin"
	date: "04 Nov 2017"
	revision: "0.1.1"

class
	FIGURE_MOVABLE

inherit
	EV_MODEL_MOVE_HANDLE

create
	create_with_image_coordinates, list_make

feature {NONE} -- Initialization

	create_with_image_coordinates (image: EV_PIXMAP; an_x, an_y: INTEGER)
			-- Initialization for `Current'.
		local
			l_figure: EV_MODEL_PICTURE
		do
			default_create
			create l_figure.make_with_pixmap (image)
			extend (l_figure)
			l_figure.set_point_position (0, 0)

			shift_by_x := image.width // 2
			shift_by_y := image.height // 2
			width := l_figure.width

			enable_move
			enable_events_sended_to_group
		end

feature -- Shifting runtime constants
	shift_by_x: INTEGER
	shift_by_y: INTEGER
	width: INTEGER

feature {NONE} -- Move features

	on_pointer_motion_on_world (ax, ay: INTEGER; x_tilt, y_tilt, pressure: DOUBLE; a_screen_x, a_screen_y: INTEGER)
		do
			if has_capture then
				set_point_position (ax - shift_by_x, ay - shift_by_y)
			end
		end

	on_pointer_button_press_on_world (ax, ay, button: INTEGER; x_tilt, y_tilt, pressure: DOUBLE; a_screen_x, a_screen_y: INTEGER)
		do
			enable_capture
		end

	on_pointer_button_release_on_world (ax, ay, button: INTEGER; x_tilt, y_tilt, pressure: DOUBLE; a_screen_x, a_screen_y: INTEGER)
		do
			if has_capture then
				disable_capture
			end
		end

feature -- Status setting

	enable_move
			-- Enables movements
		do
			pointer_motion_actions.extend (agent on_pointer_motion_on_world)
			pointer_button_press_actions.extend (agent on_pointer_button_press_on_world)
			pointer_button_release_actions.extend (agent on_pointer_button_release_on_world)
		end

	disable_move
			-- Disables movements. Detaches all the subscribers
		do
			pointer_motion_actions.wipe_out
			pointer_button_press_actions.wipe_out
			pointer_button_release_actions.wipe_out
		end

feature {ANY} -- Actions being executed on state change
	add_on_pointer_motion(an_action: PROCEDURE[INTEGER, INTEGER, DOUBLE, DOUBLE, DOUBLE, INTEGER, INTEGER])
	do
		pointer_motion_actions.extend (an_action)
	end

	add_on_pointer_button_press(an_action: PROCEDURE[INTEGER, INTEGER, INTEGER, DOUBLE, DOUBLE, DOUBLE, INTEGER, INTEGER])
	do
		pointer_button_press_actions.extend (an_action)
	end

	add_on_pointer_button_release(an_action: PROCEDURE[INTEGER, INTEGER, INTEGER, DOUBLE, DOUBLE, DOUBLE, INTEGER, INTEGER])
	do
		pointer_button_release_actions.extend (an_action)
	end
end
