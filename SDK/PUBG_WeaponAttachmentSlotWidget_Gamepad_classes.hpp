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

// WidgetBlueprintGeneratedClass WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C
// 0x0080 (0x03D0 - 0x0350)
class UWeaponAttachmentSlotWidget_Gamepad_C : public UInventorySlotBaseWidget_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0350(0x0008) (Transient, DuplicateTransient)
	class UImage*                                      AttachmentIcon;                                           // 0x0358(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UVerticalBox*                                AttachmentIconBlock;                                      // 0x0360(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UBorder*                                     AttachmentSlotBackground;                                 // 0x0368(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCanvasPanel*                                CanvasPanel_1;                                            // 0x0370(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UVerticalBox*                                VerticalBox_3;                                            // 0x0378(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                              IconSize_1;                                               // 0x0380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0384(0x0004) MISSED OFFSET
	class UWeaponItem*                                 WeaponItem;                                               // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EWeaponAttachmentSlotID                            AttachmentSlotID;                                         // 0x0390(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0391(0x0007) MISSED OFFSET
	class AInventory*                                  Inventory;                                                // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bWantFocus;                                               // 0x03A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x03A1(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnAttachmentFocused;                                      // 0x03A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               bSubFocus;                                                // 0x03B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x03B9(0x0007) MISSED OFFSET
	class UInventoryWidget_Gamepad_C*                  SaveInventory_Gamepad;                                    // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWeaponEquipmentSlotWidget_Gamepad_ver2_C*   OwnerWeaponEquipmentSlotWidget;                           // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C");
		return ptr;
	}


	void GetSlotItem(TScriptInterface<class USlotInterface>* SlotItem);
	void GetSlotContainer(TScriptInterface<class USlotContainerInterface>* SlotContainer);
	bool CanHandleInput();
	void GetBackgroundState(float* State);
	void IsSlotSelected_Bp(bool* res);
	void IsSlotSubOn_Bp(bool* SubOn);
	bool InputY();
	bool InputX();
	void GetInventoryWidgetGamepad(class UInventoryWidget_Gamepad_C** NewParam);
	void On_AttachmentSlotBackground_Prepass_1(class UWidget* BoundWidget);
	bool IsFocusable();
	bool IsFocus();
	bool InputB();
	bool InputA();
	bool SetFocus(bool* NewFocus);
	void GetDragDroppingAttachableItem(class UAttachableItem** DragDroppingAttachableItem);
	void OnPrepass_2(class UWidget* BoundWidget);
	void On_AttachmentIcon_Prepass_1(class UWidget* BoundWidget);
	void IsSlotMouseOver_Bp(bool* IsMouseOver);
	void OnPrepass_1(class UWidget* BoundWidget);
	void GetItem_Bp(class UItem** Item);
	void IsSlotOn_Bp(bool* IsOn);
	void GetAttachmentItem(class UAttachableItem** AttachmentItem);
	void HasAttachmentSlot(bool* HasAttachmentSlot);
	void MainPrepass_1(class UWidget* BoundWidget);
	ESlateVisibility GetSlotVisibility();
	struct FSlateBrush GetSlotIcon();
	struct FText GetAttachmentNameText();
	void Construct();
	void ExecuteUbergraph_WeaponAttachmentSlotWidget_Gamepad(int EntryPoint);
	void OnAttachmentFocused__DelegateSignature(EWeaponAttachmentSlotID AttachmentSlotID, const TScriptInterface<class USlotInterface>& SlotInterface, const TScriptInterface<class USlotContainerInterface>& SlotContainerInterface);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
