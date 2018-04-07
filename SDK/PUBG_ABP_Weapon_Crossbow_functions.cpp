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

// Function ABP_Weapon_Crossbow.ABP_Weapon_Crossbow_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UABP_Weapon_Crossbow_C::BlueprintInitializeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Weapon_Crossbow.ABP_Weapon_Crossbow_C.BlueprintInitializeAnimation");

	UABP_Weapon_Crossbow_C_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_Crossbow.ABP_Weapon_Crossbow_C.Reload2_Event_1
// (BlueprintCallable, BlueprintEvent)

void UABP_Weapon_Crossbow_C::Reload2_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Weapon_Crossbow.ABP_Weapon_Crossbow_C.Reload2_Event_1");

	UABP_Weapon_Crossbow_C_Reload2_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_Crossbow.ABP_Weapon_Crossbow_C.WeaponFire_Event_1
// (BlueprintCallable, BlueprintEvent)

void UABP_Weapon_Crossbow_C::WeaponFire_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Weapon_Crossbow.ABP_Weapon_Crossbow_C.WeaponFire_Event_1");

	UABP_Weapon_Crossbow_C_WeaponFire_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_Crossbow.ABP_Weapon_Crossbow_C.CancelReload_Event_1
// (BlueprintCallable, BlueprintEvent)

void UABP_Weapon_Crossbow_C::CancelReload_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Weapon_Crossbow.ABP_Weapon_Crossbow_C.CancelReload_Event_1");

	UABP_Weapon_Crossbow_C_CancelReload_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_Crossbow.ABP_Weapon_Crossbow_C.ExecuteUbergraph_ABP_Weapon_Crossbow
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UABP_Weapon_Crossbow_C::ExecuteUbergraph_ABP_Weapon_Crossbow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Weapon_Crossbow.ABP_Weapon_Crossbow_C.ExecuteUbergraph_ABP_Weapon_Crossbow");

	UABP_Weapon_Crossbow_C_ExecuteUbergraph_ABP_Weapon_Crossbow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
