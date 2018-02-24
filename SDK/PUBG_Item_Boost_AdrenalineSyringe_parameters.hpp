#pragma once

// PLAYERUNKNOWN'S BATTLEGROUNDS (3.6.13.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Item_Boost_AdrenalineSyringe.Item_Boost_AdrenalineSyringe_C.BoostGaugeUp
struct UItem_Boost_AdrenalineSyringe_C_BoostGaugeUp_Params
{
};

// Function Item_Boost_AdrenalineSyringe.Item_Boost_AdrenalineSyringe_C.IsCastable
struct UItem_Boost_AdrenalineSyringe_C_IsCastable_Params
{
	class ATslCharacter**                              Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Item_Boost_AdrenalineSyringe.Item_Boost_AdrenalineSyringe_C.PrintCastingTime
struct UItem_Boost_AdrenalineSyringe_C_PrintCastingTime_Params
{
};

// Function Item_Boost_AdrenalineSyringe.Item_Boost_AdrenalineSyringe_C.UseBy
struct UItem_Boost_AdrenalineSyringe_C_UseBy_Params
{
	class ATslCharacter**                              Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
