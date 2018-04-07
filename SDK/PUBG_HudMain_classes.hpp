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

// WidgetBlueprintGeneratedClass HudMain.HudMain_C
// 0x00B4 (0x03AC - 0x02F8)
class UHudMain_C : public UHudMainBaseWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02F8(0x0008) (Transient, DuplicateTransient)
	class UCanvasPanel*                                HideOnObserverSpectating;                                 // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    ButtonClickedDispatcher;                                  // 0x0308(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UHitNotifyWidget_C*                          HitNotify;                                                // 0x0318(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FColorBlindColorSet                         ColorBlindColorSet_SpetatingName;                         // 0x0320(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                                ReplayGetTimeHandler;                                     // 0x0330(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FWidgetTransform                            ObserverSpectatingDownPos;                                // 0x0338(0x001C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FWidgetTransform                            ObserverSpectatingUpPos;                                  // 0x0354(0x001C) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              LastOptionToggleTime;                                     // 0x0370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0374(0x0004) MISSED OFFSET
	struct FHudUiConfig                                BattleList_Config;                                        // 0x0378(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              SholderPressedTime;                                       // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HudMain.HudMain_C");
		return ptr;
	}


	void OnKey_EmoteWheelReleased();
	void OnKey_EmoteWheelPressed();
	bool OnInit_Delegate(class ATslBaseHUD** TslBaseHUD);
	bool OnInit_Replay(class ATslBaseHUD** TslBaseHUD);
	bool OnInit_Input(class ATslBaseHUD** TslBaseHUD);
	bool OnInit_Widget(class ATslBaseHUD** TslBaseHUD);
	struct FEventReply OnMouseMove(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent);
	void SetObserverSpectatingUp();
	void SetObserverSpectatingDown();
	void ShouldShowReplayMenu(bool* bShow);
	void BindEventForShowReplayTimeline();
	void ShowReplayTimeLine(bool bShow);
	void SetHUDForIngameReplayMenu();
	void BindEventForMapClosing();
	void OnKey_ReplayMenuOrEscape();
	void InitForReplay();
	void OnToggleOption();
	void UpdateReplayTimeline();
	void OnToggleBattleList();
	void OnMapHide();
	void OnMapShow();
	void OnKey_MapReleased();
	void OnKey_MapPressed();
	void OnShowCarePackageItemList();
	void IsShowMapOrInventory(bool* bIsShow);
	void OnTogglePlayerList();
	void IsCharacterAlive(bool* IsAlive);
	void OnNitifyHit(float DamagePercent, EDamageTypeCategory DamageTypeCategory);
	void OnKey_SystemMenuOrEscape();
	void OnToggleMap();
	void OnPossessPawnChange();
	void CreateCheckReplayTimer();
	void CheckReplayTimer();
	void HideMapForReplay();
	void Construct();
	void ExecuteUbergraph_HudMain(int EntryPoint);
	void ButtonClickedDispatcher__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
