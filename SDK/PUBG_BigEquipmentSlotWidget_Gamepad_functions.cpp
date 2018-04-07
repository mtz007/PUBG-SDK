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

// Function BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.GetSlotItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class USlotInterface> SlotItem                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBigEquipmentSlotWidget_Gamepad_C::GetSlotItem(TScriptInterface<class USlotInterface>* SlotItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.GetSlotItem");

	UBigEquipmentSlotWidget_Gamepad_C_GetSlotItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SlotItem != nullptr)
		*SlotItem = params.SlotItem;
}


// Function BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.GetSlotContainer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class USlotContainerInterface> SlotContainer                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBigEquipmentSlotWidget_Gamepad_C::GetSlotContainer(TScriptInterface<class USlotContainerInterface>* SlotContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.GetSlotContainer");

	UBigEquipmentSlotWidget_Gamepad_C_GetSlotContainer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SlotContainer != nullptr)
		*SlotContainer = params.SlotContainer;
}


// Function BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.IsSlotOn_Bp
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsOn                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBigEquipmentSlotWidget_Gamepad_C::IsSlotOn_Bp(bool* IsOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.IsSlotOn_Bp");

	UBigEquipmentSlotWidget_Gamepad_C_IsSlotOn_Bp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsOn != nullptr)
		*IsOn = params.IsOn;
}


// Function BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.IsFocus
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBigEquipmentSlotWidget_Gamepad_C::IsFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.IsFocus");

	UBigEquipmentSlotWidget_Gamepad_C_IsFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.SetFocus
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          NewFocus                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBigEquipmentSlotWidget_Gamepad_C::SetFocus(bool* NewFocus)
{
	static auto fn = UObject::FindObject<UFunction>("Function BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.SetFocus");

	UBigEquipmentSlotWidget_Gamepad_C_SetFocus_Params params;
	params.NewFocus = NewFocus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.GetItem_Bp
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UItem*                   Item                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBigEquipmentSlotWidget_Gamepad_C::GetItem_Bp(class UItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.GetItem_Bp");

	UBigEquipmentSlotWidget_Gamepad_C_GetItem_Bp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;
}


// Function BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.GetDurability
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Durability                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBigEquipmentSlotWidget_Gamepad_C::GetDurability(float* Durability)
{
	static auto fn = UObject::FindObject<UFunction>("Function BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.GetDurability");

	UBigEquipmentSlotWidget_Gamepad_C_GetDurability_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Durability != nullptr)
		*Durability = params.Durability;
}


// Function BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.UpdateDurationNumber
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UBigEquipmentSlotWidget_Gamepad_C::UpdateDurationNumber(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.UpdateDurationNumber");

	UBigEquipmentSlotWidget_Gamepad_C_UpdateDurationNumber_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.UpdateDurabilityGauge
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UBigEquipmentSlotWidget_Gamepad_C::UpdateDurabilityGauge(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.UpdateDurabilityGauge");

	UBigEquipmentSlotWidget_Gamepad_C_UpdateDurabilityGauge_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.UpdateDurabilityVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UBigEquipmentSlotWidget_Gamepad_C::UpdateDurabilityVisibility(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.UpdateDurabilityVisibility");

	UBigEquipmentSlotWidget_Gamepad_C_UpdateDurabilityVisibility_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.OnPreviewMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBigEquipmentSlotWidget_Gamepad_C::OnPreviewMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.OnPreviewMouseButtonDown");

	UBigEquipmentSlotWidget_Gamepad_C_OnPreviewMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.HaveDurability
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBigEquipmentSlotWidget_Gamepad_C::HaveDurability(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.HaveDurability");

	UBigEquipmentSlotWidget_Gamepad_C_HaveDurability_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.GetDurabilityPercent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          DurabilityPercent              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBigEquipmentSlotWidget_Gamepad_C::GetDurabilityPercent(float* DurabilityPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.GetDurabilityPercent");

	UBigEquipmentSlotWidget_Gamepad_C_GetDurabilityPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DurabilityPercent != nullptr)
		*DurabilityPercent = params.DurabilityPercent;
}


// Function BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.OnDragDetected
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent*          PointerEvent                   (ConstParm, Parm, OutParm, ReferenceParm)
// class UDragDropOperation*      Operation                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBigEquipmentSlotWidget_Gamepad_C::OnDragDetected(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.OnDragDetected");

	UBigEquipmentSlotWidget_Gamepad_C_OnDragDetected_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Operation != nullptr)
		*Operation = params.Operation;
}


// Function BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.GetSlotName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBigEquipmentSlotWidget_Gamepad_C::GetSlotName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.GetSlotName");

	UBigEquipmentSlotWidget_Gamepad_C_GetSlotName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.OnUpdateItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItem**                  Item                           (Parm, ZeroConstructor, IsPlainOldData)

void UBigEquipmentSlotWidget_Gamepad_C::OnUpdateItem(class UItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.OnUpdateItem");

	UBigEquipmentSlotWidget_Gamepad_C_OnUpdateItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBigEquipmentSlotWidget_Gamepad_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.Construct");

	UBigEquipmentSlotWidget_Gamepad_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.ExecuteUbergraph_BigEquipmentSlotWidget_Gamepad
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBigEquipmentSlotWidget_Gamepad_C::ExecuteUbergraph_BigEquipmentSlotWidget_Gamepad(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.ExecuteUbergraph_BigEquipmentSlotWidget_Gamepad");

	UBigEquipmentSlotWidget_Gamepad_C_ExecuteUbergraph_BigEquipmentSlotWidget_Gamepad_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.OnChildSlotFocus__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class USlotInterface> Slot                           (Parm, ZeroConstructor, IsPlainOldData)

void UBigEquipmentSlotWidget_Gamepad_C::OnChildSlotFocus__DelegateSignature(const TScriptInterface<class USlotInterface>& Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.OnChildSlotFocus__DelegateSignature");

	UBigEquipmentSlotWidget_Gamepad_C_OnChildSlotFocus__DelegateSignature_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
