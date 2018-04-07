#pragma once

// PLAYERUNKNOWN'S BATTLEGROUNDS (3.7.27.27) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HudMain.HudMain_C.OnKey_EmoteWheelReleased
struct UHudMain_C_OnKey_EmoteWheelReleased_Params
{
};

// Function HudMain.HudMain_C.OnKey_EmoteWheelPressed
struct UHudMain_C_OnKey_EmoteWheelPressed_Params
{
};

// Function HudMain.HudMain_C.OnInit_Delegate
struct UHudMain_C_OnInit_Delegate_Params
{
	class ATslBaseHUD**                                TslBaseHUD;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HudMain.HudMain_C.OnInit_Replay
struct UHudMain_C_OnInit_Replay_Params
{
	class ATslBaseHUD**                                TslBaseHUD;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HudMain.HudMain_C.OnInit_Input
struct UHudMain_C_OnInit_Input_Params
{
	class ATslBaseHUD**                                TslBaseHUD;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HudMain.HudMain_C.OnInit_Widget
struct UHudMain_C_OnInit_Widget_Params
{
	class ATslBaseHUD**                                TslBaseHUD;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HudMain.HudMain_C.OnMouseMove
struct UHudMain_C_OnMouseMove_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function HudMain.HudMain_C.SetObserverSpectatingUp
struct UHudMain_C_SetObserverSpectatingUp_Params
{
};

// Function HudMain.HudMain_C.SetObserverSpectatingDown
struct UHudMain_C_SetObserverSpectatingDown_Params
{
};

// Function HudMain.HudMain_C.ShouldShowReplayMenu
struct UHudMain_C_ShouldShowReplayMenu_Params
{
	bool                                               bShow;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function HudMain.HudMain_C.BindEventForShowReplayTimeline
struct UHudMain_C_BindEventForShowReplayTimeline_Params
{
};

// Function HudMain.HudMain_C.ShowReplayTimeLine
struct UHudMain_C_ShowReplayTimeLine_Params
{
	bool                                               bShow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HudMain.HudMain_C.SetHUDForIngameReplayMenu
struct UHudMain_C_SetHUDForIngameReplayMenu_Params
{
};

// Function HudMain.HudMain_C.BindEventForMapClosing
struct UHudMain_C_BindEventForMapClosing_Params
{
};

// Function HudMain.HudMain_C.OnKey_ReplayMenuOrEscape
struct UHudMain_C_OnKey_ReplayMenuOrEscape_Params
{
};

// Function HudMain.HudMain_C.InitForReplay
struct UHudMain_C_InitForReplay_Params
{
};

// Function HudMain.HudMain_C.OnToggleOption
struct UHudMain_C_OnToggleOption_Params
{
};

// Function HudMain.HudMain_C.UpdateReplayTimeline
struct UHudMain_C_UpdateReplayTimeline_Params
{
};

// Function HudMain.HudMain_C.OnToggleBattleList
struct UHudMain_C_OnToggleBattleList_Params
{
};

// Function HudMain.HudMain_C.OnMapHide
struct UHudMain_C_OnMapHide_Params
{
};

// Function HudMain.HudMain_C.OnMapShow
struct UHudMain_C_OnMapShow_Params
{
};

// Function HudMain.HudMain_C.OnKey_MapReleased
struct UHudMain_C_OnKey_MapReleased_Params
{
};

// Function HudMain.HudMain_C.OnKey_MapPressed
struct UHudMain_C_OnKey_MapPressed_Params
{
};

// Function HudMain.HudMain_C.OnShowCarePackageItemList
struct UHudMain_C_OnShowCarePackageItemList_Params
{
};

// Function HudMain.HudMain_C.IsShowMapOrInventory
struct UHudMain_C_IsShowMapOrInventory_Params
{
	bool                                               bIsShow;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function HudMain.HudMain_C.OnTogglePlayerList
struct UHudMain_C_OnTogglePlayerList_Params
{
};

// Function HudMain.HudMain_C.IsCharacterAlive
struct UHudMain_C_IsCharacterAlive_Params
{
	bool                                               IsAlive;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function HudMain.HudMain_C.OnNitifyHit
struct UHudMain_C_OnNitifyHit_Params
{
	float                                              DamagePercent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	EDamageTypeCategory                                DamageTypeCategory;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HudMain.HudMain_C.OnKey_SystemMenuOrEscape
struct UHudMain_C_OnKey_SystemMenuOrEscape_Params
{
};

// Function HudMain.HudMain_C.OnToggleMap
struct UHudMain_C_OnToggleMap_Params
{
};

// Function HudMain.HudMain_C.OnPossessPawnChange
struct UHudMain_C_OnPossessPawnChange_Params
{
};

// Function HudMain.HudMain_C.CreateCheckReplayTimer
struct UHudMain_C_CreateCheckReplayTimer_Params
{
};

// Function HudMain.HudMain_C.CheckReplayTimer
struct UHudMain_C_CheckReplayTimer_Params
{
};

// Function HudMain.HudMain_C.HideMapForReplay
struct UHudMain_C_HideMapForReplay_Params
{
};

// Function HudMain.HudMain_C.Construct
struct UHudMain_C_Construct_Params
{
};

// Function HudMain.HudMain_C.ExecuteUbergraph_HudMain
struct UHudMain_C_ExecuteUbergraph_HudMain_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HudMain.HudMain_C.ButtonClickedDispatcher__DelegateSignature
struct UHudMain_C_ButtonClickedDispatcher__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
