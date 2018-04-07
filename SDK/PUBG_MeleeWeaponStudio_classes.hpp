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

// BlueprintGeneratedClass MeleeWeaponStudio.MeleeWeaponStudio_C
// 0x0010 (0x0430 - 0x0420)
class AMeleeWeaponStudio_C : public AItemStudio
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0420(0x0008) (Transient, DuplicateTransient)
	class UAsyncStaticMeshComponent*                   AsyncStaticMesh;                                          // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MeleeWeaponStudio.MeleeWeaponStudio_C");
		return ptr;
	}


	void OnLoaded();
	void UserConstructionScript();
	void SetItem(class UItem** Item);
	void ExecuteUbergraph_MeleeWeaponStudio(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
