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

// Function ObserverTeamInfoList.ObserverTeamInfoList_C.On_TeamList_Prepass_2
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UObserverTeamInfoList_C::On_TeamList_Prepass_2(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ObserverTeamInfoList.ObserverTeamInfoList_C.On_TeamList_Prepass_2");

	UObserverTeamInfoList_C_On_TeamList_Prepass_2_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ObserverTeamInfoList.ObserverTeamInfoList_C.CollapseAllSquadPlayerInfos
// (Public, BlueprintCallable, BlueprintEvent)

void UObserverTeamInfoList_C::CollapseAllSquadPlayerInfos()
{
	static auto fn = UObject::FindObject<UFunction>("Function ObserverTeamInfoList.ObserverTeamInfoList_C.CollapseAllSquadPlayerInfos");

	UObserverTeamInfoList_C_CollapseAllSquadPlayerInfos_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ObserverTeamInfoList.ObserverTeamInfoList_C.SetSquadPlayerInfo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class ATslCharacter*           TslCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// class USquadPlayerInfoWidget_C* SquadPlayerInfo                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UObserverTeamInfoList_C::SetSquadPlayerInfo(int Index, class ATslCharacter* TslCharacter, class USquadPlayerInfoWidget_C** SquadPlayerInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ObserverTeamInfoList.ObserverTeamInfoList_C.SetSquadPlayerInfo");

	UObserverTeamInfoList_C_SetSquadPlayerInfo_Params params;
	params.Index = Index;
	params.TslCharacter = TslCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SquadPlayerInfo != nullptr)
		*SquadPlayerInfo = params.SquadPlayerInfo;
}


// Function ObserverTeamInfoList.ObserverTeamInfoList_C.DestructSquadPlayerInfoPool
// (Public, BlueprintCallable, BlueprintEvent)

void UObserverTeamInfoList_C::DestructSquadPlayerInfoPool()
{
	static auto fn = UObject::FindObject<UFunction>("Function ObserverTeamInfoList.ObserverTeamInfoList_C.DestructSquadPlayerInfoPool");

	UObserverTeamInfoList_C_DestructSquadPlayerInfoPool_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ObserverTeamInfoList.ObserverTeamInfoList_C.ConstructSquadPlayerInfoPool
// (Public, BlueprintCallable, BlueprintEvent)

void UObserverTeamInfoList_C::ConstructSquadPlayerInfoPool()
{
	static auto fn = UObject::FindObject<UFunction>("Function ObserverTeamInfoList.ObserverTeamInfoList_C.ConstructSquadPlayerInfoPool");

	UObserverTeamInfoList_C_ConstructSquadPlayerInfoPool_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ObserverTeamInfoList.ObserverTeamInfoList_C.On_TeamList_Prepass_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UObserverTeamInfoList_C::On_TeamList_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ObserverTeamInfoList.ObserverTeamInfoList_C.On_TeamList_Prepass_1");

	UObserverTeamInfoList_C_On_TeamList_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ObserverTeamInfoList.ObserverTeamInfoList_C.IsSameTeam
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATslCharacter*           Character1                     (Parm, ZeroConstructor, IsPlainOldData)
// class ATslCharacter*           Character2                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           retVal                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UObserverTeamInfoList_C::IsSameTeam(class ATslCharacter* Character1, class ATslCharacter* Character2, bool* retVal)
{
	static auto fn = UObject::FindObject<UFunction>("Function ObserverTeamInfoList.ObserverTeamInfoList_C.IsSameTeam");

	UObserverTeamInfoList_C_IsSameTeam_Params params;
	params.Character1 = Character1;
	params.Character2 = Character2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (retVal != nullptr)
		*retVal = params.retVal;
}


// Function ObserverTeamInfoList.ObserverTeamInfoList_C.FindSpectateOrFollowCharacter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATslCharacter*           TslCharacter                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UObserverTeamInfoList_C::FindSpectateOrFollowCharacter(class ATslCharacter** TslCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function ObserverTeamInfoList.ObserverTeamInfoList_C.FindSpectateOrFollowCharacter");

	UObserverTeamInfoList_C_FindSpectateOrFollowCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TslCharacter != nullptr)
		*TslCharacter = params.TslCharacter;
}


// Function ObserverTeamInfoList.ObserverTeamInfoList_C.UpdateTeamList
// (Public, BlueprintCallable, BlueprintEvent)

void UObserverTeamInfoList_C::UpdateTeamList()
{
	static auto fn = UObject::FindObject<UFunction>("Function ObserverTeamInfoList.ObserverTeamInfoList_C.UpdateTeamList");

	UObserverTeamInfoList_C_UpdateTeamList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ObserverTeamInfoList.ObserverTeamInfoList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UObserverTeamInfoList_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ObserverTeamInfoList.ObserverTeamInfoList_C.Construct");

	UObserverTeamInfoList_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ObserverTeamInfoList.ObserverTeamInfoList_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UObserverTeamInfoList_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ObserverTeamInfoList.ObserverTeamInfoList_C.Tick");

	UObserverTeamInfoList_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ObserverTeamInfoList.ObserverTeamInfoList_C.CustomTick
// (BlueprintCallable, BlueprintEvent)

void UObserverTeamInfoList_C::CustomTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function ObserverTeamInfoList.ObserverTeamInfoList_C.CustomTick");

	UObserverTeamInfoList_C_CustomTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ObserverTeamInfoList.ObserverTeamInfoList_C.TimerCheckUpdateList
// (BlueprintCallable, BlueprintEvent)

void UObserverTeamInfoList_C::TimerCheckUpdateList()
{
	static auto fn = UObject::FindObject<UFunction>("Function ObserverTeamInfoList.ObserverTeamInfoList_C.TimerCheckUpdateList");

	UObserverTeamInfoList_C_TimerCheckUpdateList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ObserverTeamInfoList.ObserverTeamInfoList_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UObserverTeamInfoList_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ObserverTeamInfoList.ObserverTeamInfoList_C.Destruct");

	UObserverTeamInfoList_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ObserverTeamInfoList.ObserverTeamInfoList_C.ExecuteUbergraph_ObserverTeamInfoList
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UObserverTeamInfoList_C::ExecuteUbergraph_ObserverTeamInfoList(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ObserverTeamInfoList.ObserverTeamInfoList_C.ExecuteUbergraph_ObserverTeamInfoList");

	UObserverTeamInfoList_C_ExecuteUbergraph_ObserverTeamInfoList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
