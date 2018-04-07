// PLAYERUNKNOWN'S BATTLEGROUNDS (3.7.27.27) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PresetColorComboBoxWidget.PresetColorComboBoxWidget_C.On_ComboBox_GenerateWidget_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                Item                           (Parm, ZeroConstructor)
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* UPresetColorComboBoxWidget_C::On_ComboBox_GenerateWidget_1(struct FString* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function PresetColorComboBoxWidget.PresetColorComboBoxWidget_C.On_ComboBox_GenerateWidget_1");

	UPresetColorComboBoxWidget_C_On_ComboBox_GenerateWidget_1_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
