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

// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.GetSlotItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class USlotInterface> SlotItem                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponAttachmentSlotWidget_Gamepad_C::GetSlotItem(TScriptInterface<class USlotInterface>* SlotItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.GetSlotItem");

	UWeaponAttachmentSlotWidget_Gamepad_C_GetSlotItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SlotItem != nullptr)
		*SlotItem = params.SlotItem;
}


// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.GetSlotContainer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class USlotContainerInterface> SlotContainer                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponAttachmentSlotWidget_Gamepad_C::GetSlotContainer(TScriptInterface<class USlotContainerInterface>* SlotContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.GetSlotContainer");

	UWeaponAttachmentSlotWidget_Gamepad_C_GetSlotContainer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SlotContainer != nullptr)
		*SlotContainer = params.SlotContainer;
}


// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.CanHandleInput
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWeaponAttachmentSlotWidget_Gamepad_C::CanHandleInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.CanHandleInput");

	UWeaponAttachmentSlotWidget_Gamepad_C_CanHandleInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.GetBackgroundState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          State                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponAttachmentSlotWidget_Gamepad_C::GetBackgroundState(float* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.GetBackgroundState");

	UWeaponAttachmentSlotWidget_Gamepad_C_GetBackgroundState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (State != nullptr)
		*State = params.State;
}


// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.IsSlotSelected_Bp
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponAttachmentSlotWidget_Gamepad_C::IsSlotSelected_Bp(bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.IsSlotSelected_Bp");

	UWeaponAttachmentSlotWidget_Gamepad_C_IsSlotSelected_Bp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.IsSlotSubOn_Bp
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           SubOn                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponAttachmentSlotWidget_Gamepad_C::IsSlotSubOn_Bp(bool* SubOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.IsSlotSubOn_Bp");

	UWeaponAttachmentSlotWidget_Gamepad_C_IsSlotSubOn_Bp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SubOn != nullptr)
		*SubOn = params.SubOn;
}


// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.InputY
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWeaponAttachmentSlotWidget_Gamepad_C::InputY()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.InputY");

	UWeaponAttachmentSlotWidget_Gamepad_C_InputY_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.InputX
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWeaponAttachmentSlotWidget_Gamepad_C::InputX()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.InputX");

	UWeaponAttachmentSlotWidget_Gamepad_C_InputX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.GetInventoryWidgetGamepad
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UInventoryWidget_Gamepad_C* NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponAttachmentSlotWidget_Gamepad_C::GetInventoryWidgetGamepad(class UInventoryWidget_Gamepad_C** NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.GetInventoryWidgetGamepad");

	UWeaponAttachmentSlotWidget_Gamepad_C_GetInventoryWidgetGamepad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.On_AttachmentSlotBackground_Prepass_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponAttachmentSlotWidget_Gamepad_C::On_AttachmentSlotBackground_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.On_AttachmentSlotBackground_Prepass_1");

	UWeaponAttachmentSlotWidget_Gamepad_C_On_AttachmentSlotBackground_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.IsFocusable
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWeaponAttachmentSlotWidget_Gamepad_C::IsFocusable()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.IsFocusable");

	UWeaponAttachmentSlotWidget_Gamepad_C_IsFocusable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.IsFocus
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWeaponAttachmentSlotWidget_Gamepad_C::IsFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.IsFocus");

	UWeaponAttachmentSlotWidget_Gamepad_C_IsFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.InputB
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWeaponAttachmentSlotWidget_Gamepad_C::InputB()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.InputB");

	UWeaponAttachmentSlotWidget_Gamepad_C_InputB_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.InputA
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWeaponAttachmentSlotWidget_Gamepad_C::InputA()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.InputA");

	UWeaponAttachmentSlotWidget_Gamepad_C_InputA_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.SetFocus
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          NewFocus                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWeaponAttachmentSlotWidget_Gamepad_C::SetFocus(bool* NewFocus)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.SetFocus");

	UWeaponAttachmentSlotWidget_Gamepad_C_SetFocus_Params params;
	params.NewFocus = NewFocus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.GetDragDroppingAttachableItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UAttachableItem*         DragDroppingAttachableItem     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponAttachmentSlotWidget_Gamepad_C::GetDragDroppingAttachableItem(class UAttachableItem** DragDroppingAttachableItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.GetDragDroppingAttachableItem");

	UWeaponAttachmentSlotWidget_Gamepad_C_GetDragDroppingAttachableItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DragDroppingAttachableItem != nullptr)
		*DragDroppingAttachableItem = params.DragDroppingAttachableItem;
}


// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.OnPrepass_2
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponAttachmentSlotWidget_Gamepad_C::OnPrepass_2(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.OnPrepass_2");

	UWeaponAttachmentSlotWidget_Gamepad_C_OnPrepass_2_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.On_AttachmentIcon_Prepass_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponAttachmentSlotWidget_Gamepad_C::On_AttachmentIcon_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.On_AttachmentIcon_Prepass_1");

	UWeaponAttachmentSlotWidget_Gamepad_C_On_AttachmentIcon_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.IsSlotMouseOver_Bp
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsMouseOver                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponAttachmentSlotWidget_Gamepad_C::IsSlotMouseOver_Bp(bool* IsMouseOver)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.IsSlotMouseOver_Bp");

	UWeaponAttachmentSlotWidget_Gamepad_C_IsSlotMouseOver_Bp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsMouseOver != nullptr)
		*IsMouseOver = params.IsMouseOver;
}


// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.OnPrepass_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponAttachmentSlotWidget_Gamepad_C::OnPrepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.OnPrepass_1");

	UWeaponAttachmentSlotWidget_Gamepad_C_OnPrepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.GetItem_Bp
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UItem*                   Item                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponAttachmentSlotWidget_Gamepad_C::GetItem_Bp(class UItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.GetItem_Bp");

	UWeaponAttachmentSlotWidget_Gamepad_C_GetItem_Bp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;
}


// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.IsSlotOn_Bp
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsOn                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponAttachmentSlotWidget_Gamepad_C::IsSlotOn_Bp(bool* IsOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.IsSlotOn_Bp");

	UWeaponAttachmentSlotWidget_Gamepad_C_IsSlotOn_Bp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsOn != nullptr)
		*IsOn = params.IsOn;
}


// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.GetAttachmentItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UAttachableItem*         AttachmentItem                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponAttachmentSlotWidget_Gamepad_C::GetAttachmentItem(class UAttachableItem** AttachmentItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.GetAttachmentItem");

	UWeaponAttachmentSlotWidget_Gamepad_C_GetAttachmentItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AttachmentItem != nullptr)
		*AttachmentItem = params.AttachmentItem;
}


// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.HasAttachmentSlot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           HasAttachmentSlot              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponAttachmentSlotWidget_Gamepad_C::HasAttachmentSlot(bool* HasAttachmentSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.HasAttachmentSlot");

	UWeaponAttachmentSlotWidget_Gamepad_C_HasAttachmentSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasAttachmentSlot != nullptr)
		*HasAttachmentSlot = params.HasAttachmentSlot;
}


// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.MainPrepass_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponAttachmentSlotWidget_Gamepad_C::MainPrepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.MainPrepass_1");

	UWeaponAttachmentSlotWidget_Gamepad_C_MainPrepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.GetSlotVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWeaponAttachmentSlotWidget_Gamepad_C::GetSlotVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.GetSlotVisibility");

	UWeaponAttachmentSlotWidget_Gamepad_C_GetSlotVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.GetSlotIcon
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UWeaponAttachmentSlotWidget_Gamepad_C::GetSlotIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.GetSlotIcon");

	UWeaponAttachmentSlotWidget_Gamepad_C_GetSlotIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.GetAttachmentNameText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWeaponAttachmentSlotWidget_Gamepad_C::GetAttachmentNameText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.GetAttachmentNameText");

	UWeaponAttachmentSlotWidget_Gamepad_C_GetAttachmentNameText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWeaponAttachmentSlotWidget_Gamepad_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.Construct");

	UWeaponAttachmentSlotWidget_Gamepad_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.ExecuteUbergraph_WeaponAttachmentSlotWidget_Gamepad
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponAttachmentSlotWidget_Gamepad_C::ExecuteUbergraph_WeaponAttachmentSlotWidget_Gamepad(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.ExecuteUbergraph_WeaponAttachmentSlotWidget_Gamepad");

	UWeaponAttachmentSlotWidget_Gamepad_C_ExecuteUbergraph_WeaponAttachmentSlotWidget_Gamepad_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.OnAttachmentFocused__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// EWeaponAttachmentSlotID        AttachmentSlotID               (Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class USlotInterface> SlotInterface                  (Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class USlotContainerInterface> SlotContainerInterface         (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponAttachmentSlotWidget_Gamepad_C::OnAttachmentFocused__DelegateSignature(EWeaponAttachmentSlotID AttachmentSlotID, const TScriptInterface<class USlotInterface>& SlotInterface, const TScriptInterface<class USlotContainerInterface>& SlotContainerInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.OnAttachmentFocused__DelegateSignature");

	UWeaponAttachmentSlotWidget_Gamepad_C_OnAttachmentFocused__DelegateSignature_Params params;
	params.AttachmentSlotID = AttachmentSlotID;
	params.SlotInterface = SlotInterface;
	params.SlotContainerInterface = SlotContainerInterface;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
