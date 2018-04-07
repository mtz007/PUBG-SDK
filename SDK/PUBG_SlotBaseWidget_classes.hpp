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

// WidgetBlueprintGeneratedClass SlotBaseWidget.SlotBaseWidget_C
// 0x0010 (0x0250 - 0x0240)
class USlotBaseWidget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (Transient, DuplicateTransient)
	class UAkAudioEvent*                               MouseOverSound;                                           // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SlotBaseWidget.SlotBaseWidget_C");
		return ptr;
	}


	void IsPlayCharacterPickupAnim(bool* bIsPickup);
	void IsCharacterCasting(bool* IsCasting);
	void PlaySoundAk(class UAkAudioEvent* SoundAk);
	void Construct();
	void OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent);
	void ExecuteUbergraph_SlotBaseWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
