// PLAYERUNKNOWN'S BATTLEGROUNDS (3.7.27.27) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponStudio.WeaponStudio_C.OnUpdateSkinBp
// (Public, BlueprintCallable, BlueprintEvent)

void AWeaponStudio_C::OnUpdateSkinBp()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponStudio.WeaponStudio_C.OnUpdateSkinBp");

	AWeaponStudio_C_OnUpdateSkinBp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponStudio.WeaponStudio_C.GetWeaonMesh
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UMeshComponent*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMeshComponent* AWeaponStudio_C::GetWeaonMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponStudio.WeaponStudio_C.GetWeaonMesh");

	AWeaponStudio_C_GetWeaonMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponStudio.WeaponStudio_C.InitializeAttachmentMap
// (Public, BlueprintCallable, BlueprintEvent)

void AWeaponStudio_C::InitializeAttachmentMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponStudio.WeaponStudio_C.InitializeAttachmentMap");

	AWeaponStudio_C_InitializeAttachmentMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponStudio.WeaponStudio_C.OnAttachmentLoad
// (Public, BlueprintCallable, BlueprintEvent)

void AWeaponStudio_C::OnAttachmentLoad()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponStudio.WeaponStudio_C.OnAttachmentLoad");

	AWeaponStudio_C_OnAttachmentLoad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponStudio.WeaponStudio_C.OnUpdateAttachmentBp
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AWeaponStudio_C::OnUpdateAttachmentBp()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponStudio.WeaponStudio_C.OnUpdateAttachmentBp");

	AWeaponStudio_C_OnUpdateAttachmentBp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponStudio.WeaponStudio_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWeaponStudio_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponStudio.WeaponStudio_C.UserConstructionScript");

	AWeaponStudio_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponStudio.WeaponStudio_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AWeaponStudio_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponStudio.WeaponStudio_C.ReceiveBeginPlay");

	AWeaponStudio_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponStudio.WeaponStudio_C.UpdateWeaponMesh
// (Event, Public, BlueprintEvent)

void AWeaponStudio_C::UpdateWeaponMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponStudio.WeaponStudio_C.UpdateWeaponMesh");

	AWeaponStudio_C_UpdateWeaponMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponStudio.WeaponStudio_C.OnUpdateAttachment
// (Event, Public, BlueprintEvent)

void AWeaponStudio_C::OnUpdateAttachment()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponStudio.WeaponStudio_C.OnUpdateAttachment");

	AWeaponStudio_C_OnUpdateAttachment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponStudio.WeaponStudio_C.OnUpdateSkin
// (Event, Public, BlueprintEvent)

void AWeaponStudio_C::OnUpdateSkin()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponStudio.WeaponStudio_C.OnUpdateSkin");

	AWeaponStudio_C_OnUpdateSkin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponStudio.WeaponStudio_C.ExecuteUbergraph_WeaponStudio
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeaponStudio_C::ExecuteUbergraph_WeaponStudio(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponStudio.WeaponStudio_C.ExecuteUbergraph_WeaponStudio");

	AWeaponStudio_C_ExecuteUbergraph_WeaponStudio_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
