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

// Function CharacterCapture_Gamepad.CharacterCapture_Gamepad_C.PrepassCharacterCapture
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UCharacterCapture_Gamepad_C::PrepassCharacterCapture(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCapture_Gamepad.CharacterCapture_Gamepad_C.PrepassCharacterCapture");

	UCharacterCapture_Gamepad_C_PrepassCharacterCapture_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCapture_Gamepad.CharacterCapture_Gamepad_C.FinalizeCharacterCapture
// (Public, BlueprintCallable, BlueprintEvent)

void UCharacterCapture_Gamepad_C::FinalizeCharacterCapture()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCapture_Gamepad.CharacterCapture_Gamepad_C.FinalizeCharacterCapture");

	UCharacterCapture_Gamepad_C_FinalizeCharacterCapture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCapture_Gamepad.CharacterCapture_Gamepad_C.SaveCharacterStudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UCharacterCapture_Gamepad_C::SaveCharacterStudio(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCapture_Gamepad.CharacterCapture_Gamepad_C.SaveCharacterStudio");

	UCharacterCapture_Gamepad_C_SaveCharacterStudio_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCapture_Gamepad.CharacterCapture_Gamepad_C.InitCharacterCapture
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCharacterCapture_Gamepad_C::InitCharacterCapture()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCapture_Gamepad.CharacterCapture_Gamepad_C.InitCharacterCapture");

	UCharacterCapture_Gamepad_C_InitCharacterCapture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCapture_Gamepad.CharacterCapture_Gamepad_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCharacterCapture_Gamepad_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCapture_Gamepad.CharacterCapture_Gamepad_C.Construct");

	UCharacterCapture_Gamepad_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCapture_Gamepad.CharacterCapture_Gamepad_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCharacterCapture_Gamepad_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCapture_Gamepad.CharacterCapture_Gamepad_C.Destruct");

	UCharacterCapture_Gamepad_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCapture_Gamepad.CharacterCapture_Gamepad_C.ExecuteUbergraph_CharacterCapture_Gamepad
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UCharacterCapture_Gamepad_C::ExecuteUbergraph_CharacterCapture_Gamepad(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCapture_Gamepad.CharacterCapture_Gamepad_C.ExecuteUbergraph_CharacterCapture_Gamepad");

	UCharacterCapture_Gamepad_C_ExecuteUbergraph_CharacterCapture_Gamepad_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
