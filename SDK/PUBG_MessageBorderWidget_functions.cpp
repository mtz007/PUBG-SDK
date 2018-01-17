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

// Function MessageBorderWidget.MessageBorderWidget_C.RemoveMessage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMessageWidget_C*        DeleteMessage                  (Parm, ZeroConstructor, IsPlainOldData)

void UMessageBorderWidget_C::RemoveMessage(class UMessageWidget_C* DeleteMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageBorderWidget.MessageBorderWidget_C.RemoveMessage");

	UMessageBorderWidget_C_RemoveMessage_Params params;
	params.DeleteMessage = DeleteMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageBorderWidget.MessageBorderWidget_C.AddMessage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMessageWidget_C*        Message                        (Parm, ZeroConstructor, IsPlainOldData)

void UMessageBorderWidget_C::AddMessage(class UMessageWidget_C* Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageBorderWidget.MessageBorderWidget_C.AddMessage");

	UMessageBorderWidget_C_AddMessage_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageBorderWidget.MessageBorderWidget_C.DisplayKilledMessage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDeathMessage           DeathMessage                   (Parm)

void UMessageBorderWidget_C::DisplayKilledMessage(const struct FDeathMessage& DeathMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageBorderWidget.MessageBorderWidget_C.DisplayKilledMessage");

	UMessageBorderWidget_C_DisplayKilledMessage_Params params;
	params.DeathMessage = DeathMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
