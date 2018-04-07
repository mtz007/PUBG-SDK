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

// Function ReplayListItem.ReplayListItem_C.SetAllDeadOrWin
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bAllDeadOrWin                  (Parm, ZeroConstructor, IsPlainOldData)

void UReplayListItem_C::SetAllDeadOrWin(bool bAllDeadOrWin)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.SetAllDeadOrWin");

	UReplayListItem_C_SetAllDeadOrWin_Params params;
	params.bAllDeadOrWin = bAllDeadOrWin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.SetSeverRecording
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsServerRecording             (Parm, ZeroConstructor, IsPlainOldData)

void UReplayListItem_C::SetSeverRecording(bool bIsServerRecording)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.SetSeverRecording");

	UReplayListItem_C_SetSeverRecording_Params params;
	params.bIsServerRecording = bIsServerRecording;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.SetActionMessageDownloadPercent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          fPercent                       (Parm, ZeroConstructor, IsPlainOldData)

void UReplayListItem_C::SetActionMessageDownloadPercent(float fPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.SetActionMessageDownloadPercent");

	UReplayListItem_C_SetActionMessageDownloadPercent_Params params;
	params.fPercent = fPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.ShowDownloadPercent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 strFileName                    (Parm, ZeroConstructor)
// int                            nReceived                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            nTotal                         (Parm, ZeroConstructor, IsPlainOldData)

void UReplayListItem_C::ShowDownloadPercent(const struct FString& strFileName, int nReceived, int nTotal)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.ShowDownloadPercent");

	UReplayListItem_C_ShowDownloadPercent_Params params;
	params.strFileName = strFileName;
	params.nReceived = nReceived;
	params.nTotal = nTotal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.DisableDownload
// (Public, BlueprintCallable, BlueprintEvent)

void UReplayListItem_C::DisableDownload()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.DisableDownload");

	UReplayListItem_C_DisableDownload_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.SetArchived
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsArchived                     (Parm, ZeroConstructor, IsPlainOldData)

void UReplayListItem_C::SetArchived(bool IsArchived)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.SetArchived");

	UReplayListItem_C_SetArchived_Params params;
	params.IsArchived = IsArchived;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.SetRegionOrLocal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 inRegionOrLocal                (Parm, ZeroConstructor)

void UReplayListItem_C::SetRegionOrLocal(const struct FString& inRegionOrLocal)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.SetRegionOrLocal");

	UReplayListItem_C_SetRegionOrLocal_Params params;
	params.inRegionOrLocal = inRegionOrLocal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.SetShouldKeep
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShouldKeep                    (Parm, ZeroConstructor, IsPlainOldData)

void UReplayListItem_C::SetShouldKeep(bool bShouldKeep)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.SetShouldKeep");

	UReplayListItem_C_SetShouldKeep_Params params;
	params.bShouldKeep = bShouldKeep;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.SetCorrupt
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsCorrupt                     (Parm, ZeroConstructor, IsPlainOldData)

void UReplayListItem_C::SetCorrupt(bool bIsCorrupt)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.SetCorrupt");

	UReplayListItem_C_SetCorrupt_Params params;
	params.bIsCorrupt = bIsCorrupt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.SetInComplete
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIncomplete                    (Parm, ZeroConstructor, IsPlainOldData)

void UReplayListItem_C::SetInComplete(bool bIncomplete)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.SetInComplete");

	UReplayListItem_C_SetInComplete_Params params;
	params.bIncomplete = bIncomplete;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.SetVersionCompatible
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsVersionCompatible           (Parm, ZeroConstructor, IsPlainOldData)

void UReplayListItem_C::SetVersionCompatible(bool bIsVersionCompatible)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.SetVersionCompatible");

	UReplayListItem_C_SetVersionCompatible_Params params;
	params.bIsVersionCompatible = bIsVersionCompatible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.SetMode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Mode                           (Parm, ZeroConstructor)

void UReplayListItem_C::SetMode(const struct FString& Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.SetMode");

	UReplayListItem_C_SetMode_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.SetLength
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            LengthInMS                     (Parm, ZeroConstructor, IsPlainOldData)

void UReplayListItem_C::SetLength(int LengthInMS)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.SetLength");

	UReplayListItem_C_SetLength_Params params;
	params.LengthInMS = LengthInMS;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.SetActionMessageSimple
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Message                        (Parm, ZeroConstructor)

void UReplayListItem_C::SetActionMessageSimple(const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.SetActionMessageSimple");

	UReplayListItem_C_SetActionMessageSimple_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.SetActionMessageDecompressPercent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          fPercent                       (Parm, ZeroConstructor, IsPlainOldData)

void UReplayListItem_C::SetActionMessageDecompressPercent(float fPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.SetActionMessageDecompressPercent");

	UReplayListItem_C_SetActionMessageDecompressPercent_Params params;
	params.fPercent = fPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.SetActionMessage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsDownloading                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsUnzipping                   (Parm, ZeroConstructor, IsPlainOldData)

void UReplayListItem_C::SetActionMessage(bool bIsDownloading, bool bIsUnzipping)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.SetActionMessage");

	UReplayListItem_C_SetActionMessage_Params params;
	params.bIsDownloading = bIsDownloading;
	params.bIsUnzipping = bIsUnzipping;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.SetDownloadCancelBtns
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsDownloading                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsUnzipping                   (Parm, ZeroConstructor, IsPlainOldData)

void UReplayListItem_C::SetDownloadCancelBtns(bool bIsDownloading, bool bIsUnzipping)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.SetDownloadCancelBtns");

	UReplayListItem_C_SetDownloadCancelBtns_Params params;
	params.bIsDownloading = bIsDownloading;
	params.bIsUnzipping = bIsUnzipping;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.SetDate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDateTime               Date                           (Parm)

void UReplayListItem_C::SetDate(const struct FDateTime& Date)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.SetDate");

	UReplayListItem_C_SetDate_Params params;
	params.Date = Date;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.SetLive
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsLive                         (Parm, ZeroConstructor, IsPlainOldData)

void UReplayListItem_C::SetLive(bool IsLive)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.SetLive");

	UReplayListItem_C_SetLive_Params params;
	params.IsLive = IsLive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.SetSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SizeInBytes                    (Parm, ZeroConstructor, IsPlainOldData)

void UReplayListItem_C::SetSize(int SizeInBytes)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.SetSize");

	UReplayListItem_C_SetSize_Params params;
	params.SizeInBytes = SizeInBytes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.SetFriendlyName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 FriendlyName                   (Parm, ZeroConstructor)

void UReplayListItem_C::SetFriendlyName(const struct FString& FriendlyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.SetFriendlyName");

	UReplayListItem_C_SetFriendlyName_Params params;
	params.FriendlyName = FriendlyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.SetReplayItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FReplayItem             ReplayItem                     (Parm)

void UReplayListItem_C::SetReplayItem(const struct FReplayItem& ReplayItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.SetReplayItem");

	UReplayListItem_C_SetReplayItem_Params params;
	params.ReplayItem = ReplayItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.SetSessionName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Text                           (Parm, ZeroConstructor)

void UReplayListItem_C::SetSessionName(const struct FString& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.SetSessionName");

	UReplayListItem_C_SetSessionName_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.OnProgress
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 archive                        (Parm, ZeroConstructor)
// float                          percentage                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            bytes                          (Parm, ZeroConstructor, IsPlainOldData)

void UReplayListItem_C::OnProgress(const struct FString& archive, float percentage, int bytes)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.OnProgress");

	UReplayListItem_C_OnProgress_Params params;
	params.archive = archive;
	params.percentage = percentage;
	params.bytes = bytes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.OnFileDone
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 archive                        (Parm, ZeroConstructor)
// struct FString                 file                           (Parm, ZeroConstructor)

void UReplayListItem_C::OnFileDone(const struct FString& archive, const struct FString& file)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.OnFileDone");

	UReplayListItem_C_OnFileDone_Params params;
	params.archive = archive;
	params.file = file;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.OnDone
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 archive                        (Parm, ZeroConstructor)
// TEnumAsByte<EZipUtilityCompletionState> CompletionState                (Parm, ZeroConstructor, IsPlainOldData)

void UReplayListItem_C::OnDone(const struct FString& archive, TEnumAsByte<EZipUtilityCompletionState> CompletionState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.OnDone");

	UReplayListItem_C_OnDone_Params params;
	params.archive = archive;
	params.CompletionState = CompletionState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.BndEvt__Cancel_K2Node_ComponentBoundEvent_92_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UReplayListItem_C::BndEvt__Cancel_K2Node_ComponentBoundEvent_92_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.BndEvt__Cancel_K2Node_ComponentBoundEvent_92_OnButtonClickedEvent__DelegateSignature");

	UReplayListItem_C_BndEvt__Cancel_K2Node_ComponentBoundEvent_92_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.BndEvt__CheckBoxShouldKeep_K2Node_ComponentBoundEvent_548_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (Parm, ZeroConstructor, IsPlainOldData)

void UReplayListItem_C::BndEvt__CheckBoxShouldKeep_K2Node_ComponentBoundEvent_548_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.BndEvt__CheckBoxShouldKeep_K2Node_ComponentBoundEvent_548_OnCheckBoxComponentStateChanged__DelegateSignature");

	UReplayListItem_C_BndEvt__CheckBoxShouldKeep_K2Node_ComponentBoundEvent_548_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.UnzipEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 strFullPath                    (Parm, ZeroConstructor)
// struct FString                 strToExtract                   (Parm, ZeroConstructor)

void UReplayListItem_C::UnzipEvent(const struct FString& strFullPath, const struct FString& strToExtract)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.UnzipEvent");

	UReplayListItem_C_UnzipEvent_Params params;
	params.strFullPath = strFullPath;
	params.strToExtract = strToExtract;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.ShowUnzipPercent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 archive                        (Parm, ZeroConstructor)
// float                          percentage                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            bytes                          (Parm, ZeroConstructor, IsPlainOldData)

void UReplayListItem_C::ShowUnzipPercent(const struct FString& archive, float percentage, int bytes)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.ShowUnzipPercent");

	UReplayListItem_C_ShowUnzipPercent_Params params;
	params.archive = archive;
	params.percentage = percentage;
	params.bytes = bytes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.BndEvt__ButtonReplay_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UReplayListItem_C::BndEvt__ButtonReplay_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.BndEvt__ButtonReplay_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UReplayListItem_C_BndEvt__ButtonReplay_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.OnStartProcess
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 archive                        (Parm, ZeroConstructor)
// int                            bytes                          (Parm, ZeroConstructor, IsPlainOldData)

void UReplayListItem_C::OnStartProcess(const struct FString& archive, int bytes)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.OnStartProcess");

	UReplayListItem_C_OnStartProcess_Params params;
	params.archive = archive;
	params.bytes = bytes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.OnFileFound
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 archive                        (Parm, ZeroConstructor)
// struct FString                 file                           (Parm, ZeroConstructor)
// int                            Size                           (Parm, ZeroConstructor, IsPlainOldData)

void UReplayListItem_C::OnFileFound(const struct FString& archive, const struct FString& file, int Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.OnFileFound");

	UReplayListItem_C_OnFileFound_Params params;
	params.archive = archive;
	params.file = file;
	params.Size = Size;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.ShowUnZipFileDone
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 archive                        (Parm, ZeroConstructor)
// struct FString                 file                           (Parm, ZeroConstructor)

void UReplayListItem_C::ShowUnZipFileDone(const struct FString& archive, const struct FString& file)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.ShowUnZipFileDone");

	UReplayListItem_C_ShowUnZipFileDone_Params params;
	params.archive = archive;
	params.file = file;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.ShowUnzipDone
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 archive                        (Parm, ZeroConstructor)
// TEnumAsByte<EZipUtilityCompletionState> CompletionState                (Parm, ZeroConstructor, IsPlainOldData)

void UReplayListItem_C::ShowUnzipDone(const struct FString& archive, TEnumAsByte<EZipUtilityCompletionState> CompletionState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.ShowUnzipDone");

	UReplayListItem_C_ShowUnzipDone_Params params;
	params.archive = archive;
	params.CompletionState = CompletionState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.BndEvt__Download_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UReplayListItem_C::BndEvt__Download_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.BndEvt__Download_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature");

	UReplayListItem_C_BndEvt__Download_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UReplayListItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.Construct");

	UReplayListItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.ExecuteUbergraph_ReplayListItem
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UReplayListItem_C::ExecuteUbergraph_ReplayListItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.ExecuteUbergraph_ReplayListItem");

	UReplayListItem_C_ExecuteUbergraph_ReplayListItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.EventOnUpdateItem__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FReplayItem             inReplayItem                   (Parm)

void UReplayListItem_C::EventOnUpdateItem__DelegateSignature(const struct FReplayItem& inReplayItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.EventOnUpdateItem__DelegateSignature");

	UReplayListItem_C_EventOnUpdateItem__DelegateSignature_Params params;
	params.inReplayItem = inReplayItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.EventOnUpdateShouldKeep__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 RegionOrLocal                  (Parm, ZeroConstructor)
// struct FReplayItem             inReplayItem                   (Parm)
// struct FReplayItem             bShoudUpdate                   (Parm)

void UReplayListItem_C::EventOnUpdateShouldKeep__DelegateSignature(const struct FString& RegionOrLocal, const struct FReplayItem& inReplayItem, const struct FReplayItem& bShoudUpdate)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.EventOnUpdateShouldKeep__DelegateSignature");

	UReplayListItem_C_EventOnUpdateShouldKeep__DelegateSignature_Params params;
	params.RegionOrLocal = RegionOrLocal;
	params.inReplayItem = inReplayItem;
	params.bShoudUpdate = bShoudUpdate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.EventOnCancelDownloading__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)
// class UWidget*                 Widget                         (Parm, ZeroConstructor, IsPlainOldData)

void UReplayListItem_C::EventOnCancelDownloading__DelegateSignature(const struct FString& Name, class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.EventOnCancelDownloading__DelegateSignature");

	UReplayListItem_C_EventOnCancelDownloading__DelegateSignature_Params params;
	params.Name = Name;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.EventOnDownload__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)
// class UWidget*                 Widget                         (Parm, ZeroConstructor, IsPlainOldData)

void UReplayListItem_C::EventOnDownload__DelegateSignature(const struct FString& Name, class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.EventOnDownload__DelegateSignature");

	UReplayListItem_C_EventOnDownload__DelegateSignature_Params params;
	params.Name = Name;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.EventOnItemClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 inRegionOrLocal                (Parm, ZeroConstructor)
// struct FReplayItem             inReplayItem                   (Parm)

void UReplayListItem_C::EventOnItemClicked__DelegateSignature(const struct FString& inRegionOrLocal, const struct FReplayItem& inReplayItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.EventOnItemClicked__DelegateSignature");

	UReplayListItem_C_EventOnItemClicked__DelegateSignature_Params params;
	params.inRegionOrLocal = inRegionOrLocal;
	params.inReplayItem = inReplayItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
