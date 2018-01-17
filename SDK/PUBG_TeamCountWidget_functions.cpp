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

// Function TeamCountWidget.TeamCountWidget_C.OnPrepass_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UTeamCountWidget_C::OnPrepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamCountWidget.TeamCountWidget_C.OnPrepass_1");

	UTeamCountWidget_C_OnPrepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamCountWidget.TeamCountWidget_C.On_KillCount_Prepass_1
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UTeamCountWidget_C::On_KillCount_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamCountWidget.TeamCountWidget_C.On_KillCount_Prepass_1");

	UTeamCountWidget_C_On_KillCount_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamCountWidget.TeamCountWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTeamCountWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamCountWidget.TeamCountWidget_C.Construct");

	UTeamCountWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamCountWidget.TeamCountWidget_C.ExecuteUbergraph_TeamCountWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTeamCountWidget_C::ExecuteUbergraph_TeamCountWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamCountWidget.TeamCountWidget_C.ExecuteUbergraph_TeamCountWidget");

	UTeamCountWidget_C_ExecuteUbergraph_TeamCountWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
