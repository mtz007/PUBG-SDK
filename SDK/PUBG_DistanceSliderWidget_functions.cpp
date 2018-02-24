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

// Function DistanceSliderWidget.DistanceSliderWidget_C.ChangeDistance_Delegate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UDistanceSliderWidget_C::ChangeDistance_Delegate(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function DistanceSliderWidget.DistanceSliderWidget_C.ChangeDistance_Delegate");

	UDistanceSliderWidget_C_ChangeDistance_Delegate_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DistanceSliderWidget.DistanceSliderWidget_C.SetDistanceFunc
// (Public, BlueprintCallable, BlueprintEvent)

void UDistanceSliderWidget_C::SetDistanceFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function DistanceSliderWidget.DistanceSliderWidget_C.SetDistanceFunc");

	UDistanceSliderWidget_C_SetDistanceFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DistanceSliderWidget.DistanceSliderWidget_C.ChangeDistance_Slider
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UDistanceSliderWidget_C::ChangeDistance_Slider(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function DistanceSliderWidget.DistanceSliderWidget_C.ChangeDistance_Slider");

	UDistanceSliderWidget_C_ChangeDistance_Slider_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DistanceSliderWidget.DistanceSliderWidget_C.SetValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Pos                            (Parm, ZeroConstructor, IsPlainOldData)

void UDistanceSliderWidget_C::SetValue(float Pos)
{
	static auto fn = UObject::FindObject<UFunction>("Function DistanceSliderWidget.DistanceSliderWidget_C.SetValue");

	UDistanceSliderWidget_C_SetValue_Params params;
	params.Pos = Pos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DistanceSliderWidget.DistanceSliderWidget_C.SetDistance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UDistanceSliderWidget_C::SetDistance(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function DistanceSliderWidget.DistanceSliderWidget_C.SetDistance");

	UDistanceSliderWidget_C_SetDistance_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DistanceSliderWidget.DistanceSliderWidget_C.GetDistance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDistanceSliderWidget_C::GetDistance(float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function DistanceSliderWidget.DistanceSliderWidget_C.GetDistance");

	UDistanceSliderWidget_C_GetDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Distance != nullptr)
		*Distance = params.Distance;
}


// Function DistanceSliderWidget.DistanceSliderWidget_C.BndEvt__DistanceSlider_K2Node_ComponentBoundEvent_64_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UDistanceSliderWidget_C::BndEvt__DistanceSlider_K2Node_ComponentBoundEvent_64_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function DistanceSliderWidget.DistanceSliderWidget_C.BndEvt__DistanceSlider_K2Node_ComponentBoundEvent_64_OnFloatValueChangedEvent__DelegateSignature");

	UDistanceSliderWidget_C_BndEvt__DistanceSlider_K2Node_ComponentBoundEvent_64_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DistanceSliderWidget.DistanceSliderWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDistanceSliderWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function DistanceSliderWidget.DistanceSliderWidget_C.Construct");

	UDistanceSliderWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DistanceSliderWidget.DistanceSliderWidget_C.ExecuteUbergraph_DistanceSliderWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDistanceSliderWidget_C::ExecuteUbergraph_DistanceSliderWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DistanceSliderWidget.DistanceSliderWidget_C.ExecuteUbergraph_DistanceSliderWidget");

	UDistanceSliderWidget_C_ExecuteUbergraph_DistanceSliderWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DistanceSliderWidget.DistanceSliderWidget_C.ChagedDistance__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewDistance                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UDistanceSliderWidget_C::ChagedDistance__DelegateSignature(float NewDistance, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function DistanceSliderWidget.DistanceSliderWidget_C.ChagedDistance__DelegateSignature");

	UDistanceSliderWidget_C_ChagedDistance__DelegateSignature_Params params;
	params.NewDistance = NewDistance;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
