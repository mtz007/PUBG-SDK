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

// BlueprintGeneratedClass WeaponStudio.WeaponStudio_C
// 0x0088 (0x0518 - 0x0490)
class AWeaponStudio_C : public AWeaponStudio
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0490(0x0008) (Transient, DuplicateTransient)
	class UAsyncStaticMeshComponent*                   Stock;                                                    // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAsyncStaticMeshComponent*                   Magazine;                                                 // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAsyncStaticMeshComponent*                   UperRail;                                                 // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAsyncStaticMeshComponent*                   LowerRail;                                                // 0x04B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAsyncStaticMeshComponent*                   Muzzle;                                                   // 0x04B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      WeaponMesh;                                               // 0x04C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TMap<EWeaponAttachmentSlotID, class UAsyncStaticMeshComponent*> AttachmentMaps;                                           // 0x04C8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeaponStudio.WeaponStudio_C");
		return ptr;
	}


	void OnUpdateSkinBp();
	class UMeshComponent* GetWeaonMesh();
	void InitializeAttachmentMap();
	void OnAttachmentLoad();
	void OnUpdateAttachmentBp();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void UpdateWeaponMesh();
	void OnUpdateAttachment();
	void OnUpdateSkin();
	void ExecuteUbergraph_WeaponStudio(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
