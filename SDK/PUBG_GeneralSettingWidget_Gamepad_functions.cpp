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

// Function GeneralSettingWidget_Gamepad.GeneralSettingWidget_Gamepad_C.GetGamePadHelpWidgetClass
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  GuideClass                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGeneralSettingWidget_Gamepad_C::GetGamePadHelpWidgetClass(class UClass** GuideClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeneralSettingWidget_Gamepad.GeneralSettingWidget_Gamepad_C.GetGamePadHelpWidgetClass");

	UGeneralSettingWidget_Gamepad_C_GetGamePadHelpWidgetClass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GuideClass != nullptr)
		*GuideClass = params.GuideClass;
}


// Function GeneralSettingWidget_Gamepad.GeneralSettingWidget_Gamepad_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UGeneralSettingWidget_Gamepad_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeneralSettingWidget_Gamepad.GeneralSettingWidget_Gamepad_C.OnKeyDown");

	UGeneralSettingWidget_Gamepad_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GeneralSettingWidget_Gamepad.GeneralSettingWidget_Gamepad_C.GetCurrentFocusWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 FocusWidget                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGeneralSettingWidget_Gamepad_C::GetCurrentFocusWidget(class UWidget** FocusWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeneralSettingWidget_Gamepad.GeneralSettingWidget_Gamepad_C.GetCurrentFocusWidget");

	UGeneralSettingWidget_Gamepad_C_GetCurrentFocusWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FocusWidget != nullptr)
		*FocusWidget = params.FocusWidget;
}


// Function GeneralSettingWidget_Gamepad.GeneralSettingWidget_Gamepad_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UGeneralSettingWidget_Gamepad_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeneralSettingWidget_Gamepad.GeneralSettingWidget_Gamepad_C.OnFocusReceived");

	UGeneralSettingWidget_Gamepad_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GeneralSettingWidget_Gamepad.GeneralSettingWidget_Gamepad_C.IsEnable_VideoCapture
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGeneralSettingWidget_Gamepad_C::IsEnable_VideoCapture()
{
	static auto fn = UObject::FindObject<UFunction>("Function GeneralSettingWidget_Gamepad.GeneralSettingWidget_Gamepad_C.IsEnable_VideoCapture");

	UGeneralSettingWidget_Gamepad_C_IsEnable_VideoCapture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GeneralSettingWidget_Gamepad.GeneralSettingWidget_Gamepad_C.SettingDefault
// (Public, BlueprintCallable, BlueprintEvent)

void UGeneralSettingWidget_Gamepad_C::SettingDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function GeneralSettingWidget_Gamepad.GeneralSettingWidget_Gamepad_C.SettingDefault");

	UGeneralSettingWidget_Gamepad_C_SettingDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GeneralSettingWidget_Gamepad.GeneralSettingWidget_Gamepad_C.IsChanged
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGeneralSettingWidget_Gamepad_C::IsChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function GeneralSettingWidget_Gamepad.GeneralSettingWidget_Gamepad_C.IsChanged");

	UGeneralSettingWidget_Gamepad_C_IsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GeneralSettingWidget_Gamepad.GeneralSettingWidget_Gamepad_C.GetLanguageCultureName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FString                 CultureName                    (Parm, OutParm, ZeroConstructor)

void UGeneralSettingWidget_Gamepad_C::GetLanguageCultureName(struct FString* CultureName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeneralSettingWidget_Gamepad.GeneralSettingWidget_Gamepad_C.GetLanguageCultureName");

	UGeneralSettingWidget_Gamepad_C_GetLanguageCultureName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CultureName != nullptr)
		*CultureName = params.CultureName;
}


// Function GeneralSettingWidget_Gamepad.GeneralSettingWidget_Gamepad_C.InitializeResolutionIWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bConstruct                     (Parm, ZeroConstructor, IsPlainOldData)

void UGeneralSettingWidget_Gamepad_C::InitializeResolutionIWidget(bool bConstruct)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeneralSettingWidget_Gamepad.GeneralSettingWidget_Gamepad_C.InitializeResolutionIWidget");

	UGeneralSettingWidget_Gamepad_C_InitializeResolutionIWidget_Params params;
	params.bConstruct = bConstruct;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GeneralSettingWidget_Gamepad.GeneralSettingWidget_Gamepad_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGeneralSettingWidget_Gamepad_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function GeneralSettingWidget_Gamepad.GeneralSettingWidget_Gamepad_C.Construct");

	UGeneralSettingWidget_Gamepad_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GeneralSettingWidget_Gamepad.GeneralSettingWidget_Gamepad_C.OnApply
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UGeneralSettingWidget_Gamepad_C::OnApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function GeneralSettingWidget_Gamepad.GeneralSettingWidget_Gamepad_C.OnApply");

	UGeneralSettingWidget_Gamepad_C_OnApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GeneralSettingWidget_Gamepad.GeneralSettingWidget_Gamepad_C.OnDefault
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UGeneralSettingWidget_Gamepad_C::OnDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function GeneralSettingWidget_Gamepad.GeneralSettingWidget_Gamepad_C.OnDefault");

	UGeneralSettingWidget_Gamepad_C_OnDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GeneralSettingWidget_Gamepad.GeneralSettingWidget_Gamepad_C.OnReset
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UGeneralSettingWidget_Gamepad_C::OnReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function GeneralSettingWidget_Gamepad.GeneralSettingWidget_Gamepad_C.OnReset");

	UGeneralSettingWidget_Gamepad_C_OnReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GeneralSettingWidget_Gamepad.GeneralSettingWidget_Gamepad_C.ExecuteUbergraph_GeneralSettingWidget_Gamepad
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UGeneralSettingWidget_Gamepad_C::ExecuteUbergraph_GeneralSettingWidget_Gamepad(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeneralSettingWidget_Gamepad.GeneralSettingWidget_Gamepad_C.ExecuteUbergraph_GeneralSettingWidget_Gamepad");

	UGeneralSettingWidget_Gamepad_C_ExecuteUbergraph_GeneralSettingWidget_Gamepad_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
