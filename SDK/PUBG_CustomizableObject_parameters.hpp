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

// Function CustomizableObject.CustomizableSkeletalComponent.UpdateSkeletalMeshAsync
struct UCustomizableSkeletalComponent_UpdateSkeletalMeshAsync_Params
{
};

// Function CustomizableObject.CustomizableSkeletalComponent.UpdateSkeletalMesh
struct UCustomizableSkeletalComponent_UpdateSkeletalMesh_Params
{
};

// Function CustomizableObject.CustomizableObjectInstance.SetVectorParameterSelectedOption
struct UCustomizableObjectInstance_SetVectorParameterSelectedOption_Params
{
	struct FString                                     VectorParamName;                                          // (Parm, ZeroConstructor)
	struct FLinearColor                                VectorValue;                                              // (Parm, IsPlainOldData)
};

// Function CustomizableObject.CustomizableObjectInstance.SetRandomValues
struct UCustomizableObjectInstance_SetRandomValues_Params
{
};

// Function CustomizableObject.CustomizableObjectInstance.SetProjectorValue
struct UCustomizableObjectInstance_SetProjectorValue_Params
{
	struct FString                                     ProjectorParamName;                                       // (Parm, ZeroConstructor)
	float                                              posX;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              posY;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              posZ;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              dirX;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              dirY;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              dirZ;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              upX;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              upY;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              upZ;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ScaleX;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ScaleY;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CustomizableObject.CustomizableObjectInstance.SetIntParameterSelectedOption
struct UCustomizableObjectInstance_SetIntParameterSelectedOption_Params
{
	struct FString                                     ParamName;                                                // (Parm, ZeroConstructor)
	struct FString                                     SelectedOptionName;                                       // (Parm, ZeroConstructor)
};

// Function CustomizableObject.CustomizableObjectInstance.SetFloatParameterSelectedOption
struct UCustomizableObjectInstance_SetFloatParameterSelectedOption_Params
{
	struct FString                                     FloatParamName;                                           // (Parm, ZeroConstructor)
	float                                              FloatValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CustomizableObject.CustomizableObjectInstance.SetBoolParameterSelectedOption
struct UCustomizableObjectInstance_SetBoolParameterSelectedOption_Params
{
	struct FString                                     BoolParamName;                                            // (Parm, ZeroConstructor)
	bool                                               BoolValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CustomizableObject.CustomizableObjectInstance.FindVectorParameterNameIndex
struct UCustomizableObjectInstance_FindVectorParameterNameIndex_Params
{
	struct FString                                     ParamName;                                                // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomizableObject.CustomizableObjectInstance.FindProjectorParameterNameIndex
struct UCustomizableObjectInstance_FindProjectorParameterNameIndex_Params
{
	struct FString                                     ParamName;                                                // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomizableObject.CustomizableObjectInstance.FindIntParameterNameIndex
struct UCustomizableObjectInstance_FindIntParameterNameIndex_Params
{
	struct FString                                     ParamName;                                                // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomizableObject.CustomizableObjectInstance.FindFloatParameterNameIndex
struct UCustomizableObjectInstance_FindFloatParameterNameIndex_Params
{
	struct FString                                     ParamName;                                                // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomizableObject.CustomizableObjectInstance.FindBoolParameterNameIndex
struct UCustomizableObjectInstance_FindBoolParameterNameIndex_Params
{
	struct FString                                     ParamName;                                                // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomizableObject.CustomizableObject.GetParameterType
struct UCustomizableObject_GetParameterType_Params
{
	int                                                ParamIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	EMutableParameterType                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomizableObject.CustomizableObject.GetParameterName
struct UCustomizableObject_GetParameterName_Params
{
	int                                                ParamIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function CustomizableObject.CustomizableObject.GetParameterCount
struct UCustomizableObject_GetParameterCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomizableObject.CustomizableObject.GetIntParameterNumOptions
struct UCustomizableObject_GetIntParameterNumOptions_Params
{
	int                                                ParamIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomizableObject.CustomizableObject.GetIntParameterAvailableOption
struct UCustomizableObject_GetIntParameterAvailableOption_Params
{
	int                                                ParamIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                K;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function CustomizableObject.CustomizableObject.FindParameter
struct UCustomizableObject_FindParameter_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomizableObject.CustomizableObject.FindIntParameterValueName
struct UCustomizableObject_FindIntParameterValueName_Params
{
	int                                                ParamIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ParamValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function CustomizableObject.CustomizableObject.FindIntParameterValue
struct UCustomizableObject_FindIntParameterValue_Params
{
	int                                                ParamIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
