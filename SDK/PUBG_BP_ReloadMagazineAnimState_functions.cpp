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

// Function BP_ReloadMagazineAnimState.BP_ReloadMagazineAnimState_C.DropMag
// (Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*  MeshComp                       (Parm, ZeroConstructor, IsPlainOldData)

void UBP_ReloadMagazineAnimState_C::DropMag(class USkeletalMeshComponent* MeshComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReloadMagazineAnimState.BP_ReloadMagazineAnimState_C.DropMag");

	UBP_ReloadMagazineAnimState_C_DropMag_Params params;
	params.MeshComp = MeshComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ReloadMagazineAnimState.BP_ReloadMagazineAnimState_C.AttachMag
// (Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*  MeshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Attach                         (Parm, ZeroConstructor, IsPlainOldData)

void UBP_ReloadMagazineAnimState_C::AttachMag(class USkeletalMeshComponent* MeshComp, bool Attach)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReloadMagazineAnimState.BP_ReloadMagazineAnimState_C.AttachMag");

	UBP_ReloadMagazineAnimState_C_AttachMag_Params params;
	params.MeshComp = MeshComp;
	params.Attach = Attach;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ReloadMagazineAnimState.BP_ReloadMagazineAnimState_C.ShowMag
// (Private, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*  MeshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           show                           (Parm, ZeroConstructor, IsPlainOldData)

void UBP_ReloadMagazineAnimState_C::ShowMag(class USkeletalMeshComponent* MeshComp, bool show)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReloadMagazineAnimState.BP_ReloadMagazineAnimState_C.ShowMag");

	UBP_ReloadMagazineAnimState_C_ShowMag_Params params;
	params.MeshComp = MeshComp;
	params.show = show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ReloadMagazineAnimState.BP_ReloadMagazineAnimState_C.Received_NotifyEnd
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent** MeshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_ReloadMagazineAnimState_C::Received_NotifyEnd(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReloadMagazineAnimState.BP_ReloadMagazineAnimState_C.Received_NotifyEnd");

	UBP_ReloadMagazineAnimState_C_Received_NotifyEnd_Params params;
	params.MeshComp = MeshComp;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ReloadMagazineAnimState.BP_ReloadMagazineAnimState_C.Received_NotifyBegin
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent** MeshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         TotalDuration                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_ReloadMagazineAnimState_C::Received_NotifyBegin(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, float* TotalDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReloadMagazineAnimState.BP_ReloadMagazineAnimState_C.Received_NotifyBegin");

	UBP_ReloadMagazineAnimState_C_Received_NotifyBegin_Params params;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.TotalDuration = TotalDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
