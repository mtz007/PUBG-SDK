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

// WidgetBlueprintGeneratedClass BP_FppWeaponSlotHudWidget.BP_FppWeaponSlotHudWidget_C
// 0x004C (0x03B4 - 0x0368)
class UBP_FppWeaponSlotHudWidget_C : public UFppWeaponSlotHudBaseWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0368(0x0008) (Transient, DuplicateTransient)
	class UCanvasPanel*                                CanvasPanel_1;                                            // 0x0370(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                               IsFirstConstruct;                                         // 0x0378(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0379(0x0003) MISSED OFFSET
	struct FWidgetTransform                            FppWeaponSlotHudInitTransform;                            // 0x037C(0x001C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FWidgetTransform                            FppWeaponSlotHudUpTransform;                              // 0x0398(0x001C) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_FppWeaponSlotHudWidget.BP_FppWeaponSlotHudWidget_C");
		return ptr;
	}


	void FppWeaponReplayTimelineDown();
	void FppWeaponReplayTimelineUp();
	void Construct();
	void ExecuteUbergraph_BP_FppWeaponSlotHudWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
