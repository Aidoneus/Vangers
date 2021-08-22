	Screen "Select Game"
	{
		default_obj "GameObj0"

		Object "TitleStr"
		{
			align_x center
			y	{ $TITLE_STR2_Y - 50 }

			Element STRING {
					align_x center

					terrain_num	$TERRAIN4

					font		0
					null_level	$DEFAULT_NULL
					string		$iSTR_SELECT_GAME
			}
		}

		Object "Back Option"
		{
			x	$Select_Game_Back_Option_PosX
			y	$Select_Game_Back_Option_PosY

			Element STRING {
					align_x center

					terrain_num	$TERRAIN2

					font		0
					null_level	$DEFAULT_NULL
					string		$iSTR_BACK
			}
			Event {
				key $VK_LBUTTON
				key $VK_ESCAPE

				time { $PRESS_OBJ_TIME + $MOVE2SCREEN_TIME + 1 }
				EvComm {
					low_obj 	"Back Option"
					time		$PRESS_OBJ_TIME
					start_time	0
				}
				EvComm {
					move2screen	"Server Config screen"
					start_time	$PRESS_OBJ_TIME
					time		$MOVE2SCREEN_TIME
				}
			}
			Event {
				key $VK_RBUTTON

				time { $SMOOTH_OBJ_TIME + $HIDE_OBJ_TIME + $MOVE2SCREEN_TIME + 1 }
				EvComm {
					smooth_obj	"Back Option" 2
					start_time	0
					time		$SMOOTH_OBJ_TIME
				}
				EvComm {
					hide_obj	"Back Option"
					start_time	$SMOOTH_OBJ_TIME
					time		$HIDE_OBJ_TIME
				}
				EvComm {
					move2screen	"Server Config screen"
					start_time	{ $SMOOTH_OBJ_TIME + $HIDE_OBJ_TIME }
					time		$MOVE2SCREEN_TIME
				}
			}
		}

		// Game mode buttons

		#define GAME_Y			0
		#define GAME_OBJ_NAME	"GameObj0"
		#define GAME_OBJ_NEXT	"GameObj1"
		#define GAME_OBJ_PREV	"GameObj1"
		#define GAME_OBJ_ID		$iSTR_VAN_WAR
		#define GAME_SCR		"Game Params 0"
		#define GAME_STRING_ID	"GameStr0"
		#define GDA_LINE0		EvComm { hide_obj "GD1" } EvComm { hide_obj "GD2" } EvComm { hide_obj "GD3" } EvComm { hide_obj "GD4" } EvComm { hide_obj "GD5" } EvComm { hide_obj "GD6" } EvComm { hide_obj "GD7" } EvComm { rise_obj "GD0" }
		#include "iscreen/scripts/gameobj_desc.inc"

		#define GAME_Y			1
		#define GAME_OBJ_NAME	"GameObj1"
		#define GAME_OBJ_NEXT	"GameObj2"
		#define GAME_OBJ_PREV	"GameObj0"
		#define GAME_OBJ_ID		$iSTR_MECHOSOMA
		#define GAME_SCR		"Game Params 1"
		#define GAME_STRING_ID	"GameStr1"
		#define GDA_LINE0		EvComm { hide_obj "GD0" } EvComm { hide_obj "GD2" } EvComm { hide_obj "GD3" } EvComm { hide_obj "GD4" } EvComm { hide_obj "GD5" } EvComm { hide_obj "GD6" } EvComm { hide_obj "GD7" } EvComm { rise_obj "GD1" }
		#include "iscreen/scripts/gameobj_desc.inc"

		#define GAME_Y			2
		#define GAME_OBJ_NAME	"GameObj2"
		//	#define GAME_OBJ_NEXT   "GameObj3"
		#define GAME_OBJ_NEXT   "GameObj5"
		#define GAME_OBJ_PREV	"GameObj1"
		#define GAME_OBJ_ID		$iSTR_PASSEMBLOSS
		#define GAME_SCR		"Game Params 2"
		#define GAME_STRING_ID	"GameStr2"
		#define GDA_LINE0		EvComm { hide_obj "GD0" } EvComm { hide_obj "GD1" } EvComm { hide_obj "GD3" } EvComm { hide_obj "GD4" } EvComm { hide_obj "GD5" } EvComm { hide_obj "GD6" } EvComm { hide_obj "GD7" } EvComm { rise_obj "GD2" }
		#include "iscreen/scripts/gameobj_desc.inc"
		/*
			#define GAME_Y			3
			#define GAME_OBJ_NAME	"GameObj3"
			#define GAME_OBJ_NEXT	"GameObj4"
			#define GAME_OBJ_PREV	"GameObj2"
			#define GAME_OBJ_ID		$iSTR_HUNTAGE
			#define GAME_SCR		"Game Params 3"
			#define GAME_STRING_ID	"GameStr3"
		 	#define GDA_LINE0		EvComm { hide_obj "GD0" } EvComm { hide_obj "GD1" } EvComm { hide_obj "GD2" } EvComm { hide_obj "GD4" } EvComm { hide_obj "GD5" } EvComm { hide_obj "GD6" } EvComm { hide_obj "GD7" } EvComm { rise_obj "GD3" }
			#include "iscreen/scripts/gameobj_desc.inc"
		*/
		Object "GameStr3Inactive"
		{
			x 20 y { $SELECT_SCREEN_START_Y + $SELECT_SCREEN_DELTA_Y * 3 }
			Element STRING {
					align_x		center
					terrain_num	$TERRAIN4
					font		$PARAM_FNT
					null_level	$DEFAULT_NULL
					string		$iSTR_HUNTAGE
			}
		}
		/*
			#define GAME_Y			4
			#define GAME_OBJ_NAME	"GameObj4"
			#define GAME_OBJ_NEXT	"GameObj5"
			#define GAME_OBJ_PREV	"GameObj3"
			#define GAME_OBJ_ID		$iSTR_MUSTODONT
			#define GAME_SCR		"Game Params 4"
			#define GAME_STRING_ID	"GameStr4"
		 	$define GDA_LINE0		EvComm { hide_obj "GD0" } EvComm { hide_obj "GD1" } EvComm { hide_obj "GD2" } EvComm { hide_obj "GD3" } EvComm { hide_obj "GD5" } EvComm { hide_obj "GD6" } EvComm { hide_obj "GD7" } EvComm { rise_obj "GD4" }
			#include "iscreen/scripts/gameobj_desc.inc"
		*/
		Object "GameStr4Inactive"
		{
			x 20 y { $SELECT_SCREEN_START_Y + $SELECT_SCREEN_DELTA_Y * 4 }
			Element STRING {
					align_x		center
					terrain_num	$TERRAIN4
					font		$PARAM_FNT
					null_level	$DEFAULT_NULL
					string		$iSTR_MUSTODONT
			}
		}

		#define GAME_Y			5
		#define GAME_OBJ_NAME	"GameObj5"
		//	#define GAME_OBJ_NEXT	"GameObj6"
		#define GAME_OBJ_NEXT	"GameObj2"
		//	#define GAME_OBJ_PREV	"GameObj4"
		#define GAME_OBJ_PREV	"GameObj2"
		#define GAME_OBJ_ID		$iSTR_MIR_RAGE
		#define GAME_SCR		"Game Params 5"
		#define GAME_STRING_ID	"GameStr5"
		#define GDA_LINE0		EvComm { hide_obj "GD0" } EvComm { hide_obj "GD1" } EvComm { hide_obj "GD2" } EvComm { hide_obj "GD3" } EvComm { hide_obj "GD4" } EvComm { hide_obj "GD6" } EvComm { hide_obj "GD7" } EvComm { rise_obj "GD5" }
		#include "iscreen/scripts/gameobj_desc.inc"
		/*
			#define GAME_Y			6
			#define GAME_OBJ_NAME	"GameObj6"
			#define GAME_OBJ_NEXT	"GameObj5"
			#define GAME_OBJ_PREV	"GameObj5"
			#define GAME_OBJ_ID		$iSTR_UNIVANG
			#define GAME_SCR		"Game Params 6"
			#define GAME_STRING_ID	"GameStr6"
		 	#define GDA_LINE0		EvComm { hide_obj "GD0" } EvComm { hide_obj "GD1" } EvComm { hide_obj "GD2" } EvComm { hide_obj "GD3" } EvComm { hide_obj "GD4" } EvComm { hide_obj "GD5" } EvComm { hide_obj "GD7" } EvComm { rise_obj "GD6" }
			#include "iscreen/scripts/gameobj_desc.inc"
		*/
		Object "GameStr6Inactive"
		{
			x 20 y { $SELECT_SCREEN_START_Y + $SELECT_SCREEN_DELTA_Y * 6 }
			Element STRING {
					align_x		center
					terrain_num	$TERRAIN4
					font		$PARAM_FNT
					null_level	$DEFAULT_NULL
					string		$iSTR_UNIVANG
			}
		}

		/*
			#define GAME_Y			7
			#define GAME_OBJ_NAME	"GameObj7"
			#define GAME_OBJ_NEXT	"GameObj5"
			#define GAME_OBJ_PREV	"GameObj5"
			#define GAME_OBJ_ID		$iSTR_CARETAKERS
			#define GAME_SCR		"Game Params 7"
			#define GAME_STRING_ID	"GameStr7"
		 	#define GDA_LINE0		EvComm { hide_obj "GD0" } EvComm { hide_obj "GD1" } EvComm { hide_obj "GD2" } EvComm { hide_obj "GD3" } EvComm { hide_obj "GD4" } EvComm { hide_obj "GD5" } EvComm { hide_obj "GD6" } EvComm { rise_obj "GD7" }
			#include "iscreen/scripts/gameobj_desc.inc"
		*/
		Object "GameStr7Inactive"
		{
			x 20 y { $SELECT_SCREEN_START_Y + $SELECT_SCREEN_DELTA_Y * 7 }
			Element STRING {
					align_x		center
					terrain_num	$TERRAIN4
					font		$PARAM_FNT
					null_level	$DEFAULT_NULL
					string		$iSTR_CARETAKERS
			}
		}

		// Game descriptions

		Object "GD7" { null_level 200 x 300 y 85 space 2 font 0 s_text $iSTR_MP7_00 }
		Object "GD6" { null_level 200 x 300 y 85 space 2 font 0 s_text $iSTR_MP6_00 }
		Object "GD5" { null_level 200 x 300 y 85 space 2 font 0 s_text $iSTR_MP5_00 }
		Object "GD4" { null_level 200 x 300 y 85 space 2 font 0 s_text $iSTR_MP4_00 }
		Object "GD3" { null_level 200 x 300 y 85 space 2 font 0 s_text $iSTR_MP3_00 }
		Object "GD2" { null_level 200 x 300 y 85 space 2 font 0 s_text $iSTR_MP2_00 }
		Object "GD1" { null_level 200 x 300 y 85 space 2 font 0 s_text $iSTR_MP1_00 }
		Object "GD0" { null_level 200 x 300 y 85 space 2 font 0 s_text $iSTR_MP0_00 }
	}