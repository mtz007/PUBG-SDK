// PLAYERUNKNOWN'S BATTLEGROUNDS (3.6.13.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CustomizableObject.CustomizableSkeletalComponent.UpdateSkeletalMeshAsync
// (Final, Native, Public, BlueprintCallable)

void UCustomizableSkeletalComponent::UpdateSkeletalMeshAsync()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableSkeletalComponent.UpdateSkeletalMeshAsync");

	UCustomizableSkeletalComponent_UpdateSkeletalMeshAsync_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomizableObject.CustomizableSkeletalComponent.UpdateSkeletalMesh
// (Final, Native, Public, BlueprintCallable)

void UCustomizableSkeletalComponent::UpdateSkeletalMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableSkeletalComponent.UpdateSkeletalMesh");

	UCustomizableSkeletalComponent_UpdateSkeletalMesh_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomizableObject.CustomizableObjectInstance.SetRandomValues
// (Final, Native, Public, BlueprintCallable)

void UCustomizableObjectInstance::SetRandomValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.SetRandomValues");

	UCustomizableObjectInstance_SetRandomValues_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
