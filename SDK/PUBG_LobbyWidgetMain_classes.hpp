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

// WidgetBlueprintGeneratedClass LobbyWidgetMain.LobbyWidgetMain_C
// 0x0010 (0x0250 - 0x0240)
class ULobbyWidgetMain_C : public ULobbyWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (Transient, DuplicateTransient)
	class UTslCoherentWidget*                          WebWidget;                                                // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LobbyWidgetMain.LobbyWidgetMain_C");
		return ptr;
	}


	void SendGameStateChangingToWeb(const struct FName& InName, const struct FName& InName2);
	void GameStateChanging(struct FName* NewState, struct FName* OldState);
	void ExecuteUbergraph_LobbyWidgetMain(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
