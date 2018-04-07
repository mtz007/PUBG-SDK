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

// Function CharacterStateCanvasWidget.CharacterStateCanvasWidget_C.CharacterStateReplayTimelineDown
// (Public, BlueprintCallable, BlueprintEvent)

void UCharacterStateCanvasWidget_C::CharacterStateReplayTimelineDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterStateCanvasWidget.CharacterStateCanvasWidget_C.CharacterStateReplayTimelineDown");

	UCharacterStateCanvasWidget_C_CharacterStateReplayTimelineDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterStateCanvasWidget.CharacterStateCanvasWidget_C.CharacterStateReplayTimelineUp
// (Public, BlueprintCallable, BlueprintEvent)

void UCharacterStateCanvasWidget_C::CharacterStateReplayTimelineUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterStateCanvasWidget.CharacterStateCanvasWidget_C.CharacterStateReplayTimelineUp");

	UCharacterStateCanvasWidget_C_CharacterStateReplayTimelineUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterStateCanvasWidget.CharacterStateCanvasWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCharacterStateCanvasWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterStateCanvasWidget.CharacterStateCanvasWidget_C.Construct");

	UCharacterStateCanvasWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterStateCanvasWidget.CharacterStateCanvasWidget_C.ExecuteUbergraph_CharacterStateCanvasWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UCharacterStateCanvasWidget_C::ExecuteUbergraph_CharacterStateCanvasWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterStateCanvasWidget.CharacterStateCanvasWidget_C.ExecuteUbergraph_CharacterStateCanvasWidget");

	UCharacterStateCanvasWidget_C_ExecuteUbergraph_CharacterStateCanvasWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
