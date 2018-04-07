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

// Function InputHookingWidget.InputHookingWidget_C.OnInputAxis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Scale                          (Parm, ZeroConstructor, IsPlainOldData)

void UInputHookingWidget_C::OnInputAxis(float Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputHookingWidget.InputHookingWidget_C.OnInputAxis");

	UInputHookingWidget_C_OnInputAxis_Params params;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputHookingWidget.InputHookingWidget_C.OnInputAction
// (Public, BlueprintCallable, BlueprintEvent)

void UInputHookingWidget_C::OnInputAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputHookingWidget.InputHookingWidget_C.OnInputAction");

	UInputHookingWidget_C_OnInputAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
