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

// Function MeleeWeaponImpact_Default.MeleeWeaponImpact_Default_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AMeleeWeaponImpact_Default_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponImpact_Default.MeleeWeaponImpact_Default_C.UserConstructionScript");

	AMeleeWeaponImpact_Default_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
