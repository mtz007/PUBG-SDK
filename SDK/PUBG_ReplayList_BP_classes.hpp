#pragma once

// PLAYERUNKNOWN'S BATTLEGROUNDS (3.7.27.27) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ReplayList_BP.ReplayList_BP_C
// 0x0070 (0x0430 - 0x03C0)
class AReplayList_BP_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C0(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTslGameInstance*                            TslGameInstance;                                          // 0x03D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UUiReplayList_C*                             UiReplayList;                                             // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     IsLive;                                                   // 0x03E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FText                                       NewVar_1;                                                 // 0x03F0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FString                                     RegionOrLocal;                                            // 0x0408(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                PageSize;                                                 // 0x0418(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PageCount;                                                // 0x041C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              prev_Percent;                                             // 0x0420(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0424(0x0004) MISSED OFFSET
	class UWidget*                                     CurrentItemWidget;                                        // 0x0428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ReplayList_BP.ReplayList_BP_C");
		return ptr;
	}


	void OnUpdateItem(const struct FReplayItem& inReplayItem);
	void UpdateReplayList(const struct FString& inRegionOrLocal);
	void CheckReplayBusyStatus(bool* bIsReplayBusy);
	void OnGoPageBtn();
	void OnNextPageBtn();
	void OnPrevPageBtn();
	void ClearReplayList();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void CreateReplayListEvent();
	void PrevPageEvent();
	void NextPageEvent();
	void GoPageEvent();
	void OnItemClicked(const struct FString& RegionOrLocal, const struct FReplayItem& inReplayItem);
	void ExecuteUbergraph_ReplayList_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
