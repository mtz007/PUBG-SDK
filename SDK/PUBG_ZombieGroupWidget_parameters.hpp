#pragma once

// PLAYERUNKNOWN'S BATTLEGROUNDS (3.5.5.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ZombieGroupWidget.ZombieGroupWidget_C.CreateObserverMatchResultInfoWidget
struct UZombieGroupWidget_C_CreateObserverMatchResultInfoWidget_Params
{
};

// Function ZombieGroupWidget.ZombieGroupWidget_C.AddPlayerMatchResultInfo
struct UZombieGroupWidget_C_AddPlayerMatchResultInfo_Params
{
	struct FTslPlayerMatchResultInfo                   TslPlayerMatchResultInfo;                                 // (Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
