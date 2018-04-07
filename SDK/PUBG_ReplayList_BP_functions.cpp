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

// Function ReplayList_BP.ReplayList_BP_C.OnUpdateItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FReplayItem             inReplayItem                   (Parm)

void AReplayList_BP_C::OnUpdateItem(const struct FReplayItem& inReplayItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayList_BP.ReplayList_BP_C.OnUpdateItem");

	AReplayList_BP_C_OnUpdateItem_Params params;
	params.inReplayItem = inReplayItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayList_BP.ReplayList_BP_C.UpdateReplayList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 inRegionOrLocal                (Parm, ZeroConstructor)

void AReplayList_BP_C::UpdateReplayList(const struct FString& inRegionOrLocal)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayList_BP.ReplayList_BP_C.UpdateReplayList");

	AReplayList_BP_C_UpdateReplayList_Params params;
	params.inRegionOrLocal = inRegionOrLocal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayList_BP.ReplayList_BP_C.CheckReplayBusyStatus
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsReplayBusy                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AReplayList_BP_C::CheckReplayBusyStatus(bool* bIsReplayBusy)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayList_BP.ReplayList_BP_C.CheckReplayBusyStatus");

	AReplayList_BP_C_CheckReplayBusyStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsReplayBusy != nullptr)
		*bIsReplayBusy = params.bIsReplayBusy;
}


// Function ReplayList_BP.ReplayList_BP_C.OnGoPageBtn
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AReplayList_BP_C::OnGoPageBtn()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayList_BP.ReplayList_BP_C.OnGoPageBtn");

	AReplayList_BP_C_OnGoPageBtn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayList_BP.ReplayList_BP_C.OnNextPageBtn
// (Public, BlueprintCallable, BlueprintEvent)

void AReplayList_BP_C::OnNextPageBtn()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayList_BP.ReplayList_BP_C.OnNextPageBtn");

	AReplayList_BP_C_OnNextPageBtn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayList_BP.ReplayList_BP_C.OnPrevPageBtn
// (Public, BlueprintCallable, BlueprintEvent)

void AReplayList_BP_C::OnPrevPageBtn()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayList_BP.ReplayList_BP_C.OnPrevPageBtn");

	AReplayList_BP_C_OnPrevPageBtn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayList_BP.ReplayList_BP_C.ClearReplayList
// (Public, BlueprintCallable, BlueprintEvent)

void AReplayList_BP_C::ClearReplayList()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayList_BP.ReplayList_BP_C.ClearReplayList");

	AReplayList_BP_C_ClearReplayList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayList_BP.ReplayList_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AReplayList_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayList_BP.ReplayList_BP_C.UserConstructionScript");

	AReplayList_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayList_BP.ReplayList_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AReplayList_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayList_BP.ReplayList_BP_C.ReceiveBeginPlay");

	AReplayList_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayList_BP.ReplayList_BP_C.CreateReplayListEvent
// (BlueprintCallable, BlueprintEvent)

void AReplayList_BP_C::CreateReplayListEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayList_BP.ReplayList_BP_C.CreateReplayListEvent");

	AReplayList_BP_C_CreateReplayListEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayList_BP.ReplayList_BP_C.PrevPageEvent
// (BlueprintCallable, BlueprintEvent)

void AReplayList_BP_C::PrevPageEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayList_BP.ReplayList_BP_C.PrevPageEvent");

	AReplayList_BP_C_PrevPageEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayList_BP.ReplayList_BP_C.NextPageEvent
// (BlueprintCallable, BlueprintEvent)

void AReplayList_BP_C::NextPageEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayList_BP.ReplayList_BP_C.NextPageEvent");

	AReplayList_BP_C_NextPageEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayList_BP.ReplayList_BP_C.GoPageEvent
// (BlueprintCallable, BlueprintEvent)

void AReplayList_BP_C::GoPageEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayList_BP.ReplayList_BP_C.GoPageEvent");

	AReplayList_BP_C_GoPageEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayList_BP.ReplayList_BP_C.OnItemClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 RegionOrLocal                  (Parm, ZeroConstructor)
// struct FReplayItem             inReplayItem                   (Parm)

void AReplayList_BP_C::OnItemClicked(const struct FString& RegionOrLocal, const struct FReplayItem& inReplayItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayList_BP.ReplayList_BP_C.OnItemClicked");

	AReplayList_BP_C_OnItemClicked_Params params;
	params.RegionOrLocal = RegionOrLocal;
	params.inReplayItem = inReplayItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayList_BP.ReplayList_BP_C.ExecuteUbergraph_ReplayList_BP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AReplayList_BP_C::ExecuteUbergraph_ReplayList_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayList_BP.ReplayList_BP_C.ExecuteUbergraph_ReplayList_BP");

	AReplayList_BP_C_ExecuteUbergraph_ReplayList_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
