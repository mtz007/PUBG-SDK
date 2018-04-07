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

// BlueprintGeneratedClass DefaultRifleSetting.DefaultRifleSetting_C
// 0x0090 (0x0E40 - 0x0DB0)
class ADefaultRifleSetting_C : public ATslWeapon_Trajectory
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0DB0(0x0008) (Transient, DuplicateTransient)
	bool                                               bDebugMuzzleVector;                                       // 0x0DB8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugRecoil;                                             // 0x0DB9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0DBA(0x0006) MISSED OFFSET
	struct FDebugFloatHistory                          History_RecoilTargetY;                                    // 0x0DC0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDebugFloatHistory                          History_RecoilTargetX;                                    // 0x0DE0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDebugFloatHistory                          History_RecoveryTarget;                                   // 0x0E00(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDebugFloatHistory                          History_RecoilValue;                                      // 0x0E20(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DefaultRifleSetting.DefaultRifleSetting_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_DefaultRifleSetting(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
