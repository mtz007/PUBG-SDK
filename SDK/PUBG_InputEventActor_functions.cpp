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

// Function InputEventActor.InputEventActor_C.ProcessEnableInput
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       OwningPlayer                   (Parm, ZeroConstructor, IsPlainOldData)

void AInputEventActor_C::ProcessEnableInput(class APlayerController* OwningPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputEventActor.InputEventActor_C.ProcessEnableInput");

	AInputEventActor_C_ProcessEnableInput_Params params;
	params.OwningPlayer = OwningPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputEventActor.InputEventActor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AInputEventActor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputEventActor.InputEventActor_C.UserConstructionScript");

	AInputEventActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputEventActor.InputEventActor_C.InpActEvt_AnyKey_K2Node_InputKeyEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void AInputEventActor_C::InpActEvt_AnyKey_K2Node_InputKeyEvent_4(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputEventActor.InputEventActor_C.InpActEvt_AnyKey_K2Node_InputKeyEvent_4");

	AInputEventActor_C_InpActEvt_AnyKey_K2Node_InputKeyEvent_4_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputEventActor.InputEventActor_C.InpActEvt_AnyKey_K2Node_InputKeyEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void AInputEventActor_C::InpActEvt_AnyKey_K2Node_InputKeyEvent_3(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputEventActor.InputEventActor_C.InpActEvt_AnyKey_K2Node_InputKeyEvent_3");

	AInputEventActor_C_InpActEvt_AnyKey_K2Node_InputKeyEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputEventActor.InputEventActor_C.ExecuteUbergraph_InputEventActor
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AInputEventActor_C::ExecuteUbergraph_InputEventActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputEventActor.InputEventActor_C.ExecuteUbergraph_InputEventActor");

	AInputEventActor_C_ExecuteUbergraph_InputEventActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputEventActor.InputEventActor_C.OnInputAction__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bPressed                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FKey                    Key                            (Parm)

void AInputEventActor_C::OnInputAction__DelegateSignature(bool bPressed, const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputEventActor.InputEventActor_C.OnInputAction__DelegateSignature");

	AInputEventActor_C_OnInputAction__DelegateSignature_Params params;
	params.bPressed = bPressed;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
