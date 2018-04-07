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

// Function NewLobbySystemMenuWidget.NewLobbySystemMenuWidget_C.GetPlatformText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 retString                      (Parm, OutParm, ZeroConstructor)

void UNewLobbySystemMenuWidget_C::GetPlatformText(struct FString* retString)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewLobbySystemMenuWidget.NewLobbySystemMenuWidget_C.GetPlatformText");

	UNewLobbySystemMenuWidget_C_GetPlatformText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (retString != nullptr)
		*retString = params.retString;
}


// Function NewLobbySystemMenuWidget.NewLobbySystemMenuWidget_C.Get_PUBGVersionText_Text_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UNewLobbySystemMenuWidget_C::Get_PUBGVersionText_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewLobbySystemMenuWidget.NewLobbySystemMenuWidget_C.Get_PUBGVersionText_Text_1");

	UNewLobbySystemMenuWidget_C_Get_PUBGVersionText_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NewLobbySystemMenuWidget.NewLobbySystemMenuWidget_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UNewLobbySystemMenuWidget_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewLobbySystemMenuWidget.NewLobbySystemMenuWidget_C.GetVisibility_1");

	UNewLobbySystemMenuWidget_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NewLobbySystemMenuWidget.NewLobbySystemMenuWidget_C.QuitGame
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPopupButtonID                 Button                         (Parm, ZeroConstructor, IsPlainOldData)

void UNewLobbySystemMenuWidget_C::QuitGame(EPopupButtonID Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewLobbySystemMenuWidget.NewLobbySystemMenuWidget_C.QuitGame");

	UNewLobbySystemMenuWidget_C_QuitGame_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewLobbySystemMenuWidget.NewLobbySystemMenuWidget_C.GetVersionText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UNewLobbySystemMenuWidget_C::GetVersionText()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewLobbySystemMenuWidget.NewLobbySystemMenuWidget_C.GetVersionText");

	UNewLobbySystemMenuWidget_C_GetVersionText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NewLobbySystemMenuWidget.NewLobbySystemMenuWidget_C.GetMainCoherentWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCoherentUIGTWidget*     Browser                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UNewLobbySystemMenuWidget_C::GetMainCoherentWidget(class UCoherentUIGTWidget** Browser)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewLobbySystemMenuWidget.NewLobbySystemMenuWidget_C.GetMainCoherentWidget");

	UNewLobbySystemMenuWidget_C_GetMainCoherentWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Browser != nullptr)
		*Browser = params.Browser;
}


// Function NewLobbySystemMenuWidget.NewLobbySystemMenuWidget_C.LobbyReoload
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UNewLobbySystemMenuWidget_C::LobbyReoload()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewLobbySystemMenuWidget.NewLobbySystemMenuWidget_C.LobbyReoload");

	UNewLobbySystemMenuWidget_C_LobbyReoload_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewLobbySystemMenuWidget.NewLobbySystemMenuWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UNewLobbySystemMenuWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewLobbySystemMenuWidget.NewLobbySystemMenuWidget_C.Construct");

	UNewLobbySystemMenuWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewLobbySystemMenuWidget.NewLobbySystemMenuWidget_C.BndEvt__ButtonReload_K2Node_ComponentBoundEvent_110_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UNewLobbySystemMenuWidget_C::BndEvt__ButtonReload_K2Node_ComponentBoundEvent_110_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewLobbySystemMenuWidget.NewLobbySystemMenuWidget_C.BndEvt__ButtonReload_K2Node_ComponentBoundEvent_110_OnButtonClickedEvent__DelegateSignature");

	UNewLobbySystemMenuWidget_C_BndEvt__ButtonReload_K2Node_ComponentBoundEvent_110_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewLobbySystemMenuWidget.NewLobbySystemMenuWidget_C.BndEvt__ButtonSettings_K2Node_ComponentBoundEvent_155_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UNewLobbySystemMenuWidget_C::BndEvt__ButtonSettings_K2Node_ComponentBoundEvent_155_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewLobbySystemMenuWidget.NewLobbySystemMenuWidget_C.BndEvt__ButtonSettings_K2Node_ComponentBoundEvent_155_OnButtonClickedEvent__DelegateSignature");

	UNewLobbySystemMenuWidget_C_BndEvt__ButtonSettings_K2Node_ComponentBoundEvent_155_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewLobbySystemMenuWidget.NewLobbySystemMenuWidget_C.BndEvt__ButtonExit_K2Node_ComponentBoundEvent_176_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UNewLobbySystemMenuWidget_C::BndEvt__ButtonExit_K2Node_ComponentBoundEvent_176_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewLobbySystemMenuWidget.NewLobbySystemMenuWidget_C.BndEvt__ButtonExit_K2Node_ComponentBoundEvent_176_OnButtonClickedEvent__DelegateSignature");

	UNewLobbySystemMenuWidget_C_BndEvt__ButtonExit_K2Node_ComponentBoundEvent_176_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewLobbySystemMenuWidget.NewLobbySystemMenuWidget_C.BndEvt__ButtonResume_K2Node_ComponentBoundEvent_574_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UNewLobbySystemMenuWidget_C::BndEvt__ButtonResume_K2Node_ComponentBoundEvent_574_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewLobbySystemMenuWidget.NewLobbySystemMenuWidget_C.BndEvt__ButtonResume_K2Node_ComponentBoundEvent_574_OnButtonClickedEvent__DelegateSignature");

	UNewLobbySystemMenuWidget_C_BndEvt__ButtonResume_K2Node_ComponentBoundEvent_574_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewLobbySystemMenuWidget.NewLobbySystemMenuWidget_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_66_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UNewLobbySystemMenuWidget_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_66_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewLobbySystemMenuWidget.NewLobbySystemMenuWidget_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_66_OnButtonClickedEvent__DelegateSignature");

	UNewLobbySystemMenuWidget_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_66_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewLobbySystemMenuWidget.NewLobbySystemMenuWidget_C.Custom Event_1
// (BlueprintCallable, BlueprintEvent)

void UNewLobbySystemMenuWidget_C::Custom_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewLobbySystemMenuWidget.NewLobbySystemMenuWidget_C.Custom Event_1");

	UNewLobbySystemMenuWidget_C_Custom_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewLobbySystemMenuWidget.NewLobbySystemMenuWidget_C.ExecuteUbergraph_NewLobbySystemMenuWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UNewLobbySystemMenuWidget_C::ExecuteUbergraph_NewLobbySystemMenuWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewLobbySystemMenuWidget.NewLobbySystemMenuWidget_C.ExecuteUbergraph_NewLobbySystemMenuWidget");

	UNewLobbySystemMenuWidget_C_ExecuteUbergraph_NewLobbySystemMenuWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
