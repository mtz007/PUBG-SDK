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


// Function CustomizableObject.CustomizableObjectInstance.SetVectorParameterSelectedOption
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 VectorParamName                (Parm, ZeroConstructor)
// struct FLinearColor            VectorValue                    (Parm, IsPlainOldData)

void UCustomizableObjectInstance::SetVectorParameterSelectedOption(const struct FString& VectorParamName, const struct FLinearColor& VectorValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.SetVectorParameterSelectedOption");

	UCustomizableObjectInstance_SetVectorParameterSelectedOption_Params params;
	params.VectorParamName = VectorParamName;
	params.VectorValue = VectorValue;

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


// Function CustomizableObject.CustomizableObjectInstance.SetProjectorValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ProjectorParamName             (Parm, ZeroConstructor)
// float                          posX                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          posY                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          posZ                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          dirX                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          dirY                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          dirZ                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          upX                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          upY                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          upZ                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          ScaleX                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          ScaleY                         (Parm, ZeroConstructor, IsPlainOldData)

void UCustomizableObjectInstance::SetProjectorValue(const struct FString& ProjectorParamName, float posX, float posY, float posZ, float dirX, float dirY, float dirZ, float upX, float upY, float upZ, float ScaleX, float ScaleY)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.SetProjectorValue");

	UCustomizableObjectInstance_SetProjectorValue_Params params;
	params.ProjectorParamName = ProjectorParamName;
	params.posX = posX;
	params.posY = posY;
	params.posZ = posZ;
	params.dirX = dirX;
	params.dirY = dirY;
	params.dirZ = dirZ;
	params.upX = upX;
	params.upY = upY;
	params.upZ = upZ;
	params.ScaleX = ScaleX;
	params.ScaleY = ScaleY;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomizableObject.CustomizableObjectInstance.SetIntParameterSelectedOption
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ParamName                      (Parm, ZeroConstructor)
// struct FString                 SelectedOptionName             (Parm, ZeroConstructor)

void UCustomizableObjectInstance::SetIntParameterSelectedOption(const struct FString& ParamName, const struct FString& SelectedOptionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.SetIntParameterSelectedOption");

	UCustomizableObjectInstance_SetIntParameterSelectedOption_Params params;
	params.ParamName = ParamName;
	params.SelectedOptionName = SelectedOptionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomizableObject.CustomizableObjectInstance.SetFloatParameterSelectedOption
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 FloatParamName                 (Parm, ZeroConstructor)
// float                          FloatValue                     (Parm, ZeroConstructor, IsPlainOldData)

void UCustomizableObjectInstance::SetFloatParameterSelectedOption(const struct FString& FloatParamName, float FloatValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.SetFloatParameterSelectedOption");

	UCustomizableObjectInstance_SetFloatParameterSelectedOption_Params params;
	params.FloatParamName = FloatParamName;
	params.FloatValue = FloatValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomizableObject.CustomizableObjectInstance.SetBoolParameterSelectedOption
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 BoolParamName                  (Parm, ZeroConstructor)
// bool                           BoolValue                      (Parm, ZeroConstructor, IsPlainOldData)

void UCustomizableObjectInstance::SetBoolParameterSelectedOption(const struct FString& BoolParamName, bool BoolValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.SetBoolParameterSelectedOption");

	UCustomizableObjectInstance_SetBoolParameterSelectedOption_Params params;
	params.BoolParamName = BoolParamName;
	params.BoolValue = BoolValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomizableObject.CustomizableObjectInstance.FindVectorParameterNameIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ParamName                      (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCustomizableObjectInstance::FindVectorParameterNameIndex(const struct FString& ParamName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.FindVectorParameterNameIndex");

	UCustomizableObjectInstance_FindVectorParameterNameIndex_Params params;
	params.ParamName = ParamName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObjectInstance.FindProjectorParameterNameIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ParamName                      (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCustomizableObjectInstance::FindProjectorParameterNameIndex(const struct FString& ParamName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.FindProjectorParameterNameIndex");

	UCustomizableObjectInstance_FindProjectorParameterNameIndex_Params params;
	params.ParamName = ParamName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObjectInstance.FindIntParameterNameIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ParamName                      (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCustomizableObjectInstance::FindIntParameterNameIndex(const struct FString& ParamName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.FindIntParameterNameIndex");

	UCustomizableObjectInstance_FindIntParameterNameIndex_Params params;
	params.ParamName = ParamName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObjectInstance.FindFloatParameterNameIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ParamName                      (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCustomizableObjectInstance::FindFloatParameterNameIndex(const struct FString& ParamName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.FindFloatParameterNameIndex");

	UCustomizableObjectInstance_FindFloatParameterNameIndex_Params params;
	params.ParamName = ParamName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObjectInstance.FindBoolParameterNameIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ParamName                      (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCustomizableObjectInstance::FindBoolParameterNameIndex(const struct FString& ParamName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.FindBoolParameterNameIndex");

	UCustomizableObjectInstance_FindBoolParameterNameIndex_Params params;
	params.ParamName = ParamName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObject.GetParameterType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ParamIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// EMutableParameterType          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EMutableParameterType UCustomizableObject::GetParameterType(int ParamIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObject.GetParameterType");

	UCustomizableObject_GetParameterType_Params params;
	params.ParamIndex = ParamIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObject.GetParameterName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ParamIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCustomizableObject::GetParameterName(int ParamIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObject.GetParameterName");

	UCustomizableObject_GetParameterName_Params params;
	params.ParamIndex = ParamIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObject.GetParameterCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCustomizableObject::GetParameterCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObject.GetParameterCount");

	UCustomizableObject_GetParameterCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObject.GetIntParameterNumOptions
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ParamIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCustomizableObject::GetIntParameterNumOptions(int ParamIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObject.GetIntParameterNumOptions");

	UCustomizableObject_GetIntParameterNumOptions_Params params;
	params.ParamIndex = ParamIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObject.GetIntParameterAvailableOption
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ParamIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            K                              (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCustomizableObject::GetIntParameterAvailableOption(int ParamIndex, int K)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObject.GetIntParameterAvailableOption");

	UCustomizableObject_GetIntParameterAvailableOption_Params params;
	params.ParamIndex = ParamIndex;
	params.K = K;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObject.FindParameter
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCustomizableObject::FindParameter(const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObject.FindParameter");

	UCustomizableObject_FindParameter_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObject.FindIntParameterValueName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ParamIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            ParamValue                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCustomizableObject::FindIntParameterValueName(int ParamIndex, int ParamValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObject.FindIntParameterValueName");

	UCustomizableObject_FindIntParameterValueName_Params params;
	params.ParamIndex = ParamIndex;
	params.ParamValue = ParamValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObject.FindIntParameterValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ParamIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Value                          (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCustomizableObject::FindIntParameterValue(int ParamIndex, const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObject.FindIntParameterValue");

	UCustomizableObject_FindIntParameterValue_Params params;
	params.ParamIndex = ParamIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
