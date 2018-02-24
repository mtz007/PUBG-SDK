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

// Function ZombieGroupWidget.ZombieGroupWidget_C.CreateObserverMatchResultInfoWidget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UZombieGroupWidget_C::CreateObserverMatchResultInfoWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ZombieGroupWidget.ZombieGroupWidget_C.CreateObserverMatchResultInfoWidget");

	UZombieGroupWidget_C_CreateObserverMatchResultInfoWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZombieGroupWidget.ZombieGroupWidget_C.AddPlayerMatchResultInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTslPlayerMatchResultInfo TslPlayerMatchResultInfo       (Parm)

void UZombieGroupWidget_C::AddPlayerMatchResultInfo(const struct FTslPlayerMatchResultInfo& TslPlayerMatchResultInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZombieGroupWidget.ZombieGroupWidget_C.AddPlayerMatchResultInfo");

	UZombieGroupWidget_C_AddPlayerMatchResultInfo_Params params;
	params.TslPlayerMatchResultInfo = TslPlayerMatchResultInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
