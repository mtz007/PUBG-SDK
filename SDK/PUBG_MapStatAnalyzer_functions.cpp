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

// Function MapStatAnalyzer.MapStatAnalyzer_C.ComputeWorldSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Min                            (Parm, IsPlainOldData)
// struct FVector                 Max                            (Parm, IsPlainOldData)

void AMapStatAnalyzer_C::ComputeWorldSize(const struct FVector& Min, const struct FVector& Max)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapStatAnalyzer.MapStatAnalyzer_C.ComputeWorldSize");

	AMapStatAnalyzer_C_ComputeWorldSize_Params params;
	params.Min = Min;
	params.Max = Max;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapStatAnalyzer.MapStatAnalyzer_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMapStatAnalyzer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MapStatAnalyzer.MapStatAnalyzer_C.UserConstructionScript");

	AMapStatAnalyzer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapStatAnalyzer.MapStatAnalyzer_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AMapStatAnalyzer_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function MapStatAnalyzer.MapStatAnalyzer_C.ReceiveBeginPlay");

	AMapStatAnalyzer_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapStatAnalyzer.MapStatAnalyzer_C.ExecuteUbergraph_MapStatAnalyzer
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMapStatAnalyzer_C::ExecuteUbergraph_MapStatAnalyzer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapStatAnalyzer.MapStatAnalyzer_C.ExecuteUbergraph_MapStatAnalyzer");

	AMapStatAnalyzer_C_ExecuteUbergraph_MapStatAnalyzer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
