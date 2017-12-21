// PLAYERUNKNOWN'S BATTLEGROUNDS (3.5.5.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_KillMessageWidget.BP_KillMessageWidget_C.SetMessageColorAndOpacity
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (Parm, IsPlainOldData)

void UBP_KillMessageWidget_C::SetMessageColorAndOpacity(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KillMessageWidget.BP_KillMessageWidget_C.SetMessageColorAndOpacity");

	UBP_KillMessageWidget_C_SetMessageColorAndOpacity_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KillMessageWidget.BP_KillMessageWidget_C.SetFontStyleAndSize
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*              Text                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Style                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Size                           (Parm, ZeroConstructor, IsPlainOldData)

void UBP_KillMessageWidget_C::SetFontStyleAndSize(class UTextBlock* Text, const struct FName& Style, int Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KillMessageWidget.BP_KillMessageWidget_C.SetFontStyleAndSize");

	UBP_KillMessageWidget_C_SetFontStyleAndSize_Params params;
	params.Text = Text;
	params.Style = Style;
	params.Size = Size;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KillMessageWidget.BP_KillMessageWidget_C.SetLayoutTo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsHighlight                   (Parm, ZeroConstructor, IsPlainOldData)

void UBP_KillMessageWidget_C::SetLayoutTo(bool bIsHighlight)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KillMessageWidget.BP_KillMessageWidget_C.SetLayoutTo");

	UBP_KillMessageWidget_C_SetLayoutTo_Params params;
	params.bIsHighlight = bIsHighlight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KillMessageWidget.BP_KillMessageWidget_C.SetDeathMessage_Implementation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDeathMessage           DeathMessage                   (Parm, OutParm, ReferenceParm)

void UBP_KillMessageWidget_C::SetDeathMessage_Implementation(struct FDeathMessage* DeathMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KillMessageWidget.BP_KillMessageWidget_C.SetDeathMessage_Implementation");

	UBP_KillMessageWidget_C_SetDeathMessage_Implementation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DeathMessage != nullptr)
		*DeathMessage = params.DeathMessage;
}


// Function BP_KillMessageWidget.BP_KillMessageWidget_C.SetDeathMessage
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FDeathMessage*          InDeathMessage                 (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_KillMessageWidget_C::SetDeathMessage(struct FDeathMessage* InDeathMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KillMessageWidget.BP_KillMessageWidget_C.SetDeathMessage");

	UBP_KillMessageWidget_C_SetDeathMessage_Params params;
	params.InDeathMessage = InDeathMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KillMessageWidget.BP_KillMessageWidget_C.ExecuteUbergraph_BP_KillMessageWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_KillMessageWidget_C::ExecuteUbergraph_BP_KillMessageWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KillMessageWidget.BP_KillMessageWidget_C.ExecuteUbergraph_BP_KillMessageWidget");

	UBP_KillMessageWidget_C_ExecuteUbergraph_BP_KillMessageWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
