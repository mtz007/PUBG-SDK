// PLAYERUNKNOWN'S BATTLEGROUNDS (3.6.10.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ImportantMessageWidget.ImportantMessageWidget_C.GetFadeInAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidgetAnimation*        Animation                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UImportantMessageWidget_C::GetFadeInAnimation(class UWidgetAnimation** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ImportantMessageWidget.ImportantMessageWidget_C.GetFadeInAnimation");

	UImportantMessageWidget_C_GetFadeInAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Animation != nullptr)
		*Animation = params.Animation;
}


// Function ImportantMessageWidget.ImportantMessageWidget_C.GetFadeOutAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidgetAnimation*        Animation                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UImportantMessageWidget_C::GetFadeOutAnimation(class UWidgetAnimation** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ImportantMessageWidget.ImportantMessageWidget_C.GetFadeOutAnimation");

	UImportantMessageWidget_C_GetFadeOutAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Animation != nullptr)
		*Animation = params.Animation;
}


// Function ImportantMessageWidget.ImportantMessageWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UImportantMessageWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ImportantMessageWidget.ImportantMessageWidget_C.Construct");

	UImportantMessageWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ImportantMessageWidget.ImportantMessageWidget_C.ExecuteUbergraph_ImportantMessageWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UImportantMessageWidget_C::ExecuteUbergraph_ImportantMessageWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ImportantMessageWidget.ImportantMessageWidget_C.ExecuteUbergraph_ImportantMessageWidget");

	UImportantMessageWidget_C_ExecuteUbergraph_ImportantMessageWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
