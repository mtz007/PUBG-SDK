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

// Function BP_FppWeaponSlotHudWidget.BP_FppWeaponSlotHudWidget_C.FppWeaponReplayTimelineDown
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_FppWeaponSlotHudWidget_C::FppWeaponReplayTimelineDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FppWeaponSlotHudWidget.BP_FppWeaponSlotHudWidget_C.FppWeaponReplayTimelineDown");

	UBP_FppWeaponSlotHudWidget_C_FppWeaponReplayTimelineDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FppWeaponSlotHudWidget.BP_FppWeaponSlotHudWidget_C.FppWeaponReplayTimelineUp
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_FppWeaponSlotHudWidget_C::FppWeaponReplayTimelineUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FppWeaponSlotHudWidget.BP_FppWeaponSlotHudWidget_C.FppWeaponReplayTimelineUp");

	UBP_FppWeaponSlotHudWidget_C_FppWeaponReplayTimelineUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FppWeaponSlotHudWidget.BP_FppWeaponSlotHudWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_FppWeaponSlotHudWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FppWeaponSlotHudWidget.BP_FppWeaponSlotHudWidget_C.Construct");

	UBP_FppWeaponSlotHudWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FppWeaponSlotHudWidget.BP_FppWeaponSlotHudWidget_C.ExecuteUbergraph_BP_FppWeaponSlotHudWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_FppWeaponSlotHudWidget_C::ExecuteUbergraph_BP_FppWeaponSlotHudWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FppWeaponSlotHudWidget.BP_FppWeaponSlotHudWidget_C.ExecuteUbergraph_BP_FppWeaponSlotHudWidget");

	UBP_FppWeaponSlotHudWidget_C_ExecuteUbergraph_BP_FppWeaponSlotHudWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
