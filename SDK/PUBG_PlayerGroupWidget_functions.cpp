// PLAYERUNKNOWN'S BATTLEGROUNDS (3.6.4.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlayerGroupWidget.PlayerGroupWidget_C.On_PlayerListBG_Prepass_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerGroupWidget_C::On_PlayerListBG_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerGroupWidget.PlayerGroupWidget_C.On_PlayerListBG_Prepass_1");

	UPlayerGroupWidget_C_On_PlayerListBG_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerGroupWidget.PlayerGroupWidget_C.On_PlayerListBorder_Prepass_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerGroupWidget_C::On_PlayerListBorder_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerGroupWidget.PlayerGroupWidget_C.On_PlayerListBorder_Prepass_1");

	UPlayerGroupWidget_C_On_PlayerListBorder_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerGroupWidget.PlayerGroupWidget_C.Clear
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerGroupWidget_C::Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerGroupWidget.PlayerGroupWidget_C.Clear");

	UPlayerGroupWidget_C_Clear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerGroupWidget.PlayerGroupWidget_C.AddPlayerWidget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlayerInfoWidget_C*     PlayerInfo                     (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerGroupWidget_C::AddPlayerWidget(class UPlayerInfoWidget_C* PlayerInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerGroupWidget.PlayerGroupWidget_C.AddPlayerWidget");

	UPlayerGroupWidget_C_AddPlayerWidget_Params params;
	params.PlayerInfo = PlayerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerGroupWidget.PlayerGroupWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPlayerGroupWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerGroupWidget.PlayerGroupWidget_C.Construct");

	UPlayerGroupWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerGroupWidget.PlayerGroupWidget_C.ExecuteUbergraph_PlayerGroupWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerGroupWidget_C::ExecuteUbergraph_PlayerGroupWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerGroupWidget.PlayerGroupWidget_C.ExecuteUbergraph_PlayerGroupWidget");

	UPlayerGroupWidget_C_ExecuteUbergraph_PlayerGroupWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
