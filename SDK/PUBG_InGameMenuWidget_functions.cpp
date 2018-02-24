// PLAYERUNKNOWN'S BATTLEGROUNDS (3.6.13.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function InGameMenuWidget.InGameMenuWidget_C.IsPCOnly
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UInGameMenuWidget_C::IsPCOnly(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuWidget.InGameMenuWidget_C.IsPCOnly");

	UInGameMenuWidget_C_IsPCOnly_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuWidget.InGameMenuWidget_C.IsGamepadOnly
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UInGameMenuWidget_C::IsGamepadOnly(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuWidget.InGameMenuWidget_C.IsGamepadOnly");

	UInGameMenuWidget_C_IsGamepadOnly_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuWidget.InGameMenuWidget_C.GetVersionText_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UInGameMenuWidget_C::GetVersionText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuWidget.InGameMenuWidget_C.GetVersionText_1");

	UInGameMenuWidget_C_GetVersionText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InGameMenuWidget.InGameMenuWidget_C.QuitGame
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPopupButtonID                 ButtonID                       (Parm, ZeroConstructor, IsPlainOldData)

void UInGameMenuWidget_C::QuitGame(EPopupButtonID ButtonID)
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuWidget.InGameMenuWidget_C.QuitGame");

	UInGameMenuWidget_C_QuitGame_Params params;
	params.ButtonID = ButtonID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuWidget.InGameMenuWidget_C.GoToLobby
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPopupButtonID                 ButtonID                       (Parm, ZeroConstructor, IsPlainOldData)

void UInGameMenuWidget_C::GoToLobby(EPopupButtonID ButtonID)
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuWidget.InGameMenuWidget_C.GoToLobby");

	UInGameMenuWidget_C_GoToLobby_Params params;
	params.ButtonID = ButtonID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuWidget.InGameMenuWidget_C.BndEvt__Resume_K2Node_ComponentBoundEvent_195_OnClickedEventDispatcher__DelegateSignature
// (BlueprintEvent)

void UInGameMenuWidget_C::BndEvt__Resume_K2Node_ComponentBoundEvent_195_OnClickedEventDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuWidget.InGameMenuWidget_C.BndEvt__Resume_K2Node_ComponentBoundEvent_195_OnClickedEventDispatcher__DelegateSignature");

	UInGameMenuWidget_C_BndEvt__Resume_K2Node_ComponentBoundEvent_195_OnClickedEventDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuWidget.InGameMenuWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UInGameMenuWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuWidget.InGameMenuWidget_C.Construct");

	UInGameMenuWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuWidget.InGameMenuWidget_C.OnHiddenWidget
// (BlueprintCallable, BlueprintEvent)

void UInGameMenuWidget_C::OnHiddenWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuWidget.InGameMenuWidget_C.OnHiddenWidget");

	UInGameMenuWidget_C_OnHiddenWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuWidget.InGameMenuWidget_C.BndEvt__OptionButton_K2Node_ComponentBoundEvent_107_OnClickedEventDispatcher__DelegateSignature
// (BlueprintEvent)

void UInGameMenuWidget_C::BndEvt__OptionButton_K2Node_ComponentBoundEvent_107_OnClickedEventDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuWidget.InGameMenuWidget_C.BndEvt__OptionButton_K2Node_ComponentBoundEvent_107_OnClickedEventDispatcher__DelegateSignature");

	UInGameMenuWidget_C_BndEvt__OptionButton_K2Node_ComponentBoundEvent_107_OnClickedEventDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuWidget.InGameMenuWidget_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)

void UInGameMenuWidget_C::CustomEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuWidget.InGameMenuWidget_C.CustomEvent_1");

	UInGameMenuWidget_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuWidget.InGameMenuWidget_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)

void UInGameMenuWidget_C::CustomEvent_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuWidget.InGameMenuWidget_C.CustomEvent_2");

	UInGameMenuWidget_C_CustomEvent_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuWidget.InGameMenuWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UInGameMenuWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuWidget.InGameMenuWidget_C.Tick");

	UInGameMenuWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuWidget.InGameMenuWidget_C.BndEvt__ButtonWidget_108_K2Node_ComponentBoundEvent_96_OnClickedEventDispatcher__DelegateSignature
// (BlueprintEvent)

void UInGameMenuWidget_C::BndEvt__ButtonWidget_108_K2Node_ComponentBoundEvent_96_OnClickedEventDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuWidget.InGameMenuWidget_C.BndEvt__ButtonWidget_108_K2Node_ComponentBoundEvent_96_OnClickedEventDispatcher__DelegateSignature");

	UInGameMenuWidget_C_BndEvt__ButtonWidget_108_K2Node_ComponentBoundEvent_96_OnClickedEventDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuWidget.InGameMenuWidget_C.BndEvt__GotoLobbyButton_K2Node_ComponentBoundEvent_89_OnClickedEventDispatcher__DelegateSignature
// (BlueprintEvent)

void UInGameMenuWidget_C::BndEvt__GotoLobbyButton_K2Node_ComponentBoundEvent_89_OnClickedEventDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuWidget.InGameMenuWidget_C.BndEvt__GotoLobbyButton_K2Node_ComponentBoundEvent_89_OnClickedEventDispatcher__DelegateSignature");

	UInGameMenuWidget_C_BndEvt__GotoLobbyButton_K2Node_ComponentBoundEvent_89_OnClickedEventDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuWidget.InGameMenuWidget_C.OpenGamepadOption
// (BlueprintCallable, BlueprintEvent)

void UInGameMenuWidget_C::OpenGamepadOption()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuWidget.InGameMenuWidget_C.OpenGamepadOption");

	UInGameMenuWidget_C_OpenGamepadOption_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuWidget.InGameMenuWidget_C.BndEvt__GamepadGuide_K2Node_ComponentBoundEvent_123_OnClickedEventDispatcher__DelegateSignature
// (BlueprintEvent)

void UInGameMenuWidget_C::BndEvt__GamepadGuide_K2Node_ComponentBoundEvent_123_OnClickedEventDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuWidget.InGameMenuWidget_C.BndEvt__GamepadGuide_K2Node_ComponentBoundEvent_123_OnClickedEventDispatcher__DelegateSignature");

	UInGameMenuWidget_C_BndEvt__GamepadGuide_K2Node_ComponentBoundEvent_123_OnClickedEventDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuWidget.InGameMenuWidget_C.ExecuteUbergraph_InGameMenuWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UInGameMenuWidget_C::ExecuteUbergraph_InGameMenuWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuWidget.InGameMenuWidget_C.ExecuteUbergraph_InGameMenuWidget");

	UInGameMenuWidget_C_ExecuteUbergraph_InGameMenuWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuWidget.InGameMenuWidget_C.TestDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewParam                       (Parm, ZeroConstructor, IsPlainOldData)

void UInGameMenuWidget_C::TestDispatcher__DelegateSignature(bool NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuWidget.InGameMenuWidget_C.TestDispatcher__DelegateSignature");

	UInGameMenuWidget_C_TestDispatcher__DelegateSignature_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
