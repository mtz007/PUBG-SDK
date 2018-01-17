#pragma once

// PLAYERUNKNOWN'S BATTLEGROUNDS (3.6.4.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_KillMessageListWidget.BP_KillMessageListWidget_C.AddKillMessage
struct UBP_KillMessageListWidget_C_AddKillMessage_Params
{
	struct FDeathMessage                               Input;                                                    // (Parm, OutParm, ReferenceParm)
};

// Function BP_KillMessageListWidget.BP_KillMessageListWidget_C.UpdateMessageListWidget
struct UBP_KillMessageListWidget_C_UpdateMessageListWidget_Params
{
};

// Function BP_KillMessageListWidget.BP_KillMessageListWidget_C.ExecuteUbergraph_BP_KillMessageListWidget
struct UBP_KillMessageListWidget_C_ExecuteUbergraph_BP_KillMessageListWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
