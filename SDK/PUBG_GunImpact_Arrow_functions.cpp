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

// Function GunImpact_Arrow.GunImpact_Arrow_C.CheckParentValidity
// (Public, BlueprintCallable, BlueprintEvent)

void AGunImpact_Arrow_C::CheckParentValidity()
{
	static auto fn = UObject::FindObject<UFunction>("Function GunImpact_Arrow.GunImpact_Arrow_C.CheckParentValidity");

	AGunImpact_Arrow_C_CheckParentValidity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GunImpact_Arrow.GunImpact_Arrow_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AGunImpact_Arrow_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GunImpact_Arrow.GunImpact_Arrow_C.UserConstructionScript");

	AGunImpact_Arrow_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GunImpact_Arrow.GunImpact_Arrow_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGunImpact_Arrow_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GunImpact_Arrow.GunImpact_Arrow_C.ReceiveBeginPlay");

	AGunImpact_Arrow_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GunImpact_Arrow.GunImpact_Arrow_C.WakeUp_BP
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform*             InitialTransform               (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AGunImpact_Arrow_C::WakeUp_BP(struct FTransform* InitialTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function GunImpact_Arrow.GunImpact_Arrow_C.WakeUp_BP");

	AGunImpact_Arrow_C_WakeUp_BP_Params params;
	params.InitialTransform = InitialTransform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GunImpact_Arrow.GunImpact_Arrow_C.PutToSleep_BP
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGunImpact_Arrow_C::PutToSleep_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function GunImpact_Arrow.GunImpact_Arrow_C.PutToSleep_BP");

	AGunImpact_Arrow_C_PutToSleep_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GunImpact_Arrow.GunImpact_Arrow_C.ExecuteUbergraph_GunImpact_Arrow
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGunImpact_Arrow_C::ExecuteUbergraph_GunImpact_Arrow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GunImpact_Arrow.GunImpact_Arrow_C.ExecuteUbergraph_GunImpact_Arrow");

	AGunImpact_Arrow_C_ExecuteUbergraph_GunImpact_Arrow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
