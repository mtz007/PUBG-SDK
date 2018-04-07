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

// Function WeaponStudio.WeaponStudio_C.OnUpdateSkinBp
struct AWeaponStudio_C_OnUpdateSkinBp_Params
{
};

// Function WeaponStudio.WeaponStudio_C.GetWeaonMesh
struct AWeaponStudio_C_GetWeaonMesh_Params
{
	class UMeshComponent*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeaponStudio.WeaponStudio_C.InitializeAttachmentMap
struct AWeaponStudio_C_InitializeAttachmentMap_Params
{
};

// Function WeaponStudio.WeaponStudio_C.OnAttachmentLoad
struct AWeaponStudio_C_OnAttachmentLoad_Params
{
};

// Function WeaponStudio.WeaponStudio_C.OnUpdateAttachmentBp
struct AWeaponStudio_C_OnUpdateAttachmentBp_Params
{
};

// Function WeaponStudio.WeaponStudio_C.UserConstructionScript
struct AWeaponStudio_C_UserConstructionScript_Params
{
};

// Function WeaponStudio.WeaponStudio_C.ReceiveBeginPlay
struct AWeaponStudio_C_ReceiveBeginPlay_Params
{
};

// Function WeaponStudio.WeaponStudio_C.UpdateWeaponMesh
struct AWeaponStudio_C_UpdateWeaponMesh_Params
{
};

// Function WeaponStudio.WeaponStudio_C.OnUpdateAttachment
struct AWeaponStudio_C_OnUpdateAttachment_Params
{
};

// Function WeaponStudio.WeaponStudio_C.OnUpdateSkin
struct AWeaponStudio_C_OnUpdateSkin_Params
{
};

// Function WeaponStudio.WeaponStudio_C.ExecuteUbergraph_WeaponStudio
struct AWeaponStudio_C_ExecuteUbergraph_WeaponStudio_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
