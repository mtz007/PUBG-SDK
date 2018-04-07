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

// Function BloodSpotWidget.BloodSpotWidget_C.Start
// (Public, BlueprintCallable, BlueprintEvent)

void UBloodSpotWidget_C::Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function BloodSpotWidget.BloodSpotWidget_C.Start");

	UBloodSpotWidget_C_Start_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BloodSpotWidget.BloodSpotWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBloodSpotWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BloodSpotWidget.BloodSpotWidget_C.Construct");

	UBloodSpotWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BloodSpotWidget.BloodSpotWidget_C.OnAnimationStarted
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation**       Animation                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UBloodSpotWidget_C::OnAnimationStarted(class UWidgetAnimation** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BloodSpotWidget.BloodSpotWidget_C.OnAnimationStarted");

	UBloodSpotWidget_C_OnAnimationStarted_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BloodSpotWidget.BloodSpotWidget_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation**       Animation                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UBloodSpotWidget_C::OnAnimationFinished(class UWidgetAnimation** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BloodSpotWidget.BloodSpotWidget_C.OnAnimationFinished");

	UBloodSpotWidget_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BloodSpotWidget.BloodSpotWidget_C.ExecuteUbergraph_BloodSpotWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBloodSpotWidget_C::ExecuteUbergraph_BloodSpotWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BloodSpotWidget.BloodSpotWidget_C.ExecuteUbergraph_BloodSpotWidget");

	UBloodSpotWidget_C_ExecuteUbergraph_BloodSpotWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
