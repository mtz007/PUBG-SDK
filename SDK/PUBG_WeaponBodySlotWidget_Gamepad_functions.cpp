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

// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.GetSlotItem
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class USlotInterface> SlotItem                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponBodySlotWidget_Gamepad_C::GetSlotItem(TScriptInterface<class USlotInterface>* SlotItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.GetSlotItem");

	UWeaponBodySlotWidget_Gamepad_C_GetSlotItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SlotItem != nullptr)
		*SlotItem = params.SlotItem;
}


// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.GetSlotContainer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class USlotContainerInterface> SlotContainer                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponBodySlotWidget_Gamepad_C::GetSlotContainer(TScriptInterface<class USlotContainerInterface>* SlotContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.GetSlotContainer");

	UWeaponBodySlotWidget_Gamepad_C_GetSlotContainer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SlotContainer != nullptr)
		*SlotContainer = params.SlotContainer;
}


// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.On_AmmoName_Prepass_1
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponBodySlotWidget_Gamepad_C::On_AmmoName_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.On_AmmoName_Prepass_1");

	UWeaponBodySlotWidget_Gamepad_C_On_AmmoName_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.GetAmmoName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ItemName                       (Parm, OutParm)

void UWeaponBodySlotWidget_Gamepad_C::GetAmmoName(struct FText* ItemName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.GetAmmoName");

	UWeaponBodySlotWidget_Gamepad_C_GetAmmoName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemName != nullptr)
		*ItemName = params.ItemName;
}


// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.InitBody
// (Public, BlueprintCallable, BlueprintEvent)

void UWeaponBodySlotWidget_Gamepad_C::InitBody()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.InitBody");

	UWeaponBodySlotWidget_Gamepad_C_InitBody_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.CanHandleInput
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWeaponBodySlotWidget_Gamepad_C::CanHandleInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.CanHandleInput");

	UWeaponBodySlotWidget_Gamepad_C_CanHandleInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.IsFocus
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWeaponBodySlotWidget_Gamepad_C::IsFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.IsFocus");

	UWeaponBodySlotWidget_Gamepad_C_IsFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.IsSlotSelected_Bp
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponBodySlotWidget_Gamepad_C::IsSlotSelected_Bp(bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.IsSlotSelected_Bp");

	UWeaponBodySlotWidget_Gamepad_C_IsSlotSelected_Bp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.GetBackgroundState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          State                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponBodySlotWidget_Gamepad_C::GetBackgroundState(float* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.GetBackgroundState");

	UWeaponBodySlotWidget_Gamepad_C_GetBackgroundState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (State != nullptr)
		*State = params.State;
}


// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.SetFocus
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          NewFocus                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWeaponBodySlotWidget_Gamepad_C::SetFocus(bool* NewFocus)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.SetFocus");

	UWeaponBodySlotWidget_Gamepad_C_SetFocus_Params params;
	params.NewFocus = NewFocus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.IsSlotMouseOver_Bp
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsMouseOver                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponBodySlotWidget_Gamepad_C::IsSlotMouseOver_Bp(bool* IsMouseOver)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.IsSlotMouseOver_Bp");

	UWeaponBodySlotWidget_Gamepad_C_IsSlotMouseOver_Bp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsMouseOver != nullptr)
		*IsMouseOver = params.IsMouseOver;
}


// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.IsSlotOn_Bp
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsOn                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponBodySlotWidget_Gamepad_C::IsSlotOn_Bp(bool* IsOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.IsSlotOn_Bp");

	UWeaponBodySlotWidget_Gamepad_C_IsSlotOn_Bp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsOn != nullptr)
		*IsOn = params.IsOn;
}


// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.IsSlotSubOn_Bp
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           SubOn                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponBodySlotWidget_Gamepad_C::IsSlotSubOn_Bp(bool* SubOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.IsSlotSubOn_Bp");

	UWeaponBodySlotWidget_Gamepad_C_IsSlotSubOn_Bp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SubOn != nullptr)
		*SubOn = params.SubOn;
}


// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.GetInventoryWidgetGamepad
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryWidget_Gamepad_C* NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponBodySlotWidget_Gamepad_C::GetInventoryWidgetGamepad(class UInventoryWidget_Gamepad_C** NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.GetInventoryWidgetGamepad");

	UWeaponBodySlotWidget_Gamepad_C_GetInventoryWidgetGamepad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.On_BackgroundBorder_Prepass_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponBodySlotWidget_Gamepad_C::On_BackgroundBorder_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.On_BackgroundBorder_Prepass_1");

	UWeaponBodySlotWidget_Gamepad_C_On_BackgroundBorder_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.GetItem_Bp
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UItem*                   Item                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponBodySlotWidget_Gamepad_C::GetItem_Bp(class UItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.GetItem_Bp");

	UWeaponBodySlotWidget_Gamepad_C_GetItem_Bp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;
}


// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.On_WeaponCaptureImage_Prepass_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponBodySlotWidget_Gamepad_C::On_WeaponCaptureImage_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.On_WeaponCaptureImage_Prepass_1");

	UWeaponBodySlotWidget_Gamepad_C_On_WeaponCaptureImage_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.GetAmmoIcon
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UWeaponBodySlotWidget_Gamepad_C::GetAmmoIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.GetAmmoIcon");

	UWeaponBodySlotWidget_Gamepad_C_GetAmmoIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.On_AmmoIcon_Prepass_1
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponBodySlotWidget_Gamepad_C::On_AmmoIcon_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.On_AmmoIcon_Prepass_1");

	UWeaponBodySlotWidget_Gamepad_C_On_AmmoIcon_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.GetHandOnUnLoadedAmmoCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponBodySlotWidget_Gamepad_C::GetHandOnUnLoadedAmmoCount(int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.GetHandOnUnLoadedAmmoCount");

	UWeaponBodySlotWidget_Gamepad_C_GetHandOnUnLoadedAmmoCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;
}


// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.On_WeaponHandsOnUnloadedAmmoCount_Prepass_1
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponBodySlotWidget_Gamepad_C::On_WeaponHandsOnUnloadedAmmoCount_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.On_WeaponHandsOnUnloadedAmmoCount_Prepass_1");

	UWeaponBodySlotWidget_Gamepad_C_On_WeaponHandsOnUnloadedAmmoCount_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.OnSpawnActorInSceneCaptureWorld
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  SpawnedActor                   (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponBodySlotWidget_Gamepad_C::OnSpawnActorInSceneCaptureWorld(class AActor* SpawnedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.OnSpawnActorInSceneCaptureWorld");

	UWeaponBodySlotWidget_Gamepad_C_OnSpawnActorInSceneCaptureWorld_Params params;
	params.SpawnedActor = SpawnedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.OnUpdateWeapon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWeaponBodySlotWidget_Gamepad_C::OnUpdateWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.OnUpdateWeapon");

	UWeaponBodySlotWidget_Gamepad_C_OnUpdateWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.GetHandOnLoadedAmmoCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponBodySlotWidget_Gamepad_C::GetHandOnLoadedAmmoCount(int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.GetHandOnLoadedAmmoCount");

	UWeaponBodySlotWidget_Gamepad_C_GetHandOnLoadedAmmoCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;
}


// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.On_WeaponHandsOnLoadedAmmoCount_Prepass_1
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponBodySlotWidget_Gamepad_C::On_WeaponHandsOnLoadedAmmoCount_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.On_WeaponHandsOnLoadedAmmoCount_Prepass_1");

	UWeaponBodySlotWidget_Gamepad_C_On_WeaponHandsOnLoadedAmmoCount_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.On_WeaponName_Prepass_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponBodySlotWidget_Gamepad_C::On_WeaponName_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.On_WeaponName_Prepass_1");

	UWeaponBodySlotWidget_Gamepad_C_On_WeaponName_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWeaponBodySlotWidget_Gamepad_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.Construct");

	UWeaponBodySlotWidget_Gamepad_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.OnUpdateItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItem**                  Item                           (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponBodySlotWidget_Gamepad_C::OnUpdateItem(class UItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.OnUpdateItem");

	UWeaponBodySlotWidget_Gamepad_C_OnUpdateItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.ExecuteUbergraph_WeaponBodySlotWidget_Gamepad
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponBodySlotWidget_Gamepad_C::ExecuteUbergraph_WeaponBodySlotWidget_Gamepad(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.ExecuteUbergraph_WeaponBodySlotWidget_Gamepad");

	UWeaponBodySlotWidget_Gamepad_C_ExecuteUbergraph_WeaponBodySlotWidget_Gamepad_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
