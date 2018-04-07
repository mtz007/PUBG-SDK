#pragma once

// PLAYERUNKNOWN'S BATTLEGROUNDS (3.7.27.27) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class CustomizableObject.CustomizableSkeletalComponent
// 0x0050 (0x0440 - 0x03F0)
class UCustomizableSkeletalComponent : public USceneComponent
{
public:
	class UCustomizableObjectInstance*                 CustomizableObjectInstance;                               // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x48];                                      // 0x03F8(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CustomizableObject.CustomizableSkeletalComponent");
		return ptr;
	}


	void UpdateSkeletalMeshAsync();
	void UpdateSkeletalMesh();
};


// Class CustomizableObject.CustomizableObjectInstance
// 0x0128 (0x0150 - 0x0028)
class UCustomizableObjectInstance : public UObject
{
public:
	class UCustomizableObject*                         CustomizableObject;                                       // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	class USkeletalMesh*                               SkeletalMesh;                                             // 0x0030(0x0008) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	int                                                State;                                                    // 0x0038(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	TArray<struct FCustomizableObjectBoolParameterValue> BoolParameters;                                           // 0x0040(0x0010) (Edit, EditFixedSize, ZeroConstructor, EditConst)
	TArray<struct FCustomizableObjectIntParameterValue> IntParameters;                                            // 0x0050(0x0010) (Edit, EditFixedSize, ZeroConstructor, EditConst)
	TArray<struct FCustomizableObjectFloatParameterValue> FloatParameters;                                          // 0x0060(0x0010) (Edit, EditFixedSize, ZeroConstructor, EditConst)
	TArray<struct FCustomizableObjectTextureParameterValue> TextureParameters;                                        // 0x0070(0x0010) (Edit, EditFixedSize, ZeroConstructor, EditConst)
	TArray<struct FCustomizableObjectVectorParameterValue> VectorParameters;                                         // 0x0080(0x0010) (Edit, EditFixedSize, ZeroConstructor, EditConst)
	TArray<struct FCustomizableObjectProjectorParameterValue> ProjectorParameters;                                      // 0x0090(0x0010) (Edit, EditFixedSize, ZeroConstructor, EditConst)
	bool                                               bBuildParameterDecorations;                               // 0x00A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x9F];                                      // 0x00A1(0x009F) MISSED OFFSET
	class UCustomizableInstancePrivateData*            PrivateData;                                              // 0x0140(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0148(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CustomizableObject.CustomizableObjectInstance");
		return ptr;
	}


	void SetVectorParameterSelectedOption(const struct FString& VectorParamName, const struct FLinearColor& VectorValue);
	void SetRandomValues();
	void SetProjectorValue(const struct FString& ProjectorParamName, float posX, float posY, float posZ, float dirX, float dirY, float dirZ, float upX, float upY, float upZ, float ScaleX, float ScaleY);
	void SetIntParameterSelectedOption(const struct FString& ParamName, const struct FString& SelectedOptionName);
	void SetFloatParameterSelectedOption(const struct FString& FloatParamName, float FloatValue);
	void SetBoolParameterSelectedOption(const struct FString& BoolParamName, bool BoolValue);
	int FindVectorParameterNameIndex(const struct FString& ParamName);
	int FindProjectorParameterNameIndex(const struct FString& ParamName);
	int FindIntParameterNameIndex(const struct FString& ParamName);
	int FindFloatParameterNameIndex(const struct FString& ParamName);
	int FindBoolParameterNameIndex(const struct FString& ParamName);
};


// Class CustomizableObject.CustomizableInstancePrivateData
// 0x01B8 (0x01E0 - 0x0028)
class UCustomizableInstancePrivateData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	TArray<struct FGeneratedMaterial>                  GeneratedMaterials;                                       // 0x0030(0x0010) (ZeroConstructor, Transient)
	TArray<struct FGeneratedMesh>                      GeneratedMeshes;                                          // 0x0040(0x0010) (ZeroConstructor, Transient)
	TArray<struct FGeneratedTexture>                   GeneratedTextures;                                        // 0x0050(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x88];                                      // 0x0060(0x0088) MISSED OFFSET
	TArray<struct FParameterDecorations>               ParameterDecorations;                                     // 0x00E8(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData02[0xE8];                                      // 0x00F8(0x00E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CustomizableObject.CustomizableInstancePrivateData");
		return ptr;
	}

};


// Class CustomizableObject.CustomizableObject
// 0x00D0 (0x00F8 - 0x0028)
class UCustomizableObject : public UObject
{
public:
	class USkeletalMesh*                               ReferenceSkeletalMesh;                                    // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 ReferenceStaticMesh;                                      // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	ECustomizableObjectRelevancy                       Relevancy;                                                // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDisableTextureLayoutManagement;                          // 0x0039(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x003A(0x0006) MISSED OFFSET
	TArray<class UMaterialInterface*>                  ReferencedMaterials;                                      // 0x0040(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<struct FMutableModelImageProperties>        ImageProperties;                                          // 0x0050(0x0010) (Edit, ZeroConstructor, EditConst)
	TMap<struct FString, struct FCustomizableObjectIdPair> GroupNodeMap;                                             // 0x0060(0x0050) (ZeroConstructor)
	struct FCompilationOptions                         CompileOptions;                                           // 0x00B0(0x0018)
	struct FGuid                                       VersionId;                                                // 0x00C8(0x0010) (IsPlainOldData)
	TArray<struct FMutableModelParameterProperties>    ParameterProperties;                                      // 0x00D8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x00E8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CustomizableObject.CustomizableObject");
		return ptr;
	}


	EMutableParameterType GetParameterType(int ParamIndex);
	struct FString GetParameterName(int ParamIndex);
	int GetParameterCount();
	int GetIntParameterNumOptions(int ParamIndex);
	struct FString GetIntParameterAvailableOption(int ParamIndex, int K);
	int FindParameter(const struct FString& Name);
	struct FString FindIntParameterValueName(int ParamIndex, int ParamValue);
	int FindIntParameterValue(int ParamIndex, const struct FString& Value);
};


// Class CustomizableObject.CustomizableSystemImageProvider
// 0x0000 (0x0028 - 0x0028)
class UCustomizableSystemImageProvider : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CustomizableObject.CustomizableSystemImageProvider");
		return ptr;
	}

};


// Class CustomizableObject.CustomizableObjectImageProviderArray
// 0x0098 (0x00C0 - 0x0028)
class UCustomizableObjectImageProviderArray : public UCustomizableSystemImageProvider
{
public:
	TArray<class UTexture2D*>                          Textures;                                                 // 0x0028(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x88];                                      // 0x0038(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CustomizableObject.CustomizableObjectImageProviderArray");
		return ptr;
	}

};


// Class CustomizableObject.CustomizableObjectSystem
// 0x0048 (0x0070 - 0x0028)
class UCustomizableObjectSystem : public UObject
{
public:
	class UCustomizableObjectImageProviderArray*       PreviewExternalImageProvider;                             // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
	TArray<class UTexture2D*>                          ProtectedCachedTextures;                                  // 0x0040(0x0010) (ZeroConstructor)
	TArray<struct FPendingReleaseSkeletalMeshInfo>     PendingReleaseSkeletalMesh;                               // 0x0050(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0060(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CustomizableObject.CustomizableObjectSystem");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
