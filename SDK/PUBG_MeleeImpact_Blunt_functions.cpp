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

// Function MeleeImpact_Blunt.MeleeImpact_Blunt_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMeleeImpact_Blunt_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeImpact_Blunt.MeleeImpact_Blunt_C.UserConstructionScript");

	AMeleeImpact_Blunt_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
