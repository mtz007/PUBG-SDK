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

// Function CustomizableObject.CustomizableSkeletalComponent.UpdateSkeletalMeshAsync
struct UCustomizableSkeletalComponent_UpdateSkeletalMeshAsync_Params
{
	bool                                               bForceReuseResources;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CustomizableObject.CustomizableSkeletalComponent.UpdateSkeletalMesh
struct UCustomizableSkeletalComponent_UpdateSkeletalMesh_Params
{
	bool                                               bForceReuseResources;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CustomizableObject.CustomizableObjectInstance.SetRandomValues
struct UCustomizableObjectInstance_SetRandomValues_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
