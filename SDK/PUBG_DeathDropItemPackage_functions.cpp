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

// Function DeathDropItemPackage.DeathDropItemPackage_C.GetCategory
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   Category                       (Parm, OutParm)

void ADeathDropItemPackage_C::GetCategory(struct FText* Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathDropItemPackage.DeathDropItemPackage_C.GetCategory");

	ADeathDropItemPackage_C_GetCategory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Category != nullptr)
		*Category = params.Category;
}


// Function DeathDropItemPackage.DeathDropItemPackage_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ADeathDropItemPackage_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathDropItemPackage.DeathDropItemPackage_C.UserConstructionScript");

	ADeathDropItemPackage_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeathDropItemPackage.DeathDropItemPackage_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ADeathDropItemPackage_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathDropItemPackage.DeathDropItemPackage_C.ReceiveBeginPlay");

	ADeathDropItemPackage_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeathDropItemPackage.DeathDropItemPackage_C.ExecuteUbergraph_DeathDropItemPackage
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADeathDropItemPackage_C::ExecuteUbergraph_DeathDropItemPackage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathDropItemPackage.DeathDropItemPackage_C.ExecuteUbergraph_DeathDropItemPackage");

	ADeathDropItemPackage_C_ExecuteUbergraph_DeathDropItemPackage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
