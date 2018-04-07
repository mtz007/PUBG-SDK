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

// Function ConsoleGuideWidget_v3.ConsoleGuideWidget_v3_C.SetActiveWidget
struct UConsoleGuideWidget_v3_C_SetActiveWidget_Params
{
	int*                                               WidgetIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	EGuideKeyType*                                     GuideKeyType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConsoleGuideWidget_v3.ConsoleGuideWidget_v3_C.ExecuteUbergraph_ConsoleGuideWidget_v3
struct UConsoleGuideWidget_v3_C_ExecuteUbergraph_ConsoleGuideWidget_v3_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
