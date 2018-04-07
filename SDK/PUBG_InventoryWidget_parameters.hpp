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

// Function InventoryWidget.InventoryWidget_C.IsFocusable
struct UInventoryWidget_C_IsFocusable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InventoryWidget.InventoryWidget_C.InputLB
struct UInventoryWidget_C_InputLB_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InventoryWidget.InventoryWidget_C.InputLT
struct UInventoryWidget_C_InputLT_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InventoryWidget.InventoryWidget_C.InputRB
struct UInventoryWidget_C_InputRB_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InventoryWidget.InventoryWidget_C.InputRT
struct UInventoryWidget_C_InputRT_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InventoryWidget.InventoryWidget_C.GetFocusingChildWidget
struct UInventoryWidget_C_GetFocusingChildWidget_Params
{
	class UUserWidget*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InventoryWidget.InventoryWidget_C.InputA
struct UInventoryWidget_C_InputA_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InventoryWidget.InventoryWidget_C.InputB
struct UInventoryWidget_C_InputB_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InventoryWidget.InventoryWidget_C.InputX
struct UInventoryWidget_C_InputX_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InventoryWidget.InventoryWidget_C.InputY
struct UInventoryWidget_C_InputY_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InventoryWidget.InventoryWidget_C.GetDownWidget
struct UInventoryWidget_C_GetDownWidget_Params
{
	class UUserWidget*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InventoryWidget.InventoryWidget_C.GetLeftWidget
struct UInventoryWidget_C_GetLeftWidget_Params
{
	class UUserWidget*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InventoryWidget.InventoryWidget_C.GetRightWidget
struct UInventoryWidget_C_GetRightWidget_Params
{
	class UUserWidget*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InventoryWidget.InventoryWidget_C.GetUpWidget
struct UInventoryWidget_C_GetUpWidget_Params
{
	class UUserWidget*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InventoryWidget.InventoryWidget_C.IsFocus
struct UInventoryWidget_C_IsFocus_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InventoryWidget.InventoryWidget_C.SetFocus
struct UInventoryWidget_C_SetFocus_Params
{
	bool                                               NewFocus;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InventoryWidget.InventoryWidget_C.Down
struct UInventoryWidget_C_Down_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InventoryWidget.InventoryWidget_C.Left
struct UInventoryWidget_C_Left_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InventoryWidget.InventoryWidget_C.Right
struct UInventoryWidget_C_Right_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InventoryWidget.InventoryWidget_C.Up
struct UInventoryWidget_C_Up_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InventoryWidget.InventoryWidget_C.RefreshSkinGuide
struct UInventoryWidget_C_RefreshSkinGuide_Params
{
	TScriptInterface<class USlotInterface>             Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryWidget.InventoryWidget_C.OnStopItemStackCountHandling
struct UInventoryWidget_C_OnStopItemStackCountHandling_Params
{
};

// Function InventoryWidget.InventoryWidget_C.OnStartItemStackCountHandling
struct UInventoryWidget_C_OnStartItemStackCountHandling_Params
{
};

// Function InventoryWidget.InventoryWidget_C.SetupInput
struct UInventoryWidget_C_SetupInput_Params
{
};

// Function InventoryWidget.InventoryWidget_C.IsClearSkinMode
struct UInventoryWidget_C_IsClearSkinMode_Params
{
	bool                                               bIsClearSkinMode;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryWidget.InventoryWidget_C.IsApplySkinMode
struct UInventoryWidget_C_IsApplySkinMode_Params
{
	bool                                               bIsApplySkinMode;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryWidget.InventoryWidget_C.OnStopClearSkinMode
struct UInventoryWidget_C_OnStopClearSkinMode_Params
{
};

// Function InventoryWidget.InventoryWidget_C.OnStartClearSkinMode
struct UInventoryWidget_C_OnStartClearSkinMode_Params
{
};

// Function InventoryWidget.InventoryWidget_C.OnStopApplySkinMode
struct UInventoryWidget_C_OnStopApplySkinMode_Params
{
};

// Function InventoryWidget.InventoryWidget_C.OnStartApplySkinMode
struct UInventoryWidget_C_OnStartApplySkinMode_Params
{
};

// Function InventoryWidget.InventoryWidget_C.OnPrepass_2
struct UInventoryWidget_C_OnPrepass_2_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryWidget.InventoryWidget_C.On_XBoxHelpTextBorder_Prepass_1
struct UInventoryWidget_C_On_XBoxHelpTextBorder_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryWidget.InventoryWidget_C.GetFirstFocusableChildWidgetIndex
struct UInventoryWidget_C_GetFirstFocusableChildWidgetIndex_Params
{
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryWidget.InventoryWidget_C.OnChildWidgetRefresh
struct UInventoryWidget_C_OnChildWidgetRefresh_Params
{
};

// Function InventoryWidget.InventoryWidget_C.GeRightFocusableIndex
struct UInventoryWidget_C_GeRightFocusableIndex_Params
{
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryWidget.InventoryWidget_C.GetLeftFocusableIndex
struct UInventoryWidget_C_GetLeftFocusableIndex_Params
{
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryWidget.InventoryWidget_C.OnPrepass_1
struct UInventoryWidget_C_OnPrepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryWidget.InventoryWidget_C.On_SortingButtonListBorder_Prepass_1
struct UInventoryWidget_C_On_SortingButtonListBorder_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryWidget.InventoryWidget_C.On_TextTime_Prepass_1
struct UInventoryWidget_C_On_TextTime_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryWidget.InventoryWidget_C.On_TextType_Prepass_1
struct UInventoryWidget_C_On_TextType_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryWidget.InventoryWidget_C.OnDrop
struct UInventoryWidget_C_OnDrop_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              PointerEvent;                                             // (Parm)
	class UDragDropOperation**                         Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InventoryWidget.InventoryWidget_C.GetMouseOverItem
struct UInventoryWidget_C_GetMouseOverItem_Params
{
	TScriptInterface<class USlotInterface>             Slot;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class USlotContainerInterface>    Container;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UItem*                                       Item;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UEquipableItem*                              EquipableItem;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UAttachableItem*                             AttachableItem;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryWidget.InventoryWidget_C.PlayFadeInAnim
struct UInventoryWidget_C_PlayFadeInAnim_Params
{
	float                                              Playback_Speed;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryWidget.InventoryWidget_C.On_VicinityInfoBlock_Prepass_1
struct UInventoryWidget_C_On_VicinityInfoBlock_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryWidget.InventoryWidget_C.NewFunction_1
struct UInventoryWidget_C_NewFunction_1_Params
{
};

// Function InventoryWidget.InventoryWidget_C.UpdateDragDroppingObject
struct UInventoryWidget_C_UpdateDragDroppingObject_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryWidget.InventoryWidget_C.FinalizeWidget
struct UInventoryWidget_C_FinalizeWidget_Params
{
	struct FScriptDelegate                             OnInventoryUpdated;                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FScriptDelegate                             OnEquipmentUpdated;                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function InventoryWidget.InventoryWidget_C.InitializeWidget
struct UInventoryWidget_C_InitializeWidget_Params
{
	struct FScriptDelegate                             OnInventoryUpdated;                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FScriptDelegate                             OnEquipmentUpdated;                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FScriptDelegate                             OnUpdateItemList;                                         // (Parm, ZeroConstructor)
	struct FScriptDelegate                             OnItemSlotFocus;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function InventoryWidget.InventoryWidget_C.OnInventoryUpdated
struct UInventoryWidget_C_OnInventoryUpdated_Params
{
};

// Function InventoryWidget.InventoryWidget_C.OnEquipmentUpdated
struct UInventoryWidget_C_OnEquipmentUpdated_Params
{
};

// Function InventoryWidget.InventoryWidget_C.OnItemExplorerProxyUpdated
struct UInventoryWidget_C_OnItemExplorerProxyUpdated_Params
{
};

// Function InventoryWidget.InventoryWidget_C.Destruct
struct UInventoryWidget_C_Destruct_Params
{
};

// Function InventoryWidget.InventoryWidget_C.Construct
struct UInventoryWidget_C_Construct_Params
{
};

// Function InventoryWidget.InventoryWidget_C.Tick
struct UInventoryWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryWidget.InventoryWidget_C.BndEvt__VicinityTitleOn_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UInventoryWidget_C_BndEvt__VicinityTitleOn_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function InventoryWidget.InventoryWidget_C.BndEvt__VicinityTitleOff_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UInventoryWidget_C_BndEvt__VicinityTitleOff_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function InventoryWidget.InventoryWidget_C.BndEvt__Vicinity_K2Node_ComponentBoundEvent_36_OnChildSlotFocus__DelegateSignature
struct UInventoryWidget_C_BndEvt__Vicinity_K2Node_ComponentBoundEvent_36_OnChildSlotFocus__DelegateSignature_Params
{
	TScriptInterface<class USlotInterface>             Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class USlotContainerInterface>    SlotContainer;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryWidget.InventoryWidget_C.BndEvt__Backpack_K2Node_ComponentBoundEvent_40_OnChildSlotFocus__DelegateSignature
struct UInventoryWidget_C_BndEvt__Backpack_K2Node_ComponentBoundEvent_40_OnChildSlotFocus__DelegateSignature_Params
{
	TScriptInterface<class USlotInterface>             Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class USlotContainerInterface>    SlotContainer;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryWidget.InventoryWidget_C.OnItemSlotFocus
struct UInventoryWidget_C_OnItemSlotFocus_Params
{
	TScriptInterface<class USlotInterface>             Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class USlotContainerInterface>    SlotContainer;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryWidget.InventoryWidget_C.OnDragEnter
struct UInventoryWidget_C_OnDragEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              PointerEvent;                                             // (Parm)
	class UDragDropOperation**                         Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryWidget.InventoryWidget_C.OnDragLeave
struct UInventoryWidget_C_OnDragLeave_Params
{
	struct FPointerEvent*                              PointerEvent;                                             // (Parm)
	class UDragDropOperation**                         Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryWidget.InventoryWidget_C.BndEvt__btn_time_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
struct UInventoryWidget_C_BndEvt__btn_time_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function InventoryWidget.InventoryWidget_C.BndEvt__btn_type_K2Node_ComponentBoundEvent_34_OnButtonClickedEvent__DelegateSignature
struct UInventoryWidget_C_BndEvt__btn_type_K2Node_ComponentBoundEvent_34_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function InventoryWidget.InventoryWidget_C.BndEvt__Character_K2Node_ComponentBoundEvent_88_RefreshFocus__DelegateSignature
struct UInventoryWidget_C_BndEvt__Character_K2Node_ComponentBoundEvent_88_RefreshFocus__DelegateSignature_Params
{
};

// Function InventoryWidget.InventoryWidget_C.BndEvt__Backpack_K2Node_ComponentBoundEvent_72_RefreshFocus__DelegateSignature
struct UInventoryWidget_C_BndEvt__Backpack_K2Node_ComponentBoundEvent_72_RefreshFocus__DelegateSignature_Params
{
};

// Function InventoryWidget.InventoryWidget_C.BndEvt__Weapon_K2Node_ComponentBoundEvent_105_RefreshFocus__DelegateSignature
struct UInventoryWidget_C_BndEvt__Weapon_K2Node_ComponentBoundEvent_105_RefreshFocus__DelegateSignature_Params
{
};

// Function InventoryWidget.InventoryWidget_C.BndEvt__Vicinity_K2Node_ComponentBoundEvent_115_RefreshFocus__DelegateSignature
struct UInventoryWidget_C_BndEvt__Vicinity_K2Node_ComponentBoundEvent_115_RefreshFocus__DelegateSignature_Params
{
};

// Function InventoryWidget.InventoryWidget_C.BndEvt__Vicinity_K2Node_ComponentBoundEvent_36_OnInventoryDrop__DelegateSignature
struct UInventoryWidget_C_BndEvt__Vicinity_K2Node_ComponentBoundEvent_36_OnInventoryDrop__DelegateSignature_Params
{
	class UDragDropOperation*                          Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryWidget.InventoryWidget_C.BndEvt__Backpack_K2Node_ComponentBoundEvent_38_OnInventoryDrop__DelegateSignature
struct UInventoryWidget_C_BndEvt__Backpack_K2Node_ComponentBoundEvent_38_OnInventoryDrop__DelegateSignature_Params
{
	class UDragDropOperation*                          Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryWidget.InventoryWidget_C.BndEvt__Weapon_K2Node_ComponentBoundEvent_56_OnInventoryDrop__DelegateSignature
struct UInventoryWidget_C_BndEvt__Weapon_K2Node_ComponentBoundEvent_56_OnInventoryDrop__DelegateSignature_Params
{
	class UDragDropOperation*                          Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryWidget.InventoryWidget_C.BndEvt__Character_K2Node_ComponentBoundEvent_69_OnInventoryDrop__DelegateSignature
struct UInventoryWidget_C_BndEvt__Character_K2Node_ComponentBoundEvent_69_OnInventoryDrop__DelegateSignature_Params
{
	class UDragDropOperation*                          Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryWidget.InventoryWidget_C.BndEvt__Character_K2Node_ComponentBoundEvent_487_OnEnterSlot__DelegateSignature
struct UInventoryWidget_C_BndEvt__Character_K2Node_ComponentBoundEvent_487_OnEnterSlot__DelegateSignature_Params
{
	TScriptInterface<class USlotInterface>             Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class USlotContainerInterface>    SlotContainer;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryWidget.InventoryWidget_C.BndEvt__Character_K2Node_ComponentBoundEvent_491_OnLeaveSlot__DelegateSignature
struct UInventoryWidget_C_BndEvt__Character_K2Node_ComponentBoundEvent_491_OnLeaveSlot__DelegateSignature_Params
{
	TScriptInterface<class USlotInterface>             Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class USlotContainerInterface>    SlotContainer;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryWidget.InventoryWidget_C.OnInventoryDrop_Event
struct UInventoryWidget_C_OnInventoryDrop_Event_Params
{
	class UDragDropOperation*                          Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryWidget.InventoryWidget_C.BndEvt__Vicinity_K2Node_ComponentBoundEvent_44_OnDoSlotAction__DelegateSignature
struct UInventoryWidget_C_BndEvt__Vicinity_K2Node_ComponentBoundEvent_44_OnDoSlotAction__DelegateSignature_Params
{
};

// Function InventoryWidget.InventoryWidget_C.BndEvt__Backpack_K2Node_ComponentBoundEvent_45_OnDoSlotAction__DelegateSignature
struct UInventoryWidget_C_BndEvt__Backpack_K2Node_ComponentBoundEvent_45_OnDoSlotAction__DelegateSignature_Params
{
};

// Function InventoryWidget.InventoryWidget_C.BndEvt__Equipment_K2Node_ComponentBoundEvent_64_OnDoSlotAction__DelegateSignature
struct UInventoryWidget_C_BndEvt__Equipment_K2Node_ComponentBoundEvent_64_OnDoSlotAction__DelegateSignature_Params
{
};

// Function InventoryWidget.InventoryWidget_C.BndEvt__Vicinity_K2Node_ComponentBoundEvent_58_OnEnterSlot__DelegateSignature
struct UInventoryWidget_C_BndEvt__Vicinity_K2Node_ComponentBoundEvent_58_OnEnterSlot__DelegateSignature_Params
{
	TScriptInterface<class USlotInterface>             Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class USlotContainerInterface>    SlotContainer;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryWidget.InventoryWidget_C.BndEvt__Vicinity_K2Node_ComponentBoundEvent_62_OnLeaveSlot__DelegateSignature
struct UInventoryWidget_C_BndEvt__Vicinity_K2Node_ComponentBoundEvent_62_OnLeaveSlot__DelegateSignature_Params
{
	TScriptInterface<class USlotInterface>             Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class USlotContainerInterface>    SlotContainer;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryWidget.InventoryWidget_C.BndEvt__Backpack_K2Node_ComponentBoundEvent_86_OnEnterSlot__DelegateSignature
struct UInventoryWidget_C_BndEvt__Backpack_K2Node_ComponentBoundEvent_86_OnEnterSlot__DelegateSignature_Params
{
	TScriptInterface<class USlotInterface>             Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class USlotContainerInterface>    SlotContainer;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryWidget.InventoryWidget_C.BndEvt__Backpack_K2Node_ComponentBoundEvent_113_OnLeaveSlot__DelegateSignature
struct UInventoryWidget_C_BndEvt__Backpack_K2Node_ComponentBoundEvent_113_OnLeaveSlot__DelegateSignature_Params
{
	TScriptInterface<class USlotInterface>             Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class USlotContainerInterface>    SlotContainer;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryWidget.InventoryWidget_C.ExecuteUbergraph_InventoryWidget
struct UInventoryWidget_C_ExecuteUbergraph_InventoryWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
