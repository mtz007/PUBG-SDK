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

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetSlotItem
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_GetSlotItem_Params
{
	TScriptInterface<class USlotInterface>             SlotItem;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetSlotContainer
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_GetSlotContainer_Params
{
	TScriptInterface<class USlotContainerInterface>    SlotContainer;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.IsBodyFocused
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_IsBodyFocused_Params
{
	bool                                               NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.IsAttachmentSlotFocused
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_IsAttachmentSlotFocused_Params
{
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.IsWeaponExist
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_IsWeaponExist_Params
{
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.CanHandleInput
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_CanHandleInput_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.ContainFocus
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_ContainFocus_Params
{
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.SetFocusToAttachment
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_SetFocusToAttachment_Params
{
	bool                                               bFocus;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.SetFocusToBody
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_SetFocusToBody_Params
{
	bool                                               bFocus;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetBackgroundState
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_GetBackgroundState_Params
{
	float                                              State;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.IsSlotSelected_Bp
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_IsSlotSelected_Bp_Params
{
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.OnSwap
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_OnSwap_Params
{
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.ProcessSwap
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_ProcessSwap_Params
{
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.OnPressedSwap
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_OnPressedSwap_Params
{
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.ProcessDrop
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_ProcessDrop_Params
{
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.DroporUnEquipItem
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_DroporUnEquipItem_Params
{
	bool                                               bDrop;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.OnDeatchOrDropAttachment
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_OnDeatchOrDropAttachment_Params
{
	bool                                               bDetach;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAll;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.ReleasedDropInput
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_ReleasedDropInput_Params
{
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.PressedDropInput
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_PressedDropInput_Params
{
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.ProcessDetach
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_ProcessDetach_Params
{
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.ReleaseDetachInput
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_ReleaseDetachInput_Params
{
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.PressedDetachInput
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_PressedDetachInput_Params
{
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetInventoryWidgetGamepad
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_GetInventoryWidgetGamepad_Params
{
	class UInventoryWidget_Gamepad_C*                  NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.On_BackgroundSlot_Prepass_1
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_On_BackgroundSlot_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.FindLastFocusableWidget
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_FindLastFocusableWidget_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.HandleWidgetMoveRight
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_HandleWidgetMoveRight_Params
{
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.HandleWidgetMoveLeft
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_HandleWidgetMoveLeft_Params
{
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetFocusingChildWidget
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_GetFocusingChildWidget_Params
{
	class UUserWidget*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetChildRightFocusableWidget
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_GetChildRightFocusableWidget_Params
{
	class UUserWidget*                                 RightWidget;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetChildLeftFocusableWidget
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_GetChildLeftFocusableWidget_Params
{
	class UUserWidget*                                 Left_Widget;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.IsFocusable
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_IsFocusable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.FindFirstFocusableWidget
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_FindFirstFocusableWidget_Params
{
	class UUserWidget*                                 FocusableWidget;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.IsFocus
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_IsFocus_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.SetFocus
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_SetFocus_Params
{
	bool*                                              NewFocus;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetDragDroppingEquipableItem
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_GetDragDroppingEquipableItem_Params
{
	class UEquipableItem*                              EquipableItem;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.FindEquipableWeaponPosition
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_FindEquipableWeaponPosition_Params
{
	struct FEquipPosition                              WeaponPosition;                                           // (Parm, OutParm)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.UpdateWeaponGunInfo
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_UpdateWeaponGunInfo_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetAmmoName
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_GetAmmoName_Params
{
	struct FText                                       ItemName;                                                 // (Parm, OutParm)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetAmmoIcon
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_GetAmmoIcon_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetHandOnUnLoadedAmmoCount
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_GetHandOnUnLoadedAmmoCount_Params
{
	int                                                Count;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetHandOnLoadedAmmoCount
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_GetHandOnLoadedAmmoCount_Params
{
	int                                                Count;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.On_AmmoInfoLayer_Prepass_1
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_On_AmmoInfoLayer_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.OnUpdateWeapon
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_OnUpdateWeapon_Params
{
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.On_WeaponCaptureImage_Prepass_1
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_On_WeaponCaptureImage_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetItem_Bp
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_GetItem_Bp_Params
{
	class UItem*                                       Item;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.IsSlotMouseOver_Bp
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_IsSlotMouseOver_Bp_Params
{
	bool                                               IsMouseOver;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.IsSlotSubOn_Bp
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_IsSlotSubOn_Bp_Params
{
	bool                                               SubOn;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.IsSlotOn_Bp
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_IsSlotOn_Bp_Params
{
	bool                                               IsOn;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetWeaponSlotEquipId
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_GetWeaponSlotEquipId_Params
{
	EEquipSlotID                                       EquipSlotID;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.InitializeWeaponEquipSlot
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_InitializeWeaponEquipSlot_Params
{
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetSlotVisibility
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_GetSlotVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetWeaponInfoText
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_GetWeaponInfoText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.Construct
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_Construct_Params
{
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.OnUpdateItem
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_OnUpdateItem_Params
{
	class UItem**                                      Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.SetInventory
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_SetInventory_Params
{
	class UInventoryWidget_C**                         InventoryWidget;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.Tick
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.OnAttachmentFocused_Event_1
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_OnAttachmentFocused_Event_1_Params
{
	EWeaponAttachmentSlotID                            AttachmentSlotID;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class USlotInterface>             SlotInterface;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class USlotContainerInterface>    SlotContainerInterface;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.ExecuteUbergraph_WeaponEquipmentSlotWidget_Gamepad_ver2
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_ExecuteUbergraph_WeaponEquipmentSlotWidget_Gamepad_ver2_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.OnWeaponEquipmentFocused__DelegateSignature
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_OnWeaponEquipmentFocused__DelegateSignature_Params
{
	EEquipSlotID                                       EquipSlotID;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class USlotInterface>             SlotInterface;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class USlotContainerInterface>    SlotContainerInterface;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.OnAttachmentFocused__DelegateSignature
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_OnAttachmentFocused__DelegateSignature_Params
{
	EWeaponAttachmentSlotID                            AttachmentSlotID;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class USlotInterface>             SlotInterface;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class USlotContainerInterface>    SlotContainerInterface;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.OnDragLeaveWeaponSlot__DelegateSignature
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_OnDragLeaveWeaponSlot__DelegateSignature_Params
{
	int                                                SlotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.OnDragEnterWeaponSlot__DelegateSignature
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_OnDragEnterWeaponSlot__DelegateSignature_Params
{
	int                                                SlotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.OnReleased__DelegateSignature
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_OnReleased__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
