// PLAYERUNKNOWN'S BATTLEGROUNDS (3.6.13.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NewCastingBarWidget.NewCastingBarWidget_C.On_CastingBarCanvas_Prepass_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UNewCastingBarWidget_C::On_CastingBarCanvas_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewCastingBarWidget.NewCastingBarWidget_C.On_CastingBarCanvas_Prepass_1");

	UNewCastingBarWidget_C_On_CastingBarCanvas_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewCastingBarWidget.NewCastingBarWidget_C.GetRemainingCastTime
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UNewCastingBarWidget_C::GetRemainingCastTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewCastingBarWidget.NewCastingBarWidget_C.GetRemainingCastTime");

	UNewCastingBarWidget_C_GetRemainingCastTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NewCastingBarWidget.NewCastingBarWidget_C.GetCastingNameText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UNewCastingBarWidget_C::GetCastingNameText()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewCastingBarWidget.NewCastingBarWidget_C.GetCastingNameText");

	UNewCastingBarWidget_C_GetCastingNameText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NewCastingBarWidget.NewCastingBarWidget_C.GetCastingProgressBarPercent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UNewCastingBarWidget_C::GetCastingProgressBarPercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewCastingBarWidget.NewCastingBarWidget_C.GetCastingProgressBarPercent");

	UNewCastingBarWidget_C_GetCastingProgressBarPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NewCastingBarWidget.NewCastingBarWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UNewCastingBarWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewCastingBarWidget.NewCastingBarWidget_C.Construct");

	UNewCastingBarWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewCastingBarWidget.NewCastingBarWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UNewCastingBarWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewCastingBarWidget.NewCastingBarWidget_C.Tick");

	UNewCastingBarWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewCastingBarWidget.NewCastingBarWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UNewCastingBarWidget_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewCastingBarWidget.NewCastingBarWidget_C.Destruct");

	UNewCastingBarWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewCastingBarWidget.NewCastingBarWidget_C.OnInteract
// (BlueprintCallable, BlueprintEvent)

void UNewCastingBarWidget_C::OnInteract()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewCastingBarWidget.NewCastingBarWidget_C.OnInteract");

	UNewCastingBarWidget_C_OnInteract_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewCastingBarWidget.NewCastingBarWidget_C.ExecuteUbergraph_NewCastingBarWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UNewCastingBarWidget_C::ExecuteUbergraph_NewCastingBarWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewCastingBarWidget.NewCastingBarWidget_C.ExecuteUbergraph_NewCastingBarWidget");

	UNewCastingBarWidget_C_ExecuteUbergraph_NewCastingBarWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
