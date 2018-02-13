#pragma once

// PLAYERUNKNOWN'S BATTLEGROUNDS (3.6.10.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass CountDownWidget.CountDownWidget_C
// 0x0018 (0x0258 - 0x0240)
class UCountDownWidget_C : public UUserWidget
{
public:
	class UVerticalBox*                                CountDownBlock;                                           // 0x0240(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  CountDownText;                                            // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class ATslGameState*                               TslGameState;                                             // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CountDownWidget.CountDownWidget_C");
		return ptr;
	}


	void GetTslGameState(class ATslGameState** GameState);
	void On_CountDownBlock_Prepass_1(class UWidget* BoundWidget);
	void On_CountDownText_Prepass_1(class UWidget* BoundWidget);
	ESlateVisibility Get_CountDownText_Visibility_1();
	struct FText Get_CountDownText_Text_1();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
