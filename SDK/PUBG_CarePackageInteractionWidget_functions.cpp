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

// Function CarePackageInteractionWidget.CarePackageInteractionWidget_C.ShowCarePackageInteractionWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsShow                         (Parm, ZeroConstructor, IsPlainOldData)

void UCarePackageInteractionWidget_C::ShowCarePackageInteractionWidget(bool IsShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function CarePackageInteractionWidget.CarePackageInteractionWidget_C.ShowCarePackageInteractionWidget");

	UCarePackageInteractionWidget_C_ShowCarePackageInteractionWidget_Params params;
	params.IsShow = IsShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CarePackageInteractionWidget.CarePackageInteractionWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UCarePackageInteractionWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function CarePackageInteractionWidget.CarePackageInteractionWidget_C.Tick");

	UCarePackageInteractionWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CarePackageInteractionWidget.CarePackageInteractionWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCarePackageInteractionWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CarePackageInteractionWidget.CarePackageInteractionWidget_C.Construct");

	UCarePackageInteractionWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CarePackageInteractionWidget.CarePackageInteractionWidget_C.BndEvt__Vanishing_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UCarePackageInteractionWidget_C::BndEvt__Vanishing_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CarePackageInteractionWidget.CarePackageInteractionWidget_C.BndEvt__Vanishing_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UCarePackageInteractionWidget_C_BndEvt__Vanishing_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CarePackageInteractionWidget.CarePackageInteractionWidget_C.CustomTick
// (BlueprintCallable, BlueprintEvent)

void UCarePackageInteractionWidget_C::CustomTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function CarePackageInteractionWidget.CarePackageInteractionWidget_C.CustomTick");

	UCarePackageInteractionWidget_C_CustomTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CarePackageInteractionWidget.CarePackageInteractionWidget_C.TimerCheckCarePackage
// (BlueprintCallable, BlueprintEvent)

void UCarePackageInteractionWidget_C::TimerCheckCarePackage()
{
	static auto fn = UObject::FindObject<UFunction>("Function CarePackageInteractionWidget.CarePackageInteractionWidget_C.TimerCheckCarePackage");

	UCarePackageInteractionWidget_C_TimerCheckCarePackage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CarePackageInteractionWidget.CarePackageInteractionWidget_C.ExecuteUbergraph_CarePackageInteractionWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UCarePackageInteractionWidget_C::ExecuteUbergraph_CarePackageInteractionWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CarePackageInteractionWidget.CarePackageInteractionWidget_C.ExecuteUbergraph_CarePackageInteractionWidget");

	UCarePackageInteractionWidget_C_ExecuteUbergraph_CarePackageInteractionWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
