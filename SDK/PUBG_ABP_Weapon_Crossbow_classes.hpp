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

// AnimBlueprintGeneratedClass ABP_Weapon_Crossbow.ABP_Weapon_Crossbow_C
// 0x0180 (0x05D0 - 0x0450)
class UABP_Weapon_Crossbow_C : public UTslGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0450(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_AF92FF434863917DEEE826997B8019D9;      // 0x0458(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_79A0701E43243CA0A605D08932E9D650;      // 0x04A0(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_F0A6D76C48070FB25D42489421B1AE3F;      // 0x0500(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D13ED4364599F1DAAB48F79F6A0CD299;// 0x0560(0x0070)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Weapon_Crossbow.ABP_Weapon_Crossbow_C");
		return ptr;
	}


	void BlueprintInitializeAnimation();
	void Reload2_Event_1();
	void WeaponFire_Event_1();
	void CancelReload_Event_1();
	void ExecuteUbergraph_ABP_Weapon_Crossbow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
