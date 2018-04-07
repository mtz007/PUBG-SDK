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

// Function DefaultRifleSetting.DefaultRifleSetting_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ADefaultRifleSetting_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DefaultRifleSetting.DefaultRifleSetting_C.UserConstructionScript");

	ADefaultRifleSetting_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DefaultRifleSetting.DefaultRifleSetting_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ADefaultRifleSetting_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function DefaultRifleSetting.DefaultRifleSetting_C.ReceiveTick");

	ADefaultRifleSetting_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DefaultRifleSetting.DefaultRifleSetting_C.ExecuteUbergraph_DefaultRifleSetting
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADefaultRifleSetting_C::ExecuteUbergraph_DefaultRifleSetting(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DefaultRifleSetting.DefaultRifleSetting_C.ExecuteUbergraph_DefaultRifleSetting");

	ADefaultRifleSetting_C_ExecuteUbergraph_DefaultRifleSetting_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
