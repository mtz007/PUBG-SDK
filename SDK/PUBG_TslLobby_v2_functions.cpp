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

// Function TslLobby_v2.TslLobby_v2_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ATslLobby_v2_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslLobby_v2.TslLobby_v2_C.ReceiveBeginPlay");

	ATslLobby_v2_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslLobby_v2.TslLobby_v2_C.ExecuteUbergraph_TslLobby_v2
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATslLobby_v2_C::ExecuteUbergraph_TslLobby_v2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslLobby_v2.TslLobby_v2_C.ExecuteUbergraph_TslLobby_v2");

	ATslLobby_v2_C_ExecuteUbergraph_TslLobby_v2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
