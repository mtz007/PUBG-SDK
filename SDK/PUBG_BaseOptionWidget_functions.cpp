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

// Function BaseOptionWidget.BaseOptionWidget_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBaseOptionWidget_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseOptionWidget.BaseOptionWidget_C.OnKeyDown");

	UBaseOptionWidget_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseOptionWidget.BaseOptionWidget_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBaseOptionWidget_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseOptionWidget.BaseOptionWidget_C.OnFocusReceived");

	UBaseOptionWidget_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseOptionWidget.BaseOptionWidget_C.GetCurrentFocusWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 FocusWidget                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBaseOptionWidget_C::GetCurrentFocusWidget(class UWidget** FocusWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseOptionWidget.BaseOptionWidget_C.GetCurrentFocusWidget");

	UBaseOptionWidget_C_GetCurrentFocusWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FocusWidget != nullptr)
		*FocusWidget = params.FocusWidget;
}


// Function BaseOptionWidget.BaseOptionWidget_C.OnPrevOrNextFocusableWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bNext                          (Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 FocusableWidget                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBaseOptionWidget_C::OnPrevOrNextFocusableWidget(bool bNext, class UWidget** FocusableWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseOptionWidget.BaseOptionWidget_C.OnPrevOrNextFocusableWidget");

	UBaseOptionWidget_C_OnPrevOrNextFocusableWidget_Params params;
	params.bNext = bNext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FocusableWidget != nullptr)
		*FocusableWidget = params.FocusableWidget;
}


// Function BaseOptionWidget.BaseOptionWidget_C.ProcessKeyUp
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)
// struct FEventReply             EventReply                     (Parm, OutParm)

void UBaseOptionWidget_C::ProcessKeyUp(const struct FKey& Key, struct FEventReply* EventReply)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseOptionWidget.BaseOptionWidget_C.ProcessKeyUp");

	UBaseOptionWidget_C_ProcessKeyUp_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EventReply != nullptr)
		*EventReply = params.EventReply;
}


// Function BaseOptionWidget.BaseOptionWidget_C.ProcessKeyDown
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply             EventReply                     (Parm, OutParm)

void UBaseOptionWidget_C::ProcessKeyDown(const struct FKey& Key, struct FEventReply* EventReply)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseOptionWidget.BaseOptionWidget_C.ProcessKeyDown");

	UBaseOptionWidget_C_ProcessKeyDown_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EventReply != nullptr)
		*EventReply = params.EventReply;
}


// Function BaseOptionWidget.BaseOptionWidget_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBaseOptionWidget_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseOptionWidget.BaseOptionWidget_C.OnKeyUp");

	UBaseOptionWidget_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
