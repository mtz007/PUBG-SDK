// PLAYERUNKNOWN'S BATTLEGROUNDS (3.7.27.27) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetSlotItem
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class USlotInterface> SlotItem                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::GetSlotItem(TScriptInterface<class USlotInterface>* SlotItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetSlotItem");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_GetSlotItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SlotItem != nullptr)
		*SlotItem = params.SlotItem;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetSlotContainer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class USlotContainerInterface> SlotContainer                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::GetSlotContainer(TScriptInterface<class USlotContainerInterface>* SlotContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetSlotContainer");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_GetSlotContainer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SlotContainer != nullptr)
		*SlotContainer = params.SlotContainer;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.IsBodyFocused
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::IsBodyFocused(bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.IsBodyFocused");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_IsBodyFocused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.IsAttachmentSlotFocused
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::IsAttachmentSlotFocused(bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.IsAttachmentSlotFocused");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_IsAttachmentSlotFocused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.IsWeaponExist
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::IsWeaponExist(bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.IsWeaponExist");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_IsWeaponExist_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.CanHandleInput
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWeaponEquipmentSlotWidget_Gamepad_ver2_C::CanHandleInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.CanHandleInput");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_CanHandleInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.ContainFocus
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::ContainFocus(bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.ContainFocus");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_ContainFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.SetFocusToAttachment
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bFocus                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::SetFocusToAttachment(bool bFocus, bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.SetFocusToAttachment");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_SetFocusToAttachment_Params params;
	params.bFocus = bFocus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.SetFocusToBody
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bFocus                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::SetFocusToBody(bool bFocus, bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.SetFocusToBody");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_SetFocusToBody_Params params;
	params.bFocus = bFocus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetBackgroundState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          State                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::GetBackgroundState(float* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetBackgroundState");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_GetBackgroundState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (State != nullptr)
		*State = params.State;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.IsSlotSelected_Bp
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::IsSlotSelected_Bp(bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.IsSlotSelected_Bp");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_IsSlotSelected_Bp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.OnSwap
// (Public, BlueprintCallable, BlueprintEvent)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::OnSwap()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.OnSwap");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_OnSwap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.ProcessSwap
// (Public, BlueprintCallable, BlueprintEvent)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::ProcessSwap()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.ProcessSwap");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_ProcessSwap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.OnPressedSwap
// (Public, BlueprintCallable, BlueprintEvent)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::OnPressedSwap()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.OnPressedSwap");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_OnPressedSwap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.ProcessDrop
// (Public, BlueprintCallable, BlueprintEvent)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::ProcessDrop()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.ProcessDrop");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_ProcessDrop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.DroporUnEquipItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bDrop                          (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::DroporUnEquipItem(bool bDrop)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.DroporUnEquipItem");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_DroporUnEquipItem_Params params;
	params.bDrop = bDrop;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.OnDeatchOrDropAttachment
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bDetach                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAll                           (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::OnDeatchOrDropAttachment(bool bDetach, bool bAll)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.OnDeatchOrDropAttachment");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_OnDeatchOrDropAttachment_Params params;
	params.bDetach = bDetach;
	params.bAll = bAll;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.ReleasedDropInput
// (Public, BlueprintCallable, BlueprintEvent)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::ReleasedDropInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.ReleasedDropInput");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_ReleasedDropInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.PressedDropInput
// (Public, BlueprintCallable, BlueprintEvent)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::PressedDropInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.PressedDropInput");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_PressedDropInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.ProcessDetach
// (Public, BlueprintCallable, BlueprintEvent)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::ProcessDetach()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.ProcessDetach");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_ProcessDetach_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.ReleaseDetachInput
// (Public, BlueprintCallable, BlueprintEvent)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::ReleaseDetachInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.ReleaseDetachInput");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_ReleaseDetachInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.PressedDetachInput
// (Public, BlueprintCallable, BlueprintEvent)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::PressedDetachInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.PressedDetachInput");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_PressedDetachInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetInventoryWidgetGamepad
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryWidget_Gamepad_C* NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::GetInventoryWidgetGamepad(class UInventoryWidget_Gamepad_C** NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetInventoryWidgetGamepad");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_GetInventoryWidgetGamepad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.On_BackgroundSlot_Prepass_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::On_BackgroundSlot_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.On_BackgroundSlot_Prepass_1");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_On_BackgroundSlot_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.FindLastFocusableWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UUserWidget*             Widget                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::FindLastFocusableWidget(class UUserWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.FindLastFocusableWidget");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_FindLastFocusableWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.HandleWidgetMoveRight
// (Public, BlueprintCallable, BlueprintEvent)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::HandleWidgetMoveRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.HandleWidgetMoveRight");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_HandleWidgetMoveRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.HandleWidgetMoveLeft
// (Public, BlueprintCallable, BlueprintEvent)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::HandleWidgetMoveLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.HandleWidgetMoveLeft");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_HandleWidgetMoveLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetFocusingChildWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UUserWidget*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUserWidget* UWeaponEquipmentSlotWidget_Gamepad_ver2_C::GetFocusingChildWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetFocusingChildWidget");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_GetFocusingChildWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetChildRightFocusableWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UUserWidget*             RightWidget                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::GetChildRightFocusableWidget(class UUserWidget** RightWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetChildRightFocusableWidget");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_GetChildRightFocusableWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RightWidget != nullptr)
		*RightWidget = params.RightWidget;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetChildLeftFocusableWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UUserWidget*             Left_Widget                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::GetChildLeftFocusableWidget(class UUserWidget** Left_Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetChildLeftFocusableWidget");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_GetChildLeftFocusableWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Left_Widget != nullptr)
		*Left_Widget = params.Left_Widget;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.IsFocusable
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWeaponEquipmentSlotWidget_Gamepad_ver2_C::IsFocusable()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.IsFocusable");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_IsFocusable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.FindFirstFocusableWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UUserWidget*             FocusableWidget                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::FindFirstFocusableWidget(class UUserWidget** FocusableWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.FindFirstFocusableWidget");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_FindFirstFocusableWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FocusableWidget != nullptr)
		*FocusableWidget = params.FocusableWidget;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.IsFocus
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWeaponEquipmentSlotWidget_Gamepad_ver2_C::IsFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.IsFocus");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_IsFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.SetFocus
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          NewFocus                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWeaponEquipmentSlotWidget_Gamepad_ver2_C::SetFocus(bool* NewFocus)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.SetFocus");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_SetFocus_Params params;
	params.NewFocus = NewFocus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetDragDroppingEquipableItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UEquipableItem*          EquipableItem                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::GetDragDroppingEquipableItem(class UEquipableItem** EquipableItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetDragDroppingEquipableItem");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_GetDragDroppingEquipableItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EquipableItem != nullptr)
		*EquipableItem = params.EquipableItem;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.FindEquipableWeaponPosition
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FEquipPosition          WeaponPosition                 (Parm, OutParm)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::FindEquipableWeaponPosition(struct FEquipPosition* WeaponPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.FindEquipableWeaponPosition");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_FindEquipableWeaponPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WeaponPosition != nullptr)
		*WeaponPosition = params.WeaponPosition;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.UpdateWeaponGunInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::UpdateWeaponGunInfo(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.UpdateWeaponGunInfo");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_UpdateWeaponGunInfo_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetAmmoName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ItemName                       (Parm, OutParm)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::GetAmmoName(struct FText* ItemName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetAmmoName");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_GetAmmoName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemName != nullptr)
		*ItemName = params.ItemName;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetAmmoIcon
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UWeaponEquipmentSlotWidget_Gamepad_ver2_C::GetAmmoIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetAmmoIcon");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_GetAmmoIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetHandOnUnLoadedAmmoCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::GetHandOnUnLoadedAmmoCount(int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetHandOnUnLoadedAmmoCount");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_GetHandOnUnLoadedAmmoCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetHandOnLoadedAmmoCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::GetHandOnLoadedAmmoCount(int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetHandOnLoadedAmmoCount");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_GetHandOnLoadedAmmoCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.On_AmmoInfoLayer_Prepass_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::On_AmmoInfoLayer_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.On_AmmoInfoLayer_Prepass_1");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_On_AmmoInfoLayer_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.OnUpdateWeapon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::OnUpdateWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.OnUpdateWeapon");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_OnUpdateWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.On_WeaponCaptureImage_Prepass_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::On_WeaponCaptureImage_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.On_WeaponCaptureImage_Prepass_1");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_On_WeaponCaptureImage_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetItem_Bp
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UItem*                   Item                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::GetItem_Bp(class UItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetItem_Bp");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_GetItem_Bp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.IsSlotMouseOver_Bp
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsMouseOver                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::IsSlotMouseOver_Bp(bool* IsMouseOver)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.IsSlotMouseOver_Bp");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_IsSlotMouseOver_Bp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsMouseOver != nullptr)
		*IsMouseOver = params.IsMouseOver;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.IsSlotSubOn_Bp
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           SubOn                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::IsSlotSubOn_Bp(bool* SubOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.IsSlotSubOn_Bp");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_IsSlotSubOn_Bp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SubOn != nullptr)
		*SubOn = params.SubOn;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.IsSlotOn_Bp
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsOn                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::IsSlotOn_Bp(bool* IsOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.IsSlotOn_Bp");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_IsSlotOn_Bp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsOn != nullptr)
		*IsOn = params.IsOn;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetWeaponSlotEquipId
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EEquipSlotID                   EquipSlotID                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::GetWeaponSlotEquipId(EEquipSlotID* EquipSlotID)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetWeaponSlotEquipId");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_GetWeaponSlotEquipId_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EquipSlotID != nullptr)
		*EquipSlotID = params.EquipSlotID;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.InitializeWeaponEquipSlot
// (Public, BlueprintCallable, BlueprintEvent)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::InitializeWeaponEquipSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.InitializeWeaponEquipSlot");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_InitializeWeaponEquipSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetSlotVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWeaponEquipmentSlotWidget_Gamepad_ver2_C::GetSlotVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetSlotVisibility");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_GetSlotVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetWeaponInfoText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWeaponEquipmentSlotWidget_Gamepad_ver2_C::GetWeaponInfoText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetWeaponInfoText");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_GetWeaponInfoText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.Construct");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.OnUpdateItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItem**                  Item                           (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::OnUpdateItem(class UItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.OnUpdateItem");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_OnUpdateItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.SetInventory
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryWidget_C**     InventoryWidget                (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::SetInventory(class UInventoryWidget_C** InventoryWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.SetInventory");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_SetInventory_Params params;
	params.InventoryWidget = InventoryWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.Tick");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.OnAttachmentFocused_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EWeaponAttachmentSlotID        AttachmentSlotID               (Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class USlotInterface> SlotInterface                  (Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class USlotContainerInterface> SlotContainerInterface         (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::OnAttachmentFocused_Event_1(EWeaponAttachmentSlotID AttachmentSlotID, const TScriptInterface<class USlotInterface>& SlotInterface, const TScriptInterface<class USlotContainerInterface>& SlotContainerInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.OnAttachmentFocused_Event_1");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_OnAttachmentFocused_Event_1_Params params;
	params.AttachmentSlotID = AttachmentSlotID;
	params.SlotInterface = SlotInterface;
	params.SlotContainerInterface = SlotContainerInterface;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.ExecuteUbergraph_WeaponEquipmentSlotWidget_Gamepad_ver2
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::ExecuteUbergraph_WeaponEquipmentSlotWidget_Gamepad_ver2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.ExecuteUbergraph_WeaponEquipmentSlotWidget_Gamepad_ver2");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_ExecuteUbergraph_WeaponEquipmentSlotWidget_Gamepad_ver2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.OnWeaponEquipmentFocused__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// EEquipSlotID                   EquipSlotID                    (Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class USlotInterface> SlotInterface                  (Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class USlotContainerInterface> SlotContainerInterface         (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::OnWeaponEquipmentFocused__DelegateSignature(EEquipSlotID EquipSlotID, const TScriptInterface<class USlotInterface>& SlotInterface, const TScriptInterface<class USlotContainerInterface>& SlotContainerInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.OnWeaponEquipmentFocused__DelegateSignature");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_OnWeaponEquipmentFocused__DelegateSignature_Params params;
	params.EquipSlotID = EquipSlotID;
	params.SlotInterface = SlotInterface;
	params.SlotContainerInterface = SlotContainerInterface;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.OnAttachmentFocused__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// EWeaponAttachmentSlotID        AttachmentSlotID               (Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class USlotInterface> SlotInterface                  (Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class USlotContainerInterface> SlotContainerInterface         (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::OnAttachmentFocused__DelegateSignature(EWeaponAttachmentSlotID AttachmentSlotID, const TScriptInterface<class USlotInterface>& SlotInterface, const TScriptInterface<class USlotContainerInterface>& SlotContainerInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.OnAttachmentFocused__DelegateSignature");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_OnAttachmentFocused__DelegateSignature_Params params;
	params.AttachmentSlotID = AttachmentSlotID;
	params.SlotInterface = SlotInterface;
	params.SlotContainerInterface = SlotContainerInterface;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.OnDragLeaveWeaponSlot__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SlotIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::OnDragLeaveWeaponSlot__DelegateSignature(int SlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.OnDragLeaveWeaponSlot__DelegateSignature");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_OnDragLeaveWeaponSlot__DelegateSignature_Params params;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.OnDragEnterWeaponSlot__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SlotIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::OnDragEnterWeaponSlot__DelegateSignature(int SlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.OnDragEnterWeaponSlot__DelegateSignature");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_OnDragEnterWeaponSlot__DelegateSignature_Params params;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.OnReleased__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::OnReleased__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.OnReleased__DelegateSignature");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_OnReleased__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
