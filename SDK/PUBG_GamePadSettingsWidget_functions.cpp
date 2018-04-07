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

// Function GamePadSettingsWidget.GamePadSettingsWidget_C.GetGamePadHelpWidgetClass
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  GuideClass                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGamePadSettingsWidget_C::GetGamePadHelpWidgetClass(class UClass** GuideClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamePadSettingsWidget.GamePadSettingsWidget_C.GetGamePadHelpWidgetClass");

	UGamePadSettingsWidget_C_GetGamePadHelpWidgetClass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GuideClass != nullptr)
		*GuideClass = params.GuideClass;
}


// Function GamePadSettingsWidget.GamePadSettingsWidget_C.IsProviderAvailable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGamePadSettingsWidget_C::IsProviderAvailable(bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamePadSettingsWidget.GamePadSettingsWidget_C.IsProviderAvailable");

	UGamePadSettingsWidget_C_IsProviderAvailable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function GamePadSettingsWidget.GamePadSettingsWidget_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UGamePadSettingsWidget_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamePadSettingsWidget.GamePadSettingsWidget_C.OnKeyDown");

	UGamePadSettingsWidget_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GamePadSettingsWidget.GamePadSettingsWidget_C.OnPrevOrNextFocusableWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bNext                          (Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 FocusableWidget                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGamePadSettingsWidget_C::OnPrevOrNextFocusableWidget(bool* bNext, class UWidget** FocusableWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamePadSettingsWidget.GamePadSettingsWidget_C.OnPrevOrNextFocusableWidget");

	UGamePadSettingsWidget_C_OnPrevOrNextFocusableWidget_Params params;
	params.bNext = bNext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FocusableWidget != nullptr)
		*FocusableWidget = params.FocusableWidget;
}


// Function GamePadSettingsWidget.GamePadSettingsWidget_C.GetCurrentFocusWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 FocusWidget                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGamePadSettingsWidget_C::GetCurrentFocusWidget(class UWidget** FocusWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamePadSettingsWidget.GamePadSettingsWidget_C.GetCurrentFocusWidget");

	UGamePadSettingsWidget_C_GetCurrentFocusWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FocusWidget != nullptr)
		*FocusWidget = params.FocusWidget;
}


// Function GamePadSettingsWidget.GamePadSettingsWidget_C.GetFocusableWidgetByIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 Widget                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGamePadSettingsWidget_C::GetFocusableWidgetByIndex(int Index, class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamePadSettingsWidget.GamePadSettingsWidget_C.GetFocusableWidgetByIndex");

	UGamePadSettingsWidget_C_GetFocusableWidgetByIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function GamePadSettingsWidget.GamePadSettingsWidget_C.Test
// (Public, BlueprintCallable, BlueprintEvent)

void UGamePadSettingsWidget_C::Test()
{
	static auto fn = UObject::FindObject<UFunction>("Function GamePadSettingsWidget.GamePadSettingsWidget_C.Test");

	UGamePadSettingsWidget_C_Test_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamePadSettingsWidget.GamePadSettingsWidget_C.IsEnableApply
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGamePadSettingsWidget_C::IsEnableApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function GamePadSettingsWidget.GamePadSettingsWidget_C.IsEnableApply");

	UGamePadSettingsWidget_C_IsEnableApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GamePadSettingsWidget.GamePadSettingsWidget_C.initailizeMouseSettingsWidget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsDefaultSetting              (Parm, ZeroConstructor, IsPlainOldData)

void UGamePadSettingsWidget_C::initailizeMouseSettingsWidget(bool bIsDefaultSetting)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamePadSettingsWidget.GamePadSettingsWidget_C.initailizeMouseSettingsWidget");

	UGamePadSettingsWidget_C_initailizeMouseSettingsWidget_Params params;
	params.bIsDefaultSetting = bIsDefaultSetting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamePadSettingsWidget.GamePadSettingsWidget_C.IsChanged
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGamePadSettingsWidget_C::IsChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function GamePadSettingsWidget.GamePadSettingsWidget_C.IsChanged");

	UGamePadSettingsWidget_C_IsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GamePadSettingsWidget.GamePadSettingsWidget_C.OnDefault
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UGamePadSettingsWidget_C::OnDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function GamePadSettingsWidget.GamePadSettingsWidget_C.OnDefault");

	UGamePadSettingsWidget_C_OnDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamePadSettingsWidget.GamePadSettingsWidget_C.OnApply
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UGamePadSettingsWidget_C::OnApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function GamePadSettingsWidget.GamePadSettingsWidget_C.OnApply");

	UGamePadSettingsWidget_C_OnApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamePadSettingsWidget.GamePadSettingsWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGamePadSettingsWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function GamePadSettingsWidget.GamePadSettingsWidget_C.Construct");

	UGamePadSettingsWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamePadSettingsWidget.GamePadSettingsWidget_C.OnReset
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UGamePadSettingsWidget_C::OnReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function GamePadSettingsWidget.GamePadSettingsWidget_C.OnReset");

	UGamePadSettingsWidget_C_OnReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamePadSettingsWidget.GamePadSettingsWidget_C.OnFocusLost
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent*            InFocusEvent                   (Parm)

void UGamePadSettingsWidget_C::OnFocusLost(struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamePadSettingsWidget.GamePadSettingsWidget_C.OnFocusLost");

	UGamePadSettingsWidget_C_OnFocusLost_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamePadSettingsWidget.GamePadSettingsWidget_C.ExecuteUbergraph_GamePadSettingsWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UGamePadSettingsWidget_C::ExecuteUbergraph_GamePadSettingsWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamePadSettingsWidget.GamePadSettingsWidget_C.ExecuteUbergraph_GamePadSettingsWidget");

	UGamePadSettingsWidget_C_ExecuteUbergraph_GamePadSettingsWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
