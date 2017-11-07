/*
 * Code for class CHESS_GAME_CONSTANTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F2371_30793(EIF_REFERENCE);
extern EIF_TYPED_VALUE F2371_30794(EIF_REFERENCE);
extern EIF_TYPED_VALUE F2371_30795(EIF_REFERENCE);
extern EIF_TYPED_VALUE F2371_30796(EIF_REFERENCE);
extern EIF_TYPED_VALUE F2371_30797(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F2371_30798(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F2371_30799(EIF_REFERENCE);
extern EIF_TYPED_VALUE F2371_30800(EIF_REFERENCE);
extern EIF_TYPED_VALUE F2371_30801(EIF_REFERENCE);
extern EIF_TYPED_VALUE F2371_30802(EIF_REFERENCE);
extern EIF_TYPED_VALUE F2371_30803(EIF_REFERENCE);
extern EIF_TYPED_VALUE F2371_30804(EIF_REFERENCE);
extern EIF_TYPED_VALUE F2371_30805(EIF_REFERENCE);
extern EIF_TYPED_VALUE F2371_30806(EIF_REFERENCE);
extern EIF_TYPED_VALUE F2371_30807(EIF_REFERENCE);
extern EIF_TYPED_VALUE F2371_30808(EIF_REFERENCE);
extern EIF_TYPED_VALUE F2371_30809(EIF_REFERENCE);
extern EIF_TYPED_VALUE F2371_30810(EIF_REFERENCE);
extern EIF_TYPED_VALUE F2371_30811(EIF_REFERENCE);
extern void EIF_Minit2371(void);

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {CHESS_GAME_CONSTANTS}.image_folder */
RTOID (F2371_30793)


EIF_TYPED_VALUE F2371_30793 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F2371_30793,36195,RTMS_EX_H("imagess",7,1110984819));
}

/* {CHESS_GAME_CONSTANTS}.chess_folder */
RTOID (F2371_30794)


EIF_TYPED_VALUE F2371_30794 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F2371_30794,36196,RTMS_EX_H("chess_game",10,1779707237));
}

/* {CHESS_GAME_CONSTANTS}.chess_img_path */
EIF_TYPED_VALUE F2371_30795 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "chess_img_path";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 2370, Current, 0, 0, 36196);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(2370, Current, 36196);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF800094C, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(2380, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(24449, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	ub1 = (EIF_BOOLEAN) 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(24450, "set_relative", Result))(Result, ub1x);
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(24301, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(24454, "append_name", Result))(Result, ur1x);
	RTHOOK(4);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(24302, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(24454, "append_name", Result))(Result, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ub1
}

/* {CHESS_GAME_CONSTANTS}.chess_img_figures */
RTOID (F2371_30796)
EIF_TYPED_VALUE F2371_30796 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "chess_img_figures";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F2371_30796);

	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 2370, Current, 0, 0, 36197);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(2370, Current, 36197);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF800094C, 0,0); /* Result */
	Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(24303, Dtype(Current)))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(2);
	tr1 = RTMS_EX_H("figures.png",11,1346243687);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(24454, "append_name", Result))(Result, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef Result
}

/* {CHESS_GAME_CONSTANTS}.chess_img_by_figure */
EIF_TYPED_VALUE F2371_30797 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "chess_img_by_figure";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLR(6,ur1);
	RTLIU(7);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 2370, Current, 0, 1, 36198);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(2370, Current, 36198);
	RTCC(arg1, 2370, l_feature_name, 1, eif_new_type(2317, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF800094C, 0,0); /* Result */
	Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(24303, Dtype(Current)))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(28, "out", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(23920, "color", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(28, "out", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr3);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15253, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = RTMS_EX_H(".png",4,779120231);
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15253, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(24454, "append_name", Result))(Result, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef arg1
}

/* {CHESS_GAME_CONSTANTS}.chess_img_by_name */
EIF_TYPED_VALUE F2371_30798 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "chess_img_by_name";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLR(3,tr1);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 2370, Current, 0, 1, 36199);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(2370, Current, 36199);
	RTCC(arg1, 2370, l_feature_name, 1, eif_new_type(877, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF800094C, 0,0); /* Result */
	Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(24303, Dtype(Current)))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(2);
	tr1 = RTMS_EX_H(".png",4,779120231);
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15253, "plus", arg1))(arg1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(24454, "append_name", Result))(Result, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef arg1
}

/* {CHESS_GAME_CONSTANTS}.button_ok_item */
RTOID (F2371_30799)


EIF_TYPED_VALUE F2371_30799 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F2371_30799,36201,RTMS_EX_H("OK",2,20299));
}

/* {CHESS_GAME_CONSTANTS}.menu_game_item */
RTOID (F2371_30800)


EIF_TYPED_VALUE F2371_30800 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F2371_30800,36202,RTMS_EX_H("&Game",5,1197859173));
}

/* {CHESS_GAME_CONSTANTS}.menu_game_new_item */
RTOID (F2371_30801)


EIF_TYPED_VALUE F2371_30801 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F2371_30801,36203,RTMS_EX_H("&New game\011Ctrl+N",16,955293774));
}

/* {CHESS_GAME_CONSTANTS}.menu_game_open_item */
RTOID (F2371_30802)


EIF_TYPED_VALUE F2371_30802 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F2371_30802,36204,RTMS_EX_H("&Open saved games...\011Ctrl+O",27,372300111));
}

/* {CHESS_GAME_CONSTANTS}.menu_game_save_item */
RTOID (F2371_30803)


EIF_TYPED_VALUE F2371_30803 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F2371_30803,36205,RTMS_EX_H("&Save game\011Ctrl+S",17,178655571));
}

/* {CHESS_GAME_CONSTANTS}.menu_file_saveas_item */
RTOID (F2371_30804)


EIF_TYPED_VALUE F2371_30804 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F2371_30804,36206,RTMS_EX_H("Save &As...",11,2118083374));
}

/* {CHESS_GAME_CONSTANTS}.menu_game_config_item */
RTOID (F2371_30805)


EIF_TYPED_VALUE F2371_30805 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F2371_30805,36207,RTMS_EX_H("&Configurations",15,1348863859));
}

/* {CHESS_GAME_CONSTANTS}.menu_file_exit_item */
RTOID (F2371_30806)


EIF_TYPED_VALUE F2371_30806 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F2371_30806,36208,RTMS_EX_H("E&xit",5,645955444));
}

/* {CHESS_GAME_CONSTANTS}.menu_help_item */
RTOID (F2371_30807)


EIF_TYPED_VALUE F2371_30807 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F2371_30807,36209,RTMS_EX_H("&Help",5,1214898288));
}

/* {CHESS_GAME_CONSTANTS}.menu_help_howtoplay_item */
RTOID (F2371_30808)


EIF_TYPED_VALUE F2371_30808 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F2371_30808,36210,RTMS_EX_H("&How to play",12,971622009));
}

/* {CHESS_GAME_CONSTANTS}.menu_help_about_item */
RTOID (F2371_30809)


EIF_TYPED_VALUE F2371_30809 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F2371_30809,36211,RTMS_EX_H("&About...",9,62644014));
}

/* {CHESS_GAME_CONSTANTS}.label_confirm_close_window */
RTOID (F2371_30810)


EIF_TYPED_VALUE F2371_30810 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F2371_30810,36212,RTMS_EX_H("Thank you for playing my game :)\012Click OK to exit.",50,601300526));
}

/* {CHESS_GAME_CONSTANTS}.label_status_bar */
RTOID (F2371_30811)


EIF_TYPED_VALUE F2371_30811 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F2371_30811,36213,RTMS_EX_H("Status: waiting for user actions",32,1102690675));
}

void EIF_Minit2371 (void)
{
	GTCX
	RTOTS (30793,F2371_30793)
	RTOTS (30794,F2371_30794)
	RTOTS (30796,F2371_30796)
	RTOTS (30799,F2371_30799)
	RTOTS (30800,F2371_30800)
	RTOTS (30801,F2371_30801)
	RTOTS (30802,F2371_30802)
	RTOTS (30803,F2371_30803)
	RTOTS (30804,F2371_30804)
	RTOTS (30805,F2371_30805)
	RTOTS (30806,F2371_30806)
	RTOTS (30807,F2371_30807)
	RTOTS (30808,F2371_30808)
	RTOTS (30809,F2371_30809)
	RTOTS (30810,F2371_30810)
	RTOTS (30811,F2371_30811)
}


#ifdef __cplusplus
}
#endif
