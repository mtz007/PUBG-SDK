#pragma once

// PLAYERUNKNOWN'S BATTLEGROUNDS (3.7.27.27) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MapStatAnalyzer.MapStatAnalyzer_C.ComputeWorldSize
struct AMapStatAnalyzer_C_ComputeWorldSize_Params
{
	struct FVector                                     Min;                                                      // (Parm, IsPlainOldData)
	struct FVector                                     Max;                                                      // (Parm, IsPlainOldData)
};

// Function MapStatAnalyzer.MapStatAnalyzer_C.UserConstructionScript
struct AMapStatAnalyzer_C_UserConstructionScript_Params
{
};

// Function MapStatAnalyzer.MapStatAnalyzer_C.ReceiveBeginPlay
struct AMapStatAnalyzer_C_ReceiveBeginPlay_Params
{
};

// Function MapStatAnalyzer.MapStatAnalyzer_C.ExecuteUbergraph_MapStatAnalyzer
struct AMapStatAnalyzer_C_ExecuteUbergraph_MapStatAnalyzer_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
