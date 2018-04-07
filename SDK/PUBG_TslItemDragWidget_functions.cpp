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

// Function TslItemDragWidget.TslItemDragWidget_C.On_ErrorIcon_Prepass_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UTslItemDragWidget_C::On_ErrorIcon_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslItemDragWidget.TslItemDragWidget_C.On_ErrorIcon_Prepass_1");

	UTslItemDragWidget_C_On_ErrorIcon_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslItemDragWidget.TslItemDragWidget_C.IsEnable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsEnable                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTslItemDragWidget_C::IsEnable(bool* IsEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslItemDragWidget.TslItemDragWidget_C.IsEnable");

	UTslItemDragWidget_C_IsEnable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsEnable != nullptr)
		*IsEnable = params.IsEnable;
}


// Function TslItemDragWidget.TslItemDragWidget_C.UpdateBackgroundImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UTslItemDragWidget_C::UpdateBackgroundImage(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslItemDragWidget.TslItemDragWidget_C.UpdateBackgroundImage");

	UTslItemDragWidget_C_UpdateBackgroundImage_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslItemDragWidget.TslItemDragWidget_C.GettslItemDragDropOperation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTslItemDragDropOperation_C* AsTsl_Item_Drag_Drop_Operation (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTslItemDragWidget_C::GettslItemDragDropOperation(class UTslItemDragDropOperation_C** AsTsl_Item_Drag_Drop_Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslItemDragWidget.TslItemDragWidget_C.GettslItemDragDropOperation");

	UTslItemDragWidget_C_GettslItemDragDropOperation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsTsl_Item_Drag_Drop_Operation != nullptr)
		*AsTsl_Item_Drag_Drop_Operation = params.AsTsl_Item_Drag_Drop_Operation;
}


// Function TslItemDragWidget.TslItemDragWidget_C.GetActionName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   ActionName                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTslItemDragWidget_C::GetActionName(struct FName* ActionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslItemDragWidget.TslItemDragWidget_C.GetActionName");

	UTslItemDragWidget_C_GetActionName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActionName != nullptr)
		*ActionName = params.ActionName;
}


// Function TslItemDragWidget.TslItemDragWidget_C.GetInventory
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AInventory*              Inventory                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTslItemDragWidget_C::GetInventory(class AInventory** Inventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslItemDragWidget.TslItemDragWidget_C.GetInventory");

	UTslItemDragWidget_C_GetInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Inventory != nullptr)
		*Inventory = params.Inventory;
}


// Function TslItemDragWidget.TslItemDragWidget_C.GetAdditionalMaxStackCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTslItemDragWidget_C::GetAdditionalMaxStackCount(int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslItemDragWidget.TslItemDragWidget_C.GetAdditionalMaxStackCount");

	UTslItemDragWidget_C_GetAdditionalMaxStackCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;
}


// Function TslItemDragWidget.TslItemDragWidget_C.GetShooterPlayerController
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ATslPlayerController*    ShooterPlayerController        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTslItemDragWidget_C::GetShooterPlayerController(class ATslPlayerController** ShooterPlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslItemDragWidget.TslItemDragWidget_C.GetShooterPlayerController");

	UTslItemDragWidget_C_GetShooterPlayerController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShooterPlayerController != nullptr)
		*ShooterPlayerController = params.ShooterPlayerController;
}


// Function TslItemDragWidget.TslItemDragWidget_C.UpdateStackCount
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UTslItemDragWidget_C::UpdateStackCount(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslItemDragWidget.TslItemDragWidget_C.UpdateStackCount");

	UTslItemDragWidget_C_UpdateStackCount_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslItemDragWidget.TslItemDragWidget_C.UpdateStackCountVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UTslItemDragWidget_C::UpdateStackCountVisibility(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslItemDragWidget.TslItemDragWidget_C.UpdateStackCountVisibility");

	UTslItemDragWidget_C_UpdateStackCountVisibility_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslItemDragWidget.TslItemDragWidget_C.UpdateIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UTslItemDragWidget_C::UpdateIcon(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslItemDragWidget.TslItemDragWidget_C.UpdateIcon");

	UTslItemDragWidget_C_UpdateIcon_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslItemDragWidget.TslItemDragWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTslItemDragWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslItemDragWidget.TslItemDragWidget_C.Construct");

	UTslItemDragWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslItemDragWidget.TslItemDragWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTslItemDragWidget_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslItemDragWidget.TslItemDragWidget_C.Destruct");

	UTslItemDragWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslItemDragWidget.TslItemDragWidget_C.ExecuteUbergraph_TslItemDragWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTslItemDragWidget_C::ExecuteUbergraph_TslItemDragWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslItemDragWidget.TslItemDragWidget_C.ExecuteUbergraph_TslItemDragWidget");

	UTslItemDragWidget_C_ExecuteUbergraph_TslItemDragWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
