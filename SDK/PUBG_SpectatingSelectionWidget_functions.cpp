// PLAYERUNKNOWN'S BATTLEGROUNDS (3.6.4.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SpectatingSelectionWidget.SpectatingSelectionWidget_C.Get_SelectionText_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText USpectatingSelectionWidget_C::Get_SelectionText_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpectatingSelectionWidget.SpectatingSelectionWidget_C.Get_SelectionText_Text_1");

	USpectatingSelectionWidget_C_Get_SelectionText_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpectatingSelectionWidget.SpectatingSelectionWidget_C.Get_SelectionKey_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText USpectatingSelectionWidget_C::Get_SelectionKey_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpectatingSelectionWidget.SpectatingSelectionWidget_C.Get_SelectionKey_Text_1");

	USpectatingSelectionWidget_C_Get_SelectionKey_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpectatingSelectionWidget.SpectatingSelectionWidget_C.OnPrepass_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void USpectatingSelectionWidget_C::OnPrepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpectatingSelectionWidget.SpectatingSelectionWidget_C.OnPrepass_1");

	USpectatingSelectionWidget_C_OnPrepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
