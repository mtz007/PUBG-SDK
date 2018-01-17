// PLAYERUNKNOWN'S BATTLEGROUNDS (3.6.4.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CharacterProxyBase.CharacterProxyBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ACharacterProxyBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterProxyBase.CharacterProxyBase_C.UserConstructionScript");

	ACharacterProxyBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterProxyBase.CharacterProxyBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ACharacterProxyBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterProxyBase.CharacterProxyBase_C.ReceiveBeginPlay");

	ACharacterProxyBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterProxyBase.CharacterProxyBase_C.ExecuteUbergraph_CharacterProxyBase
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ACharacterProxyBase_C::ExecuteUbergraph_CharacterProxyBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterProxyBase.CharacterProxyBase_C.ExecuteUbergraph_CharacterProxyBase");

	ACharacterProxyBase_C_ExecuteUbergraph_CharacterProxyBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
