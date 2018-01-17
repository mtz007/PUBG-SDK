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

// Function BattleListWidget.BattleListWidget_C.SetBattleListSubTitle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 SubTitle                       (Parm, ZeroConstructor)

void UBattleListWidget_C::SetBattleListSubTitle(int Index, const struct FString& SubTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleListWidget.BattleListWidget_C.SetBattleListSubTitle");

	UBattleListWidget_C_SetBattleListSubTitle_Params params;
	params.Index = Index;
	params.SubTitle = SubTitle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleListWidget.BattleListWidget_C.ClearBattleList
// (Public, BlueprintCallable, BlueprintEvent)

void UBattleListWidget_C::ClearBattleList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleListWidget.BattleListWidget_C.ClearBattleList");

	UBattleListWidget_C_ClearBattleList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleListWidget.BattleListWidget_C.CollapseAllPlayerInfos
// (Public, BlueprintCallable, BlueprintEvent)

void UBattleListWidget_C::CollapseAllPlayerInfos()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleListWidget.BattleListWidget_C.CollapseAllPlayerInfos");

	UBattleListWidget_C_CollapseAllPlayerInfos_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleListWidget.BattleListWidget_C.SetPlayerInfo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATslCharacter*           TslCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// class UPlayerInfoWidget_C*     PlayerInfo                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBattleListWidget_C::SetPlayerInfo(class ATslCharacter* TslCharacter, class UPlayerInfoWidget_C** PlayerInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleListWidget.BattleListWidget_C.SetPlayerInfo");

	UBattleListWidget_C_SetPlayerInfo_Params params;
	params.TslCharacter = TslCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerInfo != nullptr)
		*PlayerInfo = params.PlayerInfo;
}


// Function BattleListWidget.BattleListWidget_C.DestructPlayerInfoPool
// (Public, BlueprintCallable, BlueprintEvent)

void UBattleListWidget_C::DestructPlayerInfoPool()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleListWidget.BattleListWidget_C.DestructPlayerInfoPool");

	UBattleListWidget_C_DestructPlayerInfoPool_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleListWidget.BattleListWidget_C.ConstructPlayerInfoPool
// (Public, BlueprintCallable, BlueprintEvent)

void UBattleListWidget_C::ConstructPlayerInfoPool()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleListWidget.BattleListWidget_C.ConstructPlayerInfoPool");

	UBattleListWidget_C_ConstructPlayerInfoPool_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleListWidget.BattleListWidget_C.FindCharacterByShortcutNum
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ShortcutNum                    (Parm, ZeroConstructor, IsPlainOldData)
// class ATslCharacter*           Character                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBattleListWidget_C::FindCharacterByShortcutNum(int ShortcutNum, class ATslCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleListWidget.BattleListWidget_C.FindCharacterByShortcutNum");

	UBattleListWidget_C_FindCharacterByShortcutNum_Params params;
	params.ShortcutNum = ShortcutNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Character != nullptr)
		*Character = params.Character;
}


// Function BattleListWidget.BattleListWidget_C.AddSubTitle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 SubTitle                       (Parm, ZeroConstructor)

void UBattleListWidget_C::AddSubTitle(const struct FString& SubTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleListWidget.BattleListWidget_C.AddSubTitle");

	UBattleListWidget_C_AddSubTitle_Params params;
	params.SubTitle = SubTitle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleListWidget.BattleListWidget_C.IsSameTeam
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATslCharacter*           Character1                     (Parm, ZeroConstructor, IsPlainOldData)
// class ATslCharacter*           Character2                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           retVal                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBattleListWidget_C::IsSameTeam(class ATslCharacter* Character1, class ATslCharacter* Character2, bool* retVal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleListWidget.BattleListWidget_C.IsSameTeam");

	UBattleListWidget_C_IsSameTeam_Params params;
	params.Character1 = Character1;
	params.Character2 = Character2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (retVal != nullptr)
		*retVal = params.retVal;
}


// Function BattleListWidget.BattleListWidget_C.SetNearbyPlayerIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UBattleListWidget_C::SetNearbyPlayerIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleListWidget.BattleListWidget_C.SetNearbyPlayerIndex");

	UBattleListWidget_C_SetNearbyPlayerIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleListWidget.BattleListWidget_C.BattleListSetCharacter10
// (Public, BlueprintCallable, BlueprintEvent)

void UBattleListWidget_C::BattleListSetCharacter10()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleListWidget.BattleListWidget_C.BattleListSetCharacter10");

	UBattleListWidget_C_BattleListSetCharacter10_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleListWidget.BattleListWidget_C.BattleListSetCharacter9
// (Public, BlueprintCallable, BlueprintEvent)

void UBattleListWidget_C::BattleListSetCharacter9()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleListWidget.BattleListWidget_C.BattleListSetCharacter9");

	UBattleListWidget_C_BattleListSetCharacter9_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleListWidget.BattleListWidget_C.BattleListSetCharacter8
// (Public, BlueprintCallable, BlueprintEvent)

void UBattleListWidget_C::BattleListSetCharacter8()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleListWidget.BattleListWidget_C.BattleListSetCharacter8");

	UBattleListWidget_C_BattleListSetCharacter8_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleListWidget.BattleListWidget_C.BattleListSetCharacter7
// (Public, BlueprintCallable, BlueprintEvent)

void UBattleListWidget_C::BattleListSetCharacter7()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleListWidget.BattleListWidget_C.BattleListSetCharacter7");

	UBattleListWidget_C_BattleListSetCharacter7_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleListWidget.BattleListWidget_C.BattleListSetCharacter6
// (Public, BlueprintCallable, BlueprintEvent)

void UBattleListWidget_C::BattleListSetCharacter6()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleListWidget.BattleListWidget_C.BattleListSetCharacter6");

	UBattleListWidget_C_BattleListSetCharacter6_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleListWidget.BattleListWidget_C.BattleListSetCharacter5
// (Public, BlueprintCallable, BlueprintEvent)

void UBattleListWidget_C::BattleListSetCharacter5()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleListWidget.BattleListWidget_C.BattleListSetCharacter5");

	UBattleListWidget_C_BattleListSetCharacter5_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleListWidget.BattleListWidget_C.BattleListSetCharacter4
// (Public, BlueprintCallable, BlueprintEvent)

void UBattleListWidget_C::BattleListSetCharacter4()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleListWidget.BattleListWidget_C.BattleListSetCharacter4");

	UBattleListWidget_C_BattleListSetCharacter4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleListWidget.BattleListWidget_C.BattleListSetCharacter3
// (Public, BlueprintCallable, BlueprintEvent)

void UBattleListWidget_C::BattleListSetCharacter3()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleListWidget.BattleListWidget_C.BattleListSetCharacter3");

	UBattleListWidget_C_BattleListSetCharacter3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleListWidget.BattleListWidget_C.BattleListSetCharacter2
// (Public, BlueprintCallable, BlueprintEvent)

void UBattleListWidget_C::BattleListSetCharacter2()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleListWidget.BattleListWidget_C.BattleListSetCharacter2");

	UBattleListWidget_C_BattleListSetCharacter2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleListWidget.BattleListWidget_C.BattleListSetCharacter1
// (Public, BlueprintCallable, BlueprintEvent)

void UBattleListWidget_C::BattleListSetCharacter1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleListWidget.BattleListWidget_C.BattleListSetCharacter1");

	UBattleListWidget_C_BattleListSetCharacter1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleListWidget.BattleListWidget_C.BindKeyBattleList
// (Public, BlueprintCallable, BlueprintEvent)

void UBattleListWidget_C::BindKeyBattleList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleListWidget.BattleListWidget_C.BindKeyBattleList");

	UBattleListWidget_C_BindKeyBattleList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleListWidget.BattleListWidget_C.UpdateEngagedEnemiesList
// (Public, BlueprintCallable, BlueprintEvent)

void UBattleListWidget_C::UpdateEngagedEnemiesList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleListWidget.BattleListWidget_C.UpdateEngagedEnemiesList");

	UBattleListWidget_C_UpdateEngagedEnemiesList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleListWidget.BattleListWidget_C.FindSpectateOrFollowCharacter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATslCharacter*           TslCharacter                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBattleListWidget_C::FindSpectateOrFollowCharacter(class ATslCharacter** TslCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleListWidget.BattleListWidget_C.FindSpectateOrFollowCharacter");

	UBattleListWidget_C_FindSpectateOrFollowCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TslCharacter != nullptr)
		*TslCharacter = params.TslCharacter;
}


// Function BattleListWidget.BattleListWidget_C.UpdateNearbyPlayersList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBattleListWidget_C::UpdateNearbyPlayersList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleListWidget.BattleListWidget_C.UpdateNearbyPlayersList");

	UBattleListWidget_C_UpdateNearbyPlayersList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleListWidget.BattleListWidget_C.FindCharacterByPlayerState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*            PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)
// class ATslCharacter*           Character                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBattleListWidget_C::FindCharacterByPlayerState(class APlayerState* PlayerState, class ATslCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleListWidget.BattleListWidget_C.FindCharacterByPlayerState");

	UBattleListWidget_C_FindCharacterByPlayerState_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Character != nullptr)
		*Character = params.Character;
}


// Function BattleListWidget.BattleListWidget_C.UpdateOtherEngagementsList
// (Public, BlueprintCallable, BlueprintEvent)

void UBattleListWidget_C::UpdateOtherEngagementsList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleListWidget.BattleListWidget_C.UpdateOtherEngagementsList");

	UBattleListWidget_C_UpdateOtherEngagementsList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleListWidget.BattleListWidget_C.RefreshPlayerList
// (Public, BlueprintCallable, BlueprintEvent)

void UBattleListWidget_C::RefreshPlayerList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleListWidget.BattleListWidget_C.RefreshPlayerList");

	UBattleListWidget_C_RefreshPlayerList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleListWidget.BattleListWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBattleListWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleListWidget.BattleListWidget_C.Construct");

	UBattleListWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleListWidget.BattleListWidget_C.CustomTick
// (BlueprintCallable, BlueprintEvent)

void UBattleListWidget_C::CustomTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleListWidget.BattleListWidget_C.CustomTick");

	UBattleListWidget_C_CustomTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleListWidget.BattleListWidget_C.TimerCheckUpdateList
// (BlueprintCallable, BlueprintEvent)

void UBattleListWidget_C::TimerCheckUpdateList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleListWidget.BattleListWidget_C.TimerCheckUpdateList");

	UBattleListWidget_C_TimerCheckUpdateList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleListWidget.BattleListWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBattleListWidget_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleListWidget.BattleListWidget_C.Destruct");

	UBattleListWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleListWidget.BattleListWidget_C.ExecuteUbergraph_BattleListWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBattleListWidget_C::ExecuteUbergraph_BattleListWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleListWidget.BattleListWidget_C.ExecuteUbergraph_BattleListWidget");

	UBattleListWidget_C_ExecuteUbergraph_BattleListWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
