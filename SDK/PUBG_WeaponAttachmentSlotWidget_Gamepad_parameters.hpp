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

// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.GetSlotItem
struct UWeaponAttachmentSlotWidget_Gamepad_C_GetSlotItem_Params
{
	TScriptInterface<class USlotInterface>             SlotItem;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.GetSlotContainer
struct UWeaponAttachmentSlotWidget_Gamepad_C_GetSlotContainer_Params
{
	TScriptInterface<class USlotContainerInterface>    SlotContainer;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.CanHandleInput
struct UWeaponAttachmentSlotWidget_Gamepad_C_CanHandleInput_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.GetBackgroundState
struct UWeaponAttachmentSlotWidget_Gamepad_C_GetBackgroundState_Params
{
	float                                              State;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.IsSlotSelected_Bp
struct UWeaponAttachmentSlotWidget_Gamepad_C_IsSlotSelected_Bp_Params
{
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.IsSlotSubOn_Bp
struct UWeaponAttachmentSlotWidget_Gamepad_C_IsSlotSubOn_Bp_Params
{
	bool                                               SubOn;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.InputY
struct UWeaponAttachmentSlotWidget_Gamepad_C_InputY_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.InputX
struct UWeaponAttachmentSlotWidget_Gamepad_C_InputX_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.GetInventoryWidgetGamepad
struct UWeaponAttachmentSlotWidget_Gamepad_C_GetInventoryWidgetGamepad_Params
{
	class UInventoryWidget_Gamepad_C*                  NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.On_AttachmentSlotBackground_Prepass_1
struct UWeaponAttachmentSlotWidget_Gamepad_C_On_AttachmentSlotBackground_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.IsFocusable
struct UWeaponAttachmentSlotWidget_Gamepad_C_IsFocusable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.IsFocus
struct UWeaponAttachmentSlotWidget_Gamepad_C_IsFocus_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.InputB
struct UWeaponAttachmentSlotWidget_Gamepad_C_InputB_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.InputA
struct UWeaponAttachmentSlotWidget_Gamepad_C_InputA_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.SetFocus
struct UWeaponAttachmentSlotWidget_Gamepad_C_SetFocus_Params
{
	bool*                                              NewFocus;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.GetDragDroppingAttachableItem
struct UWeaponAttachmentSlotWidget_Gamepad_C_GetDragDroppingAttachableItem_Params
{
	class UAttachableItem*                             DragDroppingAttachableItem;                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.OnPrepass_2
struct UWeaponAttachmentSlotWidget_Gamepad_C_OnPrepass_2_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.On_AttachmentIcon_Prepass_1
struct UWeaponAttachmentSlotWidget_Gamepad_C_On_AttachmentIcon_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.IsSlotMouseOver_Bp
struct UWeaponAttachmentSlotWidget_Gamepad_C_IsSlotMouseOver_Bp_Params
{
	bool                                               IsMouseOver;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.OnPrepass_1
struct UWeaponAttachmentSlotWidget_Gamepad_C_OnPrepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.GetItem_Bp
struct UWeaponAttachmentSlotWidget_Gamepad_C_GetItem_Bp_Params
{
	class UItem*                                       Item;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.IsSlotOn_Bp
struct UWeaponAttachmentSlotWidget_Gamepad_C_IsSlotOn_Bp_Params
{
	bool                                               IsOn;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.GetAttachmentItem
struct UWeaponAttachmentSlotWidget_Gamepad_C_GetAttachmentItem_Params
{
	class UAttachableItem*                             AttachmentItem;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.HasAttachmentSlot
struct UWeaponAttachmentSlotWidget_Gamepad_C_HasAttachmentSlot_Params
{
	bool                                               HasAttachmentSlot;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.MainPrepass_1
struct UWeaponAttachmentSlotWidget_Gamepad_C_MainPrepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.GetSlotVisibility
struct UWeaponAttachmentSlotWidget_Gamepad_C_GetSlotVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.GetSlotIcon
struct UWeaponAttachmentSlotWidget_Gamepad_C_GetSlotIcon_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.GetAttachmentNameText
struct UWeaponAttachmentSlotWidget_Gamepad_C_GetAttachmentNameText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.Construct
struct UWeaponAttachmentSlotWidget_Gamepad_C_Construct_Params
{
};

// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.ExecuteUbergraph_WeaponAttachmentSlotWidget_Gamepad
struct UWeaponAttachmentSlotWidget_Gamepad_C_ExecuteUbergraph_WeaponAttachmentSlotWidget_Gamepad_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.OnAttachmentFocused__DelegateSignature
struct UWeaponAttachmentSlotWidget_Gamepad_C_OnAttachmentFocused__DelegateSignature_Params
{
	EWeaponAttachmentSlotID                            AttachmentSlotID;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class USlotInterface>             SlotInterface;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class USlotContainerInterface>    SlotContainerInterface;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
