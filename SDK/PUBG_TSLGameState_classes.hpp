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

// BlueprintGeneratedClass TSLGameState.TSLGameState_C
// 0x0018 (0x06F8 - 0x06E0)
class ATSLGameState_C : public ATslGameState
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06E0(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SplineCount;                                              // 0x06F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SplineComponentCount;                                     // 0x06F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TSLGameState.TSLGameState_C");
		return ptr;
	}


	void UserConstructionScript();
	void UpdateWorldTimeSecondsDelta(float* DeltaSeconds);
	void ExecuteUbergraph_TSLGameState(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
