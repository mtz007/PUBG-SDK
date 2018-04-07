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

// BlueprintGeneratedClass GunImpact_Arrow.GunImpact_Arrow_C
// 0x0008 (0x0778 - 0x0770)
class AGunImpact_Arrow_C : public ATslImpactEffect
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0770(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GunImpact_Arrow.GunImpact_Arrow_C");
		return ptr;
	}


	void CheckParentValidity();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void WakeUp_BP(struct FTransform* InitialTransform);
	void PutToSleep_BP();
	void ExecuteUbergraph_GunImpact_Arrow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
