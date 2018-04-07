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

// BlueprintGeneratedClass MapStatAnalyzer.MapStatAnalyzer_C
// 0x0140 (0x0500 - 0x03C0)
class AMapStatAnalyzer_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C0(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WorldMin;                                                 // 0x03D0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     WorldMax;                                                 // 0x03DC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SamplingInterval;                                         // 0x03E8(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03F4(0x0004) MISSED OFFSET
	TArray<struct FVector>                             WorldAvgSamples;                                          // 0x03F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FTransform>                          WorldSamplesT;                                            // 0x0408(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             BeginConsoleCommands;                                     // 0x0418(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                IY;                                                       // 0x0428(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                IX;                                                       // 0x042C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CameraRelativeOffset;                                     // 0x0430(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              SkippingMinimumHeight;                                    // 0x043C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CameraCut;                                                // 0x0440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimeInterval;                                             // 0x0444(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     SaveFileName;                                             // 0x0448(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                SubdivisionCount;                                         // 0x0458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x045C(0x0004) MISSED OFFSET
	TArray<struct FVector>                             PresetLoc;                                                // 0x0460(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               UsePresetLoc;                                             // 0x0470(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0471(0x0003) MISSED OFFSET
	int                                                SubdivisionIndex;                                         // 0x0474(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitResult;                                                // 0x0478(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MapStatAnalyzer.MapStatAnalyzer_C");
		return ptr;
	}


	void ComputeWorldSize(const struct FVector& Min, const struct FVector& Max);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_MapStatAnalyzer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
