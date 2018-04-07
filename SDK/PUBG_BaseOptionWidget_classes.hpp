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

// WidgetBlueprintGeneratedClass BaseOptionWidget.BaseOptionWidget_C
// 0x0024 (0x030C - 0x02E8)
class UBaseOptionWidget_C : public UTslBaseOptionWidget
{
public:
	TArray<struct FKey>                                PrevOptionKeyList;                                        // 0x02E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FKey>                                NextOptionKeyList;                                        // 0x02F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              KeyUpTime;                                                // 0x0308(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BaseOptionWidget.BaseOptionWidget_C");
		return ptr;
	}


	struct FEventReply OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent);
	struct FEventReply OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent);
	void GetCurrentFocusWidget(class UWidget** FocusWidget);
	void OnPrevOrNextFocusableWidget(bool bNext, class UWidget** FocusableWidget);
	void ProcessKeyUp(const struct FKey& Key, struct FEventReply* EventReply);
	void ProcessKeyDown(const struct FKey& Key, struct FEventReply* EventReply);
	struct FEventReply OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
