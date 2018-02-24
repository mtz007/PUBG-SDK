// PLAYERUNKNOWN'S BATTLEGROUNDS (3.6.13.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Item_Heal_Bandage.Item_Heal_Bandage_C.PrintCastingTime
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UItem_Heal_Bandage_C::PrintCastingTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Heal_Bandage.Item_Heal_Bandage_C.PrintCastingTime");

	UItem_Heal_Bandage_C_PrintCastingTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
