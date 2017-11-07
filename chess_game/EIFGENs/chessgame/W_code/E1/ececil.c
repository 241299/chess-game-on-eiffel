#include "eif_eiffel.h"
#include "eif_rout_obj.h"
#include "eaddress.h"

#ifdef __cplusplus
extern "C" {
#endif

	/* EV_APPLICATION destroy */
void _A974_33 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(16586, "destroy", closed [1].it_r))(closed [1].it_r);
}

	/* EV_APPLICATION do_once_on_idle */
void _A974_94 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(16819, "do_once_on_idle", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* EV_VISION2_TEST_SET destroy */
void _A81_38 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1105, "destroy", closed [1].it_r))(closed [1].it_r, closed [2], closed [3]);
}

	/* EV_VISION2_TEST_SET record_exception */
void _A81_36_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1103, "record_exception", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* TRACING_HANDLER per_thread_trace */
void A197_36 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_INTEGER_32 arg4, EIF_BOOLEAN arg5)
{
	EIF_TYPED_VALUE u [5];
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4525, "per_thread_trace", Current))(Current, ((u [0].type = SK_INT32), (u [0].it_i4 = arg1), u [0]), ((u [1].type = SK_POINTER), (u [1].it_p = arg2), u [1]), ((u [2].type = SK_POINTER), (u [2].it_p = arg3), u [2]), ((u [3].type = SK_INT32), (u [3].it_i4 = arg4), u [3]), ((u [4].type = SK_BOOL), (u [4].it_b = arg5), u [4]));
}

	/* EV_GRID_DRAWER_I redraw_area_in_drawable_coordinates */
void _A612_52_2_3_4_5 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(10809, "redraw_area_in_drawable_coordinates", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3], open [4], closed [2], closed [3], closed [4]);
}

	/* EV_GRID_DRAWER_I redraw_area_in_drawable_coordinates_wrapper */
void _A612_51_2_3_4_5 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(10808, "redraw_area_in_drawable_coordinates_wrapper", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3], open [4]);
}

	/* EV_GRID_LOCKED_I pointer_motion_received */
void _A380_42_2_3_4_5_6_7_8 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7053, "pointer_motion_received", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3], open [4], open [5], open [6], open [7]);
}

	/* EV_GRID_LOCKED_I pointer_button_press_received */
void _A380_41_2_3_4_5_6_7_8_9 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7052, "pointer_button_press_received", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3], open [4], open [5], open [6], open [7], open [8]);
}

	/* EV_GRID_LOCKED_I pointer_double_press_received */
void _A380_43_2_3_4_5_6_7_8_9 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7054, "pointer_double_press_received", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3], open [4], open [5], open [6], open [7], open [8]);
}

	/* EV_GRID_LOCKED_I pointer_button_release_received */
void _A380_44_2_3_4_5_6_7_8_9 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7055, "pointer_button_release_received", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3], open [4], open [5], open [6], open [7], open [8]);
}

	/* EV_GRID_LOCKED_I pointer_enter_received */
void _A380_45 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7056, "pointer_enter_received", closed [1].it_r))(closed [1].it_r);
}

	/* EV_GRID_LOCKED_I pointer_leave_received */
void _A380_46 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7057, "pointer_leave_received", closed [1].it_r))(closed [1].it_r);
}

	/* EV_GRID_LOCKED_I key_press_received */
void _A380_47_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7058, "key_press_received", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_GRID_LOCKED_I key_press_string_received */
void _A380_48_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7059, "key_press_string_received", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_GRID_LOCKED_I key_release_received */
void _A380_49_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7060, "key_release_received", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_GRID_LOCKED_I focus_in_received */
void _A380_50 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7061, "focus_in_received", closed [1].it_r))(closed [1].it_r);
}

	/* EV_GRID_LOCKED_I focus_out_received */
void _A380_51 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7062, "focus_out_received", closed [1].it_r))(closed [1].it_r);
}

	/* EV_GRID_LOCKED_I mouse_wheel_received */
void _A380_52_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7063, "mouse_wheel_received", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* WEL_STANDARD_DIALOG_DISPATCHER standard_dialog_procedure */
EIF_POINTER A477_34 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	EIF_TYPED_VALUE u [4];
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(8108, "standard_dialog_procedure", Current))(Current, ((u [0].type = SK_POINTER), (u [0].it_p = arg1), u [0]), ((u [1].type = SK_INT32), (u [1].it_i4 = arg2), u [1]), ((u [2].type = SK_POINTER), (u [2].it_p = arg3), u [2]), ((u [3].type = SK_POINTER), (u [3].it_p = arg4), u [3])).it_p;
}

	/* HASH_TABLE [G#1, G#2] has */
EIF_TYPED_VALUE _A1623_48_2 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10533, "has", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* HASH_TABLE [G#1, INTEGER_32] has */
EIF_TYPED_VALUE _A1705_48_2 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10533, "has", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* HASH_TABLE [INTEGER_32, G#2] has */
EIF_TYPED_VALUE _A1709_48_2 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10533, "has", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* HASH_TABLE [INTEGER_32, INTEGER_32] has */
EIF_TYPED_VALUE _A1878_48_2 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10533, "has", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* HASH_TABLE [NATURAL_32, POINTER] has */
EIF_TYPED_VALUE _A1975_48_2 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10533, "has", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* HASH_TABLE [G#1, POINTER] has */
EIF_TYPED_VALUE _A2054_48_2 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10533, "has", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* HASH_TABLE [G#1, G#2] put */
void _A1623_87 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(8500, "put", closed [1].it_r))(closed [1].it_r, closed [2], closed [3]);
}

	/* HASH_TABLE [G#1, INTEGER_32] put */
void _A1705_87 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(8500, "put", closed [1].it_r))(closed [1].it_r, closed [2], closed [3]);
}

	/* HASH_TABLE [INTEGER_32, G#2] put */
void _A1709_87 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(8500, "put", closed [1].it_r))(closed [1].it_r, closed [2], closed [3]);
}

	/* HASH_TABLE [INTEGER_32, INTEGER_32] put */
void _A1878_87 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(8500, "put", closed [1].it_r))(closed [1].it_r, closed [2], closed [3]);
}

	/* HASH_TABLE [NATURAL_32, POINTER] put */
void _A1975_87 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(8500, "put", closed [1].it_r))(closed [1].it_r, closed [2], closed [3]);
}

	/* HASH_TABLE [G#1, POINTER] put */
void _A2054_87 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(8500, "put", closed [1].it_r))(closed [1].it_r, closed [2], closed [3]);
}

	/* HASH_TABLE [G#1, G#2] remove */
void _A1623_93 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10563, "remove", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* HASH_TABLE [G#1, INTEGER_32] remove */
void _A1705_93 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10563, "remove", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* HASH_TABLE [INTEGER_32, G#2] remove */
void _A1709_93 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10563, "remove", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* HASH_TABLE [INTEGER_32, INTEGER_32] remove */
void _A1878_93 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10563, "remove", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* HASH_TABLE [NATURAL_32, POINTER] remove */
void _A1975_93 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10563, "remove", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* HASH_TABLE [G#1, POINTER] remove */
void _A2054_93 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10563, "remove", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* MISMATCH_INFORMATION wipe_out */
void A578_95 (EIF_REFERENCE Current)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(8462, "wipe_out", Current))(Current);
}

	/* MISMATCH_INFORMATION internal_put */
void A578_159 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_POINTER arg2)
{
	EIF_TYPED_VALUE u [2];
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(10630, "internal_put", Current))(Current, ((u [0].type = SK_REF), (u [0].it_r = arg1), u [0]), ((u [1].type = SK_POINTER), (u [1].it_p = arg2), u [1]));
}

	/* MISMATCH_INFORMATION set_string_versions */
void A578_160 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	EIF_TYPED_VALUE u [2];
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(10631, "set_string_versions", Current))(Current, ((u [0].type = SK_POINTER), (u [0].it_p = arg1), u [0]), ((u [1].type = SK_POINTER), (u [1].it_p = arg2), u [1]));
}

	/* EV_ACCELERATOR_LIST enable_item_parented */
void _A581_167_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10678, "enable_item_parented", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_ACCELERATOR_LIST disable_item_parented */
void _A581_168_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10679, "disable_item_parented", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_DRAWABLE_ITEM_ACTION_SEQUENCE wrapper */
void _A586_183_2_3_4_5_6 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(10764, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3], open [4], open [5], closed [2]);
}

	/* EV_DOUBLE_VALUE_CHANGE_ACTION_SEQUENCE wrapper */
void _A587_183_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(10765, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* EV_NEW_ITEM_ACTION_SEQUENCE wrapper */
void _A588_183_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(10766, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* EV_GEOMETRY_ACTION_SEQUENCE wrapper */
void _A589_183_2_3_4_5 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(10767, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3], open [4], closed [2]);
}

	/* EV_MULTI_COLUMN_LIST_ROW_SELECT_ACTION_SEQUENCE wrapper */
void _A590_183_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(10768, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* EV_KEY_ACTION_SEQUENCE wrapper */
void _A591_183_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(10769, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* EV_PND_START_ACTION_SEQUENCE wrapper */
void _A592_183_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(10770, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], open [2], closed [2]);
}

	/* EV_HEADER_ITEM_ACTION_SEQUENCE wrapper */
void _A593_183_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(10771, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* EV_TREE_ITEM_CHECK_ACTION_SEQUENCE wrapper */
void _A594_183_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(10772, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* EV_INTEGER_ACTION_SEQUENCE wrapper */
void _A595_183_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(10773, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* EV_MENU_ITEM_SELECT_ACTION_SEQUENCE wrapper */
void _A596_183_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(10774, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* EV_COLUMN_TITLE_CLICK_ACTION_SEQUENCE wrapper */
void _A597_183_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(10775, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* EV_KEY_STRING_ACTION_SEQUENCE wrapper */
void _A598_183_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(10776, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* EV_VALUE_CHANGE_ACTION_SEQUENCE wrapper */
void _A599_183_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(10777, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* EV_PND_FINISHED_ACTION_SEQUENCE wrapper */
void _A600_183_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(10778, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* EV_GRID_ITEM_ACTION_SEQUENCE wrapper */
void _A601_183_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(10779, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* EV_LIST_ITEM_CHECK_ACTION_SEQUENCE wrapper */
void _A602_183_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(10780, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* EV_POINTER_MOTION_ACTION_SEQUENCE wrapper */
void _A603_183_2_3_4_5_6_7_8 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(10781, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3], open [4], open [5], open [6], open [7], closed [2]);
}

	/* EV_PND_MOTION_ACTION_SEQUENCE wrapper */
void _A604_183_2_3_4 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(10782, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3], closed [2]);
}

	/* EV_COLUMN_ACTION_SEQUENCE wrapper */
void _A605_183_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(10783, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* EV_GRID_ROW_ACTION_SEQUENCE wrapper */
void _A606_183_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(10784, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* EV_DOCKABLE_SOURCE_ACTION_SEQUENCE wrapper */
void _A607_183_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(10785, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* EV_SCROLL_ACTION_SEQUENCE wrapper */
void _A608_183_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(10786, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], open [2], closed [2]);
}

	/* EV_NOTIFY_ACTION_SEQUENCE wrapper */
void _A609_182 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10787, "wrapper", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* EV_NOTIFY_ACTION_SEQUENCE call */
void _A609_177 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10681, "call", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* EV_POINTER_BUTTON_ACTION_SEQUENCE wrapper */
void _A610_183_2_3_4_5_6_7_8_9 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(10788, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3], open [4], open [5], open [6], open [7], open [8], closed [2]);
}

	/* RT_DBG_CALL_RECORD inline-agent#1 of record_fields */
void _A617_159_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) F617_29920)(closed [1].it_r, open [1]);
}

	/* WEL_FONT_FAMILY_ENUMERATOR update_current */
void A634_42 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_POINTER arg4)
{
	EIF_TYPED_VALUE u [4];
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(11415, "update_current", Current))(Current, ((u [0].type = SK_POINTER), (u [0].it_p = arg1), u [0]), ((u [1].type = SK_POINTER), (u [1].it_p = arg2), u [1]), ((u [2].type = SK_INT32), (u [2].it_i4 = arg3), u [2]), ((u [3].type = SK_POINTER), (u [3].it_p = arg4), u [3]));
}

	/* EV_MOVE_HANDLE on_enter */
void _A646_298 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(11885, "on_enter", closed [1].it_r))(closed [1].it_r);
}

	/* EV_MOVE_HANDLE on_leave */
void _A646_299 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(11886, "on_leave", closed [1].it_r))(closed [1].it_r);
}

	/* EV_MOVE_HANDLE on_start_resizing */
void _A646_304_2_3_4_5_6_7_8_9 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(11891, "on_start_resizing", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3], open [4], open [5], open [6], open [7], open [8]);
}

	/* EV_MOVE_HANDLE on_resizing */
void _A646_305_2_3_4_5_6_7_8 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(11892, "on_resizing", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3], open [4], open [5], open [6], open [7]);
}

	/* EV_MOVE_HANDLE on_stop_resizing */
void _A646_306_2_3_4_5_6_7_8_9 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(11893, "on_stop_resizing", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3], open [4], open [5], open [6], open [7], open [8]);
}

	/* WEL_RICH_EDIT_STREAM_IN internal_callback */
EIF_INTEGER_32 A793_76 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3)
{
	EIF_TYPED_VALUE u [3];
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14028, "internal_callback", Current))(Current, ((u [0].type = SK_POINTER), (u [0].it_p = arg1), u [0]), ((u [1].type = SK_INT32), (u [1].it_i4 = arg2), u [1]), ((u [2].type = SK_POINTER), (u [2].it_p = arg3), u [2])).it_i4;
}

	/* WEL_RICH_EDIT_STREAM_OUT internal_callback */
EIF_INTEGER_32 A796_76 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	EIF_TYPED_VALUE u [2];
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14040, "internal_callback", Current))(Current, ((u [0].type = SK_POINTER), (u [0].it_p = arg1), u [0]), ((u [1].type = SK_INT32), (u [1].it_i4 = arg2), u [1])).it_i4;
}

	/* EV_MODEL is_in_group */
EIF_TYPED_VALUE _A848_123_1 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14908, "is_in_group", open [1].it_r))(open [1].it_r);
}

	/* EV_MODEL_MOVE_HANDLE on_enter */
void _A851_373 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(15057, "on_enter", closed [1].it_r))(closed [1].it_r);
}

	/* EV_MODEL_MOVE_HANDLE on_leave */
void _A851_374 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(15058, "on_leave", closed [1].it_r))(closed [1].it_r);
}

	/* EV_MODEL_MOVE_HANDLE on_start_resizing */
void _A851_384_2_3_4_5_6_7_8_9 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15068, "on_start_resizing", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3], open [4], open [5], open [6], open [7], open [8]);
}

	/* EV_MODEL_MOVE_HANDLE on_resizing */
void _A851_385_2_3_4_5_6_7_8 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15069, "on_resizing", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3], open [4], open [5], open [6], open [7]);
}

	/* EV_MODEL_MOVE_HANDLE on_stop_resizing */
void _A851_386_2_3_4_5_6_7_8_9 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15070, "on_stop_resizing", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3], open [4], open [5], open [6], open [7], open [8]);
}

	/* EV_SIMPLE_APPLICATION prepare */
void _A975_105 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(16827, "prepare", closed [1].it_r))(closed [1].it_r);
}

	/* EV_DYNAMIC_LIST [G#1] inline-agent#1 of append */
EIF_TYPED_VALUE _A1666_151_2 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) F1666_30005)(closed [1].it_r, open [1]);
}

	/* EV_GRID_CHOICE_ITEM deactivate */
void _A1004_145 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(17131, "deactivate", closed [1].it_r))(closed [1].it_r);
}

	/* EV_GRID_CHOICE_ITEM on_mouse_press */
void _A1004_154_2_3_4_5 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(17193, "on_mouse_press", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3], open [4]);
}

	/* EV_GRID_CHOICE_ITEM on_mouse_release */
void _A1004_155_2_3_4_5 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(17194, "on_mouse_release", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3], open [4]);
}

	/* EV_GRID_CHOICE_ITEM on_mouse_move */
void _A1004_153_2_3_4_5_6_7_8 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(17192, "on_mouse_move", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3], open [4], open [5], open [6], open [7]);
}

	/* EV_GRID_CHOICE_ITEM on_key */
void _A1004_156_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(17195, "on_key", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_GRID_CHOICE_ITEM initialize_actions */
void _A1004_152 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(17191, "initialize_actions", closed [1].it_r))(closed [1].it_r);
}

	/* EV_GRID_CHECKABLE_LABEL_ITEM checkbox_handled */
void _A1005_159_2_3_4_5_6_7_8_9 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(17209, "checkbox_handled", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3], open [4], open [5], open [6], open [7], open [8]);
}

	/* EV_GRID_CHECKABLE_LABEL_ITEM on_key_pressed */
void _A1005_160_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(17210, "on_key_pressed", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_GRID_CHECKABLE_LABEL_ITEM on_key_released */
void _A1005_161_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(17211, "on_key_released", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_GRID_CHECKABLE_LABEL_ITEM disable_key_processing */
void _A1005_152 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(17207, "disable_key_processing", closed [1].it_r))(closed [1].it_r);
}

	/* EV_GRID_COMBO_ITEM deactivate */
void _A1006_146 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(17131, "deactivate", closed [1].it_r))(closed [1].it_r);
}

	/* EV_GRID_COMBO_ITEM handle_key */
void _A1006_148_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(17219, "handle_key", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_GRID_COMBO_ITEM initialize_actions */
void _A1006_151 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(17221, "initialize_actions", closed [1].it_r))(closed [1].it_r);
}

	/* EV_GRID_EDITABLE_ITEM deactivate */
void _A1007_150 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(17131, "deactivate", closed [1].it_r))(closed [1].it_r);
}

	/* EV_GRID_EDITABLE_ITEM handle_key */
void _A1007_152_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(17226, "handle_key", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_GRID_EDITABLE_ITEM initialize_actions */
void _A1007_155 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(17228, "initialize_actions", closed [1].it_r))(closed [1].it_r);
}

	/* MULTIPLE_SPLIT_AREA_TOOL_HOLDER destroy_dialog_and_restore */
void _A1026_349 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(17569, "destroy_dialog_and_restore", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* MULTIPLE_SPLIT_AREA_TOOL_HOLDER remove_simulated_height */
void _A1026_347 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(17567, "remove_simulated_height", closed [1].it_r))(closed [1].it_r);
}

	/* MULTIPLE_SPLIT_AREA_TOOL_HOLDER change_minimized_state */
void _A1026_356 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(17576, "change_minimized_state", closed [1].it_r))(closed [1].it_r);
}

	/* MULTIPLE_SPLIT_AREA_TOOL_HOLDER change_maximized_state */
void _A1026_359 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(17579, "change_maximized_state", closed [1].it_r))(closed [1].it_r);
}

	/* MULTIPLE_SPLIT_AREA_TOOL_HOLDER close */
void _A1026_357 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(17577, "close", closed [1].it_r))(closed [1].it_r);
}

	/* MULTIPLE_SPLIT_AREA_TOOL_HOLDER docking_ended */
void _A1026_355 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(17575, "docking_ended", closed [1].it_r))(closed [1].it_r);
}

	/* MULTIPLE_SPLIT_AREA_TOOL_HOLDER docking_started */
void _A1026_352 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(17572, "docking_started", closed [1].it_r))(closed [1].it_r);
}

	/* EV_PATH_FIELD browse_for_directory */
void _A1022_342 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(17504, "browse_for_directory", closed [1].it_r))(closed [1].it_r);
}

	/* EV_PATH_FIELD browse_for_save_file */
void _A1022_343 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(17505, "browse_for_save_file", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* EV_PATH_FIELD browse_for_open_file */
void _A1022_344 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(17506, "browse_for_open_file", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* EV_TEXT_FIELD set_text */
void _A1062_196 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(16987, "set_text", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* EV_ADD_REMOVE_LIST update_button_status */
void _A1023_338 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(17537, "update_button_status", closed [1].it_r))(closed [1].it_r);
}

	/* EV_ADD_REMOVE_LIST add_item_in */
void _A1023_335 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(17534, "add_item_in", closed [1].it_r))(closed [1].it_r);
}

	/* EV_ADD_REMOVE_LIST modify_item_in */
void _A1023_337 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(17536, "modify_item_in", closed [1].it_r))(closed [1].it_r);
}

	/* EV_ADD_REMOVE_LIST remove_item_in */
void _A1023_336 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(17535, "remove_item_in", closed [1].it_r))(closed [1].it_r);
}

	/* EV_INCLUDE_EXCLUDE on_include */
void _A1028_326 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(17602, "on_include", closed [1].it_r))(closed [1].it_r);
}

	/* EV_INCLUDE_EXCLUDE on_exclude */
void _A1028_327 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(17603, "on_exclude", closed [1].it_r))(closed [1].it_r);
}

	/* EV_MODEL_WORLD_CELL update_projector_to_scrollbar_values */
void _A1031_291 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(17838, "update_projector_to_scrollbar_values", closed [1].it_r))(closed [1].it_r);
}

	/* EV_MODEL_WORLD_CELL on_vertical_scroll */
void _A1031_283_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(17830, "on_vertical_scroll", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_MODEL_WORLD_CELL on_horizontal_scroll */
void _A1031_284_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(17831, "on_horizontal_scroll", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_MODEL_WORLD_CELL on_resizing */
void _A1031_285_2_3_4_5 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(17832, "on_resizing", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3], open [4]);
}

	/* EV_MODEL_WORLD_CELL on_pointer_button_press_on_drawing_area */
void _A1031_286_2_3_4_5_6_7_8_9 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(17833, "on_pointer_button_press_on_drawing_area", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3], open [4], open [5], open [6], open [7], open [8]);
}

	/* EV_MODEL_WORLD_CELL on_pointer_button_release_on_drawing_area */
void _A1031_288_2_3_4_5_6_7_8_9 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(17835, "on_pointer_button_release_on_drawing_area", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3], open [4], open [5], open [6], open [7], open [8]);
}

	/* EV_MODEL_WORLD_CELL on_pointer_button_move_on_drawing_area */
void _A1031_287_2_3_4_5_6_7_8 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(17834, "on_pointer_button_move_on_drawing_area", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3], open [4], open [5], open [6], open [7]);
}

	/* EV_MODEL_WORLD_CELL on_mouse_wheel_on_drawing_area */
void _A1031_292_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(17839, "on_mouse_wheel_on_drawing_area", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_MODEL_WORLD_CELL on_key_pressed_on_drawing_area */
void _A1031_293_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(17840, "on_key_pressed_on_drawing_area", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_MODEL_WORLD_CELL on_key_released_on_drawing_area */
void _A1031_294_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(17841, "on_key_released_on_drawing_area", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_MODEL_WORLD_CELL on_autoscroll_time_out */
void _A1031_282 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(17829, "on_autoscroll_time_out", closed [1].it_r))(closed [1].it_r);
}

	/* EV_MODEL_WIDGET_PROJECTOR simulate_mouse_move */
void _A1308_147 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(20580, "simulate_mouse_move", closed [1].it_r))(closed [1].it_r, closed [2], closed [3]);
}

	/* EV_MODEL_WIDGET_PROJECTOR project */
void _A1308_127 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(20531, "project", closed [1].it_r))(closed [1].it_r);
}

	/* EV_MODEL_WIDGET_PROJECTOR mouse_move */
void _A1308_144_2_3_4_5_6_7_8 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(20577, "mouse_move", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3], open [4], open [5], open [6], open [7]);
}

	/* EV_MODEL_WIDGET_PROJECTOR button_press */
void _A1308_138_2_3_4_5_6_7_8_9 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(20571, "button_press", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3], open [4], open [5], open [6], open [7], open [8]);
}

	/* EV_MODEL_WIDGET_PROJECTOR double_press */
void _A1308_139_2_3_4_5_6_7_8_9 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(20572, "double_press", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3], open [4], open [5], open [6], open [7], open [8]);
}

	/* EV_MODEL_WIDGET_PROJECTOR button_release */
void _A1308_140_2_3_4_5_6_7_8_9 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(20573, "button_release", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3], open [4], open [5], open [6], open [7], open [8]);
}

	/* EV_MODEL_WIDGET_PROJECTOR pointer_leave */
void _A1308_141 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(20574, "pointer_leave", closed [1].it_r))(closed [1].it_r);
}

	/* EV_MODEL_WIDGET_PROJECTOR on_pebble_request */
EIF_TYPED_VALUE _A1308_145_2_3 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(20578, "on_pebble_request", closed [1].it_r))(closed [1].it_r, open [1], open [2]);
}

	/* EV_MODEL_WIDGET_PROJECTOR on_drop_target_request */
EIF_TYPED_VALUE _A1308_146_2_3 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(20579, "on_drop_target_request", closed [1].it_r))(closed [1].it_r, open [1], open [2]);
}

	/* EV_TOP_LEFT_SCROLLABLE_AREA on_resize */
void _A1035_280_2_3_4_5 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(17881, "on_resize", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3], open [4]);
}

	/* EV_TOP_LEFT_SCROLLABLE_AREA on_mouse_wheel */
void _A1035_277_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(17878, "on_mouse_wheel", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_TOP_LEFT_SCROLLABLE_AREA on_refresh */
void _A1035_278 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(17879, "on_refresh", closed [1].it_r))(closed [1].it_r);
}

	/* EV_WINDOW_I connect_accelerator */
void _A1205_260_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(19844, "connect_accelerator", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_WINDOW_I disconnect_accelerator */
void _A1205_261_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(19845, "disconnect_accelerator", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_DIALOG dialog_key_press_action */
void _A1040_306_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(17935, "dialog_key_press_action", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_DIALOG destroy */
void _A1040_259 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(16586, "destroy", closed [1].it_r))(closed [1].it_r);
}

	/* EV_MESSAGE_DIALOG on_button_press */
void _A1044_347 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(17966, "on_button_press", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* EV_MESSAGE_DIALOG on_key_press */
void _A1044_348_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(17967, "on_key_press", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_RICH_TEXT_TAB_POSITIONER position_handle */
EIF_TYPED_VALUE _A1055_266_2_3 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(18011, "position_handle", closed [1].it_r))(closed [1].it_r, open [1], open [2], closed [2], closed [3]);
}

	/* EV_RICH_TEXT_TAB_POSITIONER move_started */
void _A1055_263 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(18008, "move_started", closed [1].it_r))(closed [1].it_r, closed [2], closed [3]);
}

	/* EV_RICH_TEXT_TAB_POSITIONER slider_moving */
void _A1055_265_2_3 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(18010, "slider_moving", closed [1].it_r))(closed [1].it_r, open [1], open [2], closed [2], closed [3]);
}

	/* EV_RICH_TEXT_TAB_POSITIONER move_completed */
void _A1055_264 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(18009, "move_completed", closed [1].it_r))(closed [1].it_r, closed [2], closed [3]);
}

	/* EV_RICH_TEXT_TAB_POSITIONER redraw_control */
void _A1055_278_2_3_4_5 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(18023, "redraw_control", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3], open [4]);
}

	/* EV_MENU show */
void _A1110_228 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(18335, "show", closed [1].it_r))(closed [1].it_r);
}

	/* EV_OPTION_BUTTON on_item_select */
void _A1066_228_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(18113, "on_item_select", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_EDITABLE_LIST on_key_release */
void _A1105_355_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(18302, "on_key_release", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* EV_EDITABLE_LIST focus_lost */
void _A1105_359 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(18306, "focus_lost", closed [1].it_r))(closed [1].it_r);
}

	/* EV_EDITABLE_LIST hide_window */
void _A1105_362_2_3_4_5_6_7_8_9 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(18309, "hide_window", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3], open [4], open [5], open [6], open [7], open [8]);
}

	/* EV_EDITABLE_LIST hide_window_on_timer */
void _A1105_353 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(18300, "hide_window_on_timer", closed [1].it_r))(closed [1].it_r);
}

	/* EV_EDITABLE_LIST combo_item_selected */
void _A1105_383 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(18330, "combo_item_selected", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* EV_EDITABLE_LIST resized */
void _A1105_380_2_3_4_5 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(18327, "resized", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3], open [4]);
}

	/* EV_EDITABLE_LIST resized */
void _A1105_380_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(18327, "resized", closed [1].it_r))(closed [1].it_r, open [1], closed [2], closed [3], closed [4]);
}

	/* EV_EDITABLE_LIST edit_row */
void _A1105_346_2_3_4_5_6_7_8_9 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(18293, "edit_row", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3], open [4], open [5], open [6], open [7], open [8]);
}

	/* EV_EDITABLE_LIST on_change_widget_deselected */
void _A1105_352 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(18299, "on_change_widget_deselected", closed [1].it_r))(closed [1].it_r);
}

	/* EV_CHECKABLE_TREE is_item_checked */
EIF_TYPED_VALUE _A1113_306_2 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(18347, "is_item_checked", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_DYNAMIC_TREE_ITEM fill_from_subtree_function */
void _A1116_256 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(18364, "fill_from_subtree_function", closed [1].it_r))(closed [1].it_r);
}

	/* EV_CHECKABLE_LIST is_item_checked */
EIF_TYPED_VALUE _A1120_309_2 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(18385, "is_item_checked", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_APPLICATION_I contextual_help */
void _A1142_301_2_3_4_5_6_7_8_9 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(18679, "contextual_help", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3], open [4], open [5], open [6], open [7], open [8]);
}

	/* EV_APPLICATION_I safe_destroy */
void _A1142_68 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(18394, "safe_destroy", closed [1].it_r))(closed [1].it_r);
}

	/* EV_APPLICATION_I inline-agent#1 of create_target_menu */
EIF_TYPED_VALUE _A1142_306_2_3 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) F1142_30051)(closed [1].it_r, open [1], open [2]);
}

	/* EV_APPLICATION_I inline-agent#2 of create_target_menu */
void _A1142_307_2_3_4 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) F1142_30052)(closed [1].it_r, open [1], open [2], open [3]);
}

	/* EV_APPLICATION_I help_handler */
void _A1142_298 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(18676, "help_handler", closed [1].it_r))(closed [1].it_r);
}

	/* EV_APPLICATION_I enable_contextual_help */
void _A1142_243 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(18622, "enable_contextual_help", closed [1].it_r))(closed [1].it_r);
}

	/* EV_PND_ACTION_SEQUENCE call */
void _A585_182 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10681, "call", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* EV_MENU_ITEM_LIST_IMP inline-agent#1 of menu_item_clicked */
EIF_TYPED_VALUE _A1156_244_2 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) F1156_30055)(closed [1].it_r, open [1], closed [2]);
}

	/* EV_MENU_ITEM_LIST_IMP inline-agent#1 of menu_opened */
EIF_TYPED_VALUE _A1156_245_2 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) F1156_30056)(closed [1].it_r, open [1], closed [2]);
}

	/* EV_DOCKABLE_SOURCE_I close_dockable_dialog */
void _A1158_100 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(18924, "close_dockable_dialog", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* EV_GRID_I user_pebble_function_intermediary_locked */
EIF_TYPED_VALUE _A1202_339_2_3 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(19495, "user_pebble_function_intermediary_locked", closed [1].it_r))(closed [1].it_r, open [1], open [2], closed [2]);
}

	/* EV_GRID_I veto_pebble_function_intermediary */
EIF_TYPED_VALUE _A1202_335_2 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(19493, "veto_pebble_function_intermediary", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_GRID_I drop_action_intermediary */
void _A1202_333_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(19491, "drop_action_intermediary", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_GRID_I pointer_motion_received_scroll_bar_spacer */
void _A1202_612_2_3_4_5_6_7_8 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(19756, "pointer_motion_received_scroll_bar_spacer", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3], open [4], open [5], open [6], open [7]);
}

	/* EV_GRID_I pointer_enter_received */
void _A1202_619 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(19763, "pointer_enter_received", closed [1].it_r))(closed [1].it_r);
}

	/* EV_GRID_I pointer_leave_received */
void _A1202_621 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(19765, "pointer_leave_received", closed [1].it_r))(closed [1].it_r);
}

	/* EV_GRID_I horizontal_scroll_bar_changed */
void _A1202_579_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(19723, "horizontal_scroll_bar_changed", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_GRID_I pointer_motion_received_horizontal_scroll_bar */
void _A1202_611_2_3_4_5_6_7_8 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(19755, "pointer_motion_received_horizontal_scroll_bar", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3], open [4], open [5], open [6], open [7]);
}

	/* EV_GRID_I vertical_scroll_bar_changed */
void _A1202_578_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(19722, "vertical_scroll_bar_changed", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_GRID_I pointer_motion_received_vertical_scroll_bar */
void _A1202_610_2_3_4_5_6_7_8 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(19754, "pointer_motion_received_vertical_scroll_bar", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3], open [4], open [5], open [6], open [7]);
}

	/* EV_GRID_I header_item_resize_started */
void _A1202_573_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(19717, "header_item_resize_started", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_GRID_I header_item_resizing */
void _A1202_570_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(19714, "header_item_resizing", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_GRID_I header_item_resize_ended */
void _A1202_574_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(19718, "header_item_resize_ended", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_GRID_I pointer_motion_received_header */
void _A1202_609_2_3_4_5_6_7_8 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(19753, "pointer_motion_received_header", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3], open [4], open [5], open [6], open [7]);
}

	/* EV_GRID_I pointer_button_press_received_header */
void _A1202_606_2_3_4_5_6_7_8_9 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(19750, "pointer_button_press_received_header", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3], open [4], open [5], open [6], open [7], open [8]);
}

	/* EV_GRID_I pointer_double_press_received_header */
void _A1202_614_2_3_4_5_6_7_8_9 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(19758, "pointer_double_press_received_header", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3], open [4], open [5], open [6], open [7], open [8]);
}

	/* EV_GRID_I pointer_button_release_received_header */
void _A1202_617_2_3_4_5_6_7_8_9 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(19761, "pointer_button_release_received_header", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3], open [4], open [5], open [6], open [7], open [8]);
}

	/* EV_GRID_I viewport_resized */
void _A1202_585_2_3_4_5 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(19729, "viewport_resized", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3], open [4]);
}

	/* EV_GRID_I resize_viewport_in_static_fixed */
void _A1202_565_2_3_4_5 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(19709, "resize_viewport_in_static_fixed", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3], open [4]);
}

	/* EV_GRID_I pointer_motion_received */
void _A1202_607_2_3_4_5_6_7_8 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(19751, "pointer_motion_received", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3], open [4], open [5], open [6], open [7]);
}

	/* EV_GRID_I pointer_button_press_received */
void _A1202_605_2_3_4_5_6_7_8_9 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(19749, "pointer_button_press_received", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3], open [4], open [5], open [6], open [7], open [8]);
}

	/* EV_GRID_I pointer_double_press_received */
void _A1202_613_2_3_4_5_6_7_8_9 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(19757, "pointer_double_press_received", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3], open [4], open [5], open [6], open [7], open [8]);
}

	/* EV_GRID_I pointer_button_release_received */
void _A1202_616_2_3_4_5_6_7_8_9 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(19760, "pointer_button_release_received", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3], open [4], open [5], open [6], open [7], open [8]);
}

	/* EV_GRID_I pointer_enter_received_on_drawable */
void _A1202_620 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(19764, "pointer_enter_received_on_drawable", closed [1].it_r))(closed [1].it_r);
}

	/* EV_GRID_I pointer_leave_received_on_drawable */
void _A1202_622 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(19766, "pointer_leave_received_on_drawable", closed [1].it_r))(closed [1].it_r);
}

	/* EV_GRID_I key_press_received */
void _A1202_638_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(19782, "key_press_received", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_GRID_I key_press_string_received */
void _A1202_629_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(19773, "key_press_string_received", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_GRID_I key_release_received */
void _A1202_630_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(19774, "key_release_received", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_GRID_I focus_in_received */
void _A1202_631 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(19775, "focus_in_received", closed [1].it_r))(closed [1].it_r);
}

	/* EV_GRID_I focus_out_received */
void _A1202_632 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(19776, "focus_out_received", closed [1].it_r))(closed [1].it_r);
}

	/* EV_GRID_I mouse_wheel_received */
void _A1202_633_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(19777, "mouse_wheel_received", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_GRID_I inline-agent#1 of initialize_grid */
EIF_TYPED_VALUE _A1202_729_2 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) F1202_30065)(closed [1].it_r, open [1]);
}

	/* EV_GRID_I recompute_horizontal_scroll_bar_from_once_idle_actions */
void _A1202_503 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(19647, "recompute_horizontal_scroll_bar_from_once_idle_actions", closed [1].it_r))(closed [1].it_r);
}

	/* EV_GRID_I recompute_vertical_scroll_bar_from_once_idle_actions */
void _A1202_502 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(19646, "recompute_vertical_scroll_bar_from_once_idle_actions", closed [1].it_r))(closed [1].it_r);
}

	/* EV_GRID_I user_pebble_function_intermediary */
EIF_TYPED_VALUE _A1202_340_2_3 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(19496, "user_pebble_function_intermediary", closed [1].it_r))(closed [1].it_r, open [1], open [2]);
}

	/* EV_CHECKABLE_TREE_I get_state */
void _A1215_268_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(19962, "get_state", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* EV_MODEL_BUFFER_PROJECTOR on_paint */
void _A1310_164_2_3_4_5 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(20594, "on_paint", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3], open [4]);
}

	/* EV_MODEL_BUFFER_PROJECTOR resize_buffer */
void _A1310_166_2_3_4_5 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(20596, "resize_buffer", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3], open [4]);
}

	/* EV_MODEL_BUFFER_PROJECTOR inline-agent#1 of make_with_buffer */
void _A1310_170 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) F1310_30077)(closed [1].it_r);
}

	/* EV_MODEL_DRAWING_AREA_PROJECTOR on_paint */
void _A1311_156_2_3_4_5 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(20602, "on_paint", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3], open [4]);
}

	/* EV_PROJECTION_ROUTINES draw_figure_arc */
void _A1323_78_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(20768, "draw_figure_arc", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_PROJECTION_ROUTINES draw_figure_dot */
void _A1323_79_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(20769, "draw_figure_dot", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_PROJECTION_ROUTINES draw_figure_ellipse */
void _A1323_80_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(20770, "draw_figure_ellipse", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_PROJECTION_ROUTINES draw_figure_equilateral */
void _A1323_81_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(20771, "draw_figure_equilateral", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_PROJECTION_ROUTINES draw_figure_line */
void _A1323_82_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(20772, "draw_figure_line", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_PROJECTION_ROUTINES draw_figure_picture */
void _A1323_83_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(20773, "draw_figure_picture", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_PROJECTION_ROUTINES draw_figure_pie_slice */
void _A1323_84_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(20774, "draw_figure_pie_slice", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_PROJECTION_ROUTINES draw_figure_polygon */
void _A1323_85_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(20775, "draw_figure_polygon", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_PROJECTION_ROUTINES draw_figure_polyline */
void _A1323_86_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(20776, "draw_figure_polyline", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_PROJECTION_ROUTINES draw_figure_rectangle */
void _A1323_87_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(20777, "draw_figure_rectangle", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_PROJECTION_ROUTINES draw_figure_rounded_rectangle */
void _A1323_88_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(20778, "draw_figure_rounded_rectangle", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_PROJECTION_ROUTINES draw_figure_star */
void _A1323_89_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(20779, "draw_figure_star", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_PROJECTION_ROUTINES draw_figure_text */
void _A1323_90_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(20780, "draw_figure_text", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_WIDGET_PROJECTOR mouse_move */
void _A1326_121_2_3_4_5_6_7_8 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(20851, "mouse_move", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3], open [4], open [5], open [6], open [7]);
}

	/* EV_WIDGET_PROJECTOR button_press */
void _A1326_115_2_3_4_5_6_7_8_9 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(20845, "button_press", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3], open [4], open [5], open [6], open [7], open [8]);
}

	/* EV_WIDGET_PROJECTOR double_press */
void _A1326_116_2_3_4_5_6_7_8_9 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(20846, "double_press", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3], open [4], open [5], open [6], open [7], open [8]);
}

	/* EV_WIDGET_PROJECTOR button_release */
void _A1326_117_2_3_4_5_6_7_8_9 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(20847, "button_release", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3], open [4], open [5], open [6], open [7], open [8]);
}

	/* EV_WIDGET_PROJECTOR pointer_leave */
void _A1326_118 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(20848, "pointer_leave", closed [1].it_r))(closed [1].it_r);
}

	/* EV_WIDGET_PROJECTOR on_pebble_request */
EIF_TYPED_VALUE _A1326_123_2_3 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(20853, "on_pebble_request", closed [1].it_r))(closed [1].it_r, open [1], open [2]);
}

	/* EV_WIDGET_PROJECTOR on_drop_target_request */
EIF_TYPED_VALUE _A1326_124_2_3 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(20854, "on_drop_target_request", closed [1].it_r))(closed [1].it_r, open [1], open [2]);
}

	/* EV_DRAWING_AREA_PROJECTOR on_paint */
void _A1327_129_2_3_4_5 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(20859, "on_paint", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3], open [4]);
}

	/* EV_PIXMAP_IMP_LOADER update_fields */
void A1344_96 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_POINTER arg5, EIF_POINTER arg6)
{
	EIF_TYPED_VALUE u [6];
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(21079, "update_fields", Current))(Current, ((u [0].type = SK_INT32), (u [0].it_i4 = arg1), u [0]), ((u [1].type = SK_INT32), (u [1].it_i4 = arg2), u [1]), ((u [2].type = SK_INT32), (u [2].it_i4 = arg3), u [2]), ((u [3].type = SK_INT32), (u [3].it_i4 = arg4), u [3]), ((u [4].type = SK_POINTER), (u [4].it_p = arg5), u [4]), ((u [5].type = SK_POINTER), (u [5].it_p = arg6), u [5]));
}

	/* EV_PIXMAP_IMP refresh_color_depth */
void _A1345_461 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(21107, "refresh_color_depth", closed [1].it_r))(closed [1].it_r);
}

	/* EV_FONT_IMP update_preferred_faces */
void _A1358_192_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(18501, "update_preferred_faces", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* WEL_WINDOW_ENUMERATOR enumerate_hwnd_callback */
void A1380_146 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	EIF_TYPED_VALUE u [1];
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(21617, "enumerate_hwnd_callback", Current))(Current, ((u [0].type = SK_POINTER), (u [0].it_p = arg1), u [0]));
}

	/* WEL_WINDOW_ENUMERATOR enumerate_child_windows_callback */
void A1380_145 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	EIF_TYPED_VALUE u [1];
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(21616, "enumerate_child_windows_callback", Current))(Current, ((u [0].type = SK_POINTER), (u [0].it_p = arg1), u [0]));
}

	/* WEL_DISPATCHER window_procedure */
EIF_POINTER A1387_366 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	EIF_TYPED_VALUE u [4];
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(21778, "window_procedure", Current))(Current, ((u [0].type = SK_POINTER), (u [0].it_p = arg1), u [0]), ((u [1].type = SK_INT32), (u [1].it_i4 = arg2), u [1]), ((u [2].type = SK_POINTER), (u [2].it_p = arg3), u [2]), ((u [3].type = SK_POINTER), (u [3].it_p = arg4), u [3])).it_p;
}

	/* WEL_DISPATCHER dialog_procedure */
EIF_POINTER A1387_367 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	EIF_TYPED_VALUE u [4];
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(21779, "dialog_procedure", Current))(Current, ((u [0].type = SK_POINTER), (u [0].it_p = arg1), u [0]), ((u [1].type = SK_INT32), (u [1].it_i4 = arg2), u [1]), ((u [2].type = SK_POINTER), (u [2].it_p = arg3), u [2]), ((u [3].type = SK_POINTER), (u [3].it_p = arg4), u [3])).it_p;
}

	/* EV_APPLICATION_IMP on_exception_action */
void _A1390_277_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(18662, "on_exception_action", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_PICK_AND_DROPABLE_IMP real_start_transport */
void _A1460_254 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(22929, "real_start_transport", closed [1].it_r))(closed [1].it_r, closed [2], closed [3], closed [4], closed [5], closed [6], closed [7], closed [8], closed [9], closed [10]);
}

	/* EV_WIDGET_IMP enable_drag_accept_files */
void _A1481_749 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(23217, "enable_drag_accept_files", closed [1].it_r))(closed [1].it_r);
}

	/* EV_WIDGET_IMP disable_drag_accept_files */
void _A1481_750 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(23218, "disable_drag_accept_files", closed [1].it_r))(closed [1].it_r);
}

	/* EV_CONTAINER_IMP disable_widget_sensitivity */
void _A1482_808_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(23253, "disable_widget_sensitivity", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_CONTAINER_IMP add_radio_button */
void _A1482_805_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(23250, "add_radio_button", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_CONTAINER_IMP enable_widget_sensitivity */
void _A1482_807_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(23252, "enable_widget_sensitivity", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_CONTAINER_IMP remove_radio_button */
void _A1482_806_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(23251, "remove_radio_button", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_BOX_IMP removed_so_update_non_expandable_children */
void _A1490_1803_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(23328, "removed_so_update_non_expandable_children", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_BOX_IMP added_so_update_non_expandable_children */
void _A1490_1804_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(23329, "added_so_update_non_expandable_children", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_HORIZONTAL_BOX_IMP set_item_size */
void _A1491_1816 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(23333, "set_item_size", closed [1].it_r))(closed [1].it_r, closed [2], closed [3], closed [4], closed [5], closed [6], closed [7]);
}

	/* EV_VERTICAL_BOX_IMP set_item_size */
void _A1492_1816 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(23333, "set_item_size", closed [1].it_r))(closed [1].it_r, closed [2], closed [3], closed [4], closed [5], closed [6], closed [7]);
}

	/* EV_DIALOG_IMP_COMMON copy_box_attributes */
void _A1504_1872 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(23407, "copy_box_attributes", closed [1].it_r))(closed [1].it_r, closed [2], closed [3]);
}

	/* EV_TOOL_BAR_IMP add_button */
void _A1512_1850_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(23497, "add_button", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_TOOL_BAR_IMP add_radio_button */
void _A1512_1849_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(23496, "add_radio_button", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_TOOL_BAR_IMP add_toggle_button */
void _A1512_1852_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(23499, "add_toggle_button", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_TOOL_BAR_IMP remove_radio_button */
void _A1512_1851_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(23498, "remove_radio_button", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_RICH_TEXT_IMP update_tab_positions */
void _A1533_2138_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(20040, "update_tab_positions", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_GAUGE_IMP set_range */
void _A1534_788 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(23663, "set_range", closed [1].it_r))(closed [1].it_r);
}

	/* FIGURE_MOVABLE on_pointer_motion_on_world */
void _A2350_390_2_3_4_5_6_7_8 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(24160, "on_pointer_motion_on_world", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3], open [4], open [5], open [6], open [7]);
}

	/* FIGURE_MOVABLE on_pointer_button_press_on_world */
void _A2350_391_2_3_4_5_6_7_8_9 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(24161, "on_pointer_button_press_on_world", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3], open [4], open [5], open [6], open [7], open [8]);
}

	/* FIGURE_MOVABLE on_pointer_button_release_on_world */
void _A2350_392_2_3_4_5_6_7_8_9 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(24162, "on_pointer_button_release_on_world", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3], open [4], open [5], open [6], open [7], open [8]);
}

	/* ABOUT_DIALOG destroy */
void _A2373_207 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(16586, "destroy", closed [1].it_r))(closed [1].it_r);
}

	/* MAIN_WINDOW on_howto */
void _A2374_332 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(24357, "on_howto", closed [1].it_r))(closed [1].it_r);
}

	/* MAIN_WINDOW on_about */
void _A2374_331 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(24356, "on_about", closed [1].it_r))(closed [1].it_r);
}

	/* MAIN_WINDOW request_close_window */
void _A2374_333 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(24358, "request_close_window", closed [1].it_r))(closed [1].it_r);
}

	/* STRING_8 is_empty */
EIF_TYPED_VALUE _A878_161_1 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(15191, "is_empty", open [1].it_r))(open [1].it_r);
}


static fnptr feif_address_table[] = {
(fnptr)0,
(fnptr)A197_36,
(fnptr)A477_34,
(fnptr)A578_95,
(fnptr)A578_159,
(fnptr)A578_160,
(fnptr)A634_42,
(fnptr)A793_76,
(fnptr)A796_76,
(fnptr)A1344_96,
(fnptr)A1380_146,
(fnptr)A1380_145,
(fnptr)A1387_366,
(fnptr)A1387_367,
};

fnptr *egc_address_table_init = feif_address_table;



#ifdef __cplusplus
}
#endif
