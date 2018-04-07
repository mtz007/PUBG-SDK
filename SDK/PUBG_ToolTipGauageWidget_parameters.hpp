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

// Function ToolTipGauageWidget.ToolTipGauageWidget_C.Update
struct UToolTipGauageWidget_C_Update_Params
{
	float                                              BeginGap;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndGap;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCompareMode;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ToolTipGauageWidget.ToolTipGauageWidget_C.Construct
struct UToolTipGauageWidget_C_Construct_Params
{
};

// Function ToolTipGauageWidget.ToolTipGauageWidget_C.ExecuteUbergraph_ToolTipGauageWidget
struct UToolTipGauageWidget_C_ExecuteUbergraph_ToolTipGauageWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
