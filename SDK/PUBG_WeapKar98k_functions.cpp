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

// Function WeapKar98k.WeapKar98k_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWeapKar98k_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapKar98k.WeapKar98k_C.UserConstructionScript");

	AWeapKar98k_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapKar98k.WeapKar98k_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AWeapKar98k_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapKar98k.WeapKar98k_C.ReceiveBeginPlay");

	AWeapKar98k_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapKar98k.WeapKar98k_C.ExecuteUbergraph_WeapKar98k
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapKar98k_C::ExecuteUbergraph_WeapKar98k(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapKar98k.WeapKar98k_C.ExecuteUbergraph_WeapKar98k");

	AWeapKar98k_C_ExecuteUbergraph_WeapKar98k_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
