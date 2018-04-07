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

// Function WeaponSkinGuideWidget.WeaponSkinGuideWidget_C.FadeIn
struct UWeaponSkinGuideWidget_C_FadeIn_Params
{
};

// Function WeaponSkinGuideWidget.WeaponSkinGuideWidget_C.ShowLine
struct UWeaponSkinGuideWidget_C_ShowLine_Params
{
	class UWidget*                                     LineWidget;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponSkinGuideWidget.WeaponSkinGuideWidget_C.MouseLeave
struct UWeaponSkinGuideWidget_C_MouseLeave_Params
{
};

// Function WeaponSkinGuideWidget.WeaponSkinGuideWidget_C.InitKeys
struct UWeaponSkinGuideWidget_C_InitKeys_Params
{
	struct FName                                       ActionName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponSkinGuideWidget.WeaponSkinGuideWidget_C.SelectNone
struct UWeaponSkinGuideWidget_C_SelectNone_Params
{
};

// Function WeaponSkinGuideWidget.WeaponSkinGuideWidget_C.RefreshByItem
struct UWeaponSkinGuideWidget_C_RefreshByItem_Params
{
	TScriptInterface<class USlotInterface>             Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponSkinGuideWidget.WeaponSkinGuideWidget_C.KeySetVisibility
struct UWeaponSkinGuideWidget_C_KeySetVisibility_Params
{
	class UWidget*                                     KeyWidget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bVisible;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponSkinGuideWidget.WeaponSkinGuideWidget_C.Construct
struct UWeaponSkinGuideWidget_C_Construct_Params
{
};

// Function WeaponSkinGuideWidget.WeaponSkinGuideWidget_C.ExecuteUbergraph_WeaponSkinGuideWidget
struct UWeaponSkinGuideWidget_C_ExecuteUbergraph_WeaponSkinGuideWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
