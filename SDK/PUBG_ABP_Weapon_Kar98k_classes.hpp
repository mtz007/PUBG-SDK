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

// AnimBlueprintGeneratedClass ABP_Weapon_Kar98k.ABP_Weapon_Kar98k_C
// 0x0390 (0x07E0 - 0x0450)
class UABP_Weapon_Kar98k_C : public UTslGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0450(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_54202F4D4356180788A09FB6755FC87D;      // 0x0458(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_71D460D54075C36AA5C2019A71AA4D40;      // 0x04A0(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_62AF327940874CF70C37908CEEB9A299;      // 0x0500(0x0060)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_535B35864D6D73BE83E3B0B9F7682E1B;// 0x0560(0x00B8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_3E2088744337103ED0574AB818B09483;// 0x0618(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_51E3C84E43C0E8972AFE0B973181BE94;// 0x0660(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_F04618AC46C758D4557155A3D6C5281B;// 0x06A8(0x00B8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_21737C5C46F8C2B4D22D6AA0A7564D0C;// 0x0760(0x0070)
	float                                              ClipShowAlpha;                                            // 0x07D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MagRootAlpha;                                             // 0x07D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ATslWeapon_Gun*                              GunRef;                                                   // 0x07D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Weapon_Kar98k.ABP_Weapon_Kar98k_C");
		return ptr;
	}


	void Handle_ReloadByOne_Stop();
	void Handle_ReloadByOne_Single();
	void Handle_ReloadByOne_Start();
	void Handle_FireCycle();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Kar98k_AnimGraphNode_ModifyBone_F04618AC46C758D4557155A3D6C5281B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Kar98k_AnimGraphNode_ModifyBone_535B35864D6D73BE83E3B0B9F7682E1B();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void BlueprintInitializeAnimation();
	void WeaponFireCycle_Event_1();
	void AnimNotify_ClipShow();
	void AnimNotify_ClipHide();
	void Reload2_Event_1();
	void ReloadByOneStart_Event_1(int AmmoToReload);
	void ReloadByOneSingle_Event_1();
	void ReloadByOneEnd_Event_1();
	void AnimNotify_ShellEject();
	void CancelReload_Event_1();
	void ExecuteUbergraph_ABP_Weapon_Kar98k(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
