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

// Function DefaultRifleSetting.DefaultRifleSetting_C.UserConstructionScript
struct ADefaultRifleSetting_C_UserConstructionScript_Params
{
};

// Function DefaultRifleSetting.DefaultRifleSetting_C.ReceiveTick
struct ADefaultRifleSetting_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DefaultRifleSetting.DefaultRifleSetting_C.ExecuteUbergraph_DefaultRifleSetting
struct ADefaultRifleSetting_C_ExecuteUbergraph_DefaultRifleSetting_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
