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

// WidgetBlueprintGeneratedClass PresetColorComboBoxWidget.PresetColorComboBoxWidget_C
// 0x0000 (0x0298 - 0x0298)
class UPresetColorComboBoxWidget_C : public UQualityComboBox_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PresetColorComboBoxWidget.PresetColorComboBoxWidget_C");
		return ptr;
	}


	class UWidget* On_ComboBox_GenerateWidget_1(struct FString* Item);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
