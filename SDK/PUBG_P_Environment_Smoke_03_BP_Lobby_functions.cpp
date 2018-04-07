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

// Function P_Environment_Smoke_03_BP_Lobby.P_Environment_Smoke_03_BP_Lobby_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AP_Environment_Smoke_03_BP_Lobby_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function P_Environment_Smoke_03_BP_Lobby.P_Environment_Smoke_03_BP_Lobby_C.UserConstructionScript");

	AP_Environment_Smoke_03_BP_Lobby_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
