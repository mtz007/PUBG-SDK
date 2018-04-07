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

// WidgetBlueprintGeneratedClass HudAlwaysOn.HudAlwaysOn_C
// 0x0052 (0x0292 - 0x0240)
class UHudAlwaysOn_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (Transient, DuplicateTransient)
	class ATslHUD*                                     refHUD;                                                   // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ATslCharacter*                               CachedCharacter;                                          // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FWidgetTransform                            CharacterInfoDownPos;                                     // 0x0258(0x001C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FWidgetTransform                            CharacterInfoUpPos;                                       // 0x0274(0x001C) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               IsFirstConstruct;                                         // 0x0290(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bObserverTeamList;                                        // 0x0291(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HudAlwaysOn.HudAlwaysOn_C");
		return ptr;
	}


	void OnPrepass_4(class UWidget* BoundWidget);
	void SetCharacterInfoDown();
	void SetCharacterInfoUp();
	void OnPrepass_3(class UWidget* BoundWidget);
	void UpdatePlayerHealth();
	void TeamInfoPrepass(class UWidget* BoundWidget);
	void On_ReportBotton_Prepass_1(class UWidget* BoundWidget);
	void OnPrepass_2(class UWidget* BoundWidget);
	void On_CharacterCanvas_Prepass_1(class UWidget* BoundWidget);
	ESlateVisibility GetVisibilityOnMatchState();
	void On_BlueZoneGpsWidget_RoundType_Prepass_1(class UWidget* BoundWidget);
	void OnPrepass_1(class UWidget* BoundWidget);
	void Construct();
	void ExecuteUbergraph_HudAlwaysOn(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
