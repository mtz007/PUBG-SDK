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

// WidgetBlueprintGeneratedClass InputHookingWidget.InputHookingWidget_C
// 0x0000 (0x02A0 - 0x02A0)
class UInputHookingWidget_C : public UBlockInputUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass InputHookingWidget.InputHookingWidget_C");
		return ptr;
	}


	void OnInputAxis(float Scale);
	void OnInputAction();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
