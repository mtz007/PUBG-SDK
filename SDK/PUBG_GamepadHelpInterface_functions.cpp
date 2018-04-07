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

// Function GamepadHelpInterface.GamepadHelpInterface_C.GetGamePadHelpWidgetClass
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  GuideClass                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGamepadHelpInterface_C::GetGamePadHelpWidgetClass(class UClass** GuideClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadHelpInterface.GamepadHelpInterface_C.GetGamePadHelpWidgetClass");

	UGamepadHelpInterface_C_GetGamePadHelpWidgetClass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GuideClass != nullptr)
		*GuideClass = params.GuideClass;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
