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

// Function SelfPutHelperWidget.SelfPutHelperWidget_C.SwapFromWeapon
// (Public, BlueprintCallable, BlueprintEvent)

void USelfPutHelperWidget_C::SwapFromWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelfPutHelperWidget.SelfPutHelperWidget_C.SwapFromWeapon");

	USelfPutHelperWidget_C_SwapFromWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SelfPutHelperWidget.SelfPutHelperWidget_C.SwapFormEquipment
// (Public, BlueprintCallable, BlueprintEvent)

void USelfPutHelperWidget_C::SwapFormEquipment()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelfPutHelperWidget.SelfPutHelperWidget_C.SwapFormEquipment");

	USelfPutHelperWidget_C_SwapFormEquipment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SelfPutHelperWidget.SelfPutHelperWidget_C.SwapFormVicnityOrInventory
// (Public, BlueprintCallable, BlueprintEvent)

void USelfPutHelperWidget_C::SwapFormVicnityOrInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelfPutHelperWidget.SelfPutHelperWidget_C.SwapFormVicnityOrInventory");

	USelfPutHelperWidget_C_SwapFormVicnityOrInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SelfPutHelperWidget.SelfPutHelperWidget_C.IsSelfPutMode
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bIsSelfPutMode                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USelfPutHelperWidget_C::IsSelfPutMode(bool* bIsSelfPutMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelfPutHelperWidget.SelfPutHelperWidget_C.IsSelfPutMode");

	USelfPutHelperWidget_C_IsSelfPutMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsSelfPutMode != nullptr)
		*bIsSelfPutMode = params.bIsSelfPutMode;
}


// Function SelfPutHelperWidget.SelfPutHelperWidget_C.GetFocusData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    EnableWeaponIndex              (Parm, OutParm, ZeroConstructor)
// EWeaponAttachmentSlotID        AttachmentSlotID               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USelfPutHelperWidget_C::GetFocusData(int* Index, TArray<int>* EnableWeaponIndex, EWeaponAttachmentSlotID* AttachmentSlotID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelfPutHelperWidget.SelfPutHelperWidget_C.GetFocusData");

	USelfPutHelperWidget_C_GetFocusData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
	if (EnableWeaponIndex != nullptr)
		*EnableWeaponIndex = params.EnableWeaponIndex;
	if (AttachmentSlotID != nullptr)
		*AttachmentSlotID = params.AttachmentSlotID;
}


// Function SelfPutHelperWidget.SelfPutHelperWidget_C.NextWeapon
// (Public, BlueprintCallable, BlueprintEvent)

void USelfPutHelperWidget_C::NextWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelfPutHelperWidget.SelfPutHelperWidget_C.NextWeapon");

	USelfPutHelperWidget_C_NextWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SelfPutHelperWidget.SelfPutHelperWidget_C.PrevWeapon
// (Public, BlueprintCallable, BlueprintEvent)

void USelfPutHelperWidget_C::PrevWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelfPutHelperWidget.SelfPutHelperWidget_C.PrevWeapon");

	USelfPutHelperWidget_C_PrevWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SelfPutHelperWidget.SelfPutHelperWidget_C.Put
// (Public, BlueprintCallable, BlueprintEvent)

void USelfPutHelperWidget_C::Put()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelfPutHelperWidget.SelfPutHelperWidget_C.Put");

	USelfPutHelperWidget_C_Put_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SelfPutHelperWidget.SelfPutHelperWidget_C.Stop
// (Public, BlueprintCallable, BlueprintEvent)

void USelfPutHelperWidget_C::Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelfPutHelperWidget.SelfPutHelperWidget_C.Stop");

	USelfPutHelperWidget_C_Stop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SelfPutHelperWidget.SelfPutHelperWidget_C.StartSelfPutItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class USlotInterface> Slot                           (Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class USlotContainerInterface> Container                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            StartWeaponIndex               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USelfPutHelperWidget_C::StartSelfPutItem(const TScriptInterface<class USlotInterface>& Slot, const TScriptInterface<class USlotContainerInterface>& Container, bool* bResult, int* StartWeaponIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelfPutHelperWidget.SelfPutHelperWidget_C.StartSelfPutItem");

	USelfPutHelperWidget_C_StartSelfPutItem_Params params;
	params.Slot = Slot;
	params.Container = Container;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
	if (StartWeaponIndex != nullptr)
		*StartWeaponIndex = params.StartWeaponIndex;
}


// Function SelfPutHelperWidget.SelfPutHelperWidget_C.OnNotifySelfPut__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bStart                         (Parm, ZeroConstructor, IsPlainOldData)

void USelfPutHelperWidget_C::OnNotifySelfPut__DelegateSignature(bool bStart)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelfPutHelperWidget.SelfPutHelperWidget_C.OnNotifySelfPut__DelegateSignature");

	USelfPutHelperWidget_C_OnNotifySelfPut__DelegateSignature_Params params;
	params.bStart = bStart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
