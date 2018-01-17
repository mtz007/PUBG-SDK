#pragma once

// PLAYERUNKNOWN'S BATTLEGROUNDS (3.6.4.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ObserverTagManagerWidget.ObserverTagManagerWidget_C
// 0x0008 (0x02C0 - 0x02B8)
class UObserverTagManagerWidget_C : public UObserverTagManagerBaseWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02B8(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ObserverTagManagerWidget.ObserverTagManagerWidget_C");
		return ptr;
	}


	void CustomTick();
	void TimerCheckUpdateList();
	void Construct();
	void ExecuteUbergraph_ObserverTagManagerWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
