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

// Function ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.GetItemDetailedName
struct UItemToolTipWidgetv3_C_GetItemDetailedName_Params
{
	class UEquipableItem*                              NewParam;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Name;                                                     // (Parm, OutParm)
};

// Function ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.On_MagazineIcon_Prepass_1
struct UItemToolTipWidgetv3_C_On_MagazineIcon_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.GetFiringRate
struct UItemToolTipWidgetv3_C_GetFiringRate_Params
{
	class ATslWeapon_Trajectory*                       ShooterWeapon_Trajectory;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                AmmoClip;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FullReloadingTime;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FringRate;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.GetShooterWeapon
struct UItemToolTipWidgetv3_C_GetShooterWeapon_Params
{
	class UEquipableItem*                              EquipableItem;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class ATslWeapon*                                  ShooterWeapon;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class ATslWeapon_Trajectory*                       ShooterWeapon_Trajectory;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.Clear
struct UItemToolTipWidgetv3_C_Clear_Params
{
};

// Function ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.GetAttachedAmmo
struct UItemToolTipWidgetv3_C_GetAttachedAmmo_Params
{
	class UWeaponItem*                                 WeaponItem;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                AmmoClip;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.GetAmmo
struct UItemToolTipWidgetv3_C_GetAmmo_Params
{
	class UWeaponItem*                                 WeaponItem;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                AmmoClip;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.GetAttachedStability
struct UItemToolTipWidgetv3_C_GetAttachedStability_Params
{
	class ATslWeapon_Trajectory*                       ShooterWeapon_Trajectory;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Accuracy;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.GetStability
struct UItemToolTipWidgetv3_C_GetStability_Params
{
	class ATslWeapon_Trajectory*                       ShooterWeapon_Trajectory;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Accuracy;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.GetWeaponEffectiveRange
struct UItemToolTipWidgetv3_C_GetWeaponEffectiveRange_Params
{
	class ATslWeapon_Trajectory*                       ShooterWeapon_Trajectory;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EffectRange;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.GetWeaponPower
struct UItemToolTipWidgetv3_C_GetWeaponPower_Params
{
	class ATslWeapon*                                  ShooterWeapon;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.FadeIn
struct UItemToolTipWidgetv3_C_FadeIn_Params
{
};

// Function ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.UpdateDefaultInfo
struct UItemToolTipWidgetv3_C_UpdateDefaultInfo_Params
{
	TScriptInterface<class USlotInterface>             Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.SetItemByInterface
struct UItemToolTipWidgetv3_C_SetItemByInterface_Params
{
	TScriptInterface<class USlotInterface>             Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.UpdateItemDetailInfo
struct UItemToolTipWidgetv3_C_UpdateItemDetailInfo_Params
{
	class UItem*                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.Construct
struct UItemToolTipWidgetv3_C_Construct_Params
{
};

// Function ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.UpdateSlotInfo
struct UItemToolTipWidgetv3_C_UpdateSlotInfo_Params
{
	TScriptInterface<class USlotInterface>*            SlotInterface;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.SetToolTipOn
struct UItemToolTipWidgetv3_C_SetToolTipOn_Params
{
};

// Function ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.SetToolTipOff
struct UItemToolTipWidgetv3_C_SetToolTipOff_Params
{
};

// Function ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.StartFadeIn
struct UItemToolTipWidgetv3_C_StartFadeIn_Params
{
};

// Function ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.ExecuteUbergraph_ItemToolTipWidgetv3
struct UItemToolTipWidgetv3_C_ExecuteUbergraph_ItemToolTipWidgetv3_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
