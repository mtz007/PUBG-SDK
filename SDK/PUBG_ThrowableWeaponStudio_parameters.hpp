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

// Function ThrowableWeaponStudio.ThrowableWeaponStudio_C.OnLoaded
struct AThrowableWeaponStudio_C_OnLoaded_Params
{
};

// Function ThrowableWeaponStudio.ThrowableWeaponStudio_C.UserConstructionScript
struct AThrowableWeaponStudio_C_UserConstructionScript_Params
{
};

// Function ThrowableWeaponStudio.ThrowableWeaponStudio_C.SetItem
struct AThrowableWeaponStudio_C_SetItem_Params
{
	class UItem**                                      Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ThrowableWeaponStudio.ThrowableWeaponStudio_C.ExecuteUbergraph_ThrowableWeaponStudio
struct AThrowableWeaponStudio_C_ExecuteUbergraph_ThrowableWeaponStudio_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
