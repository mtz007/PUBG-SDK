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

// WidgetBlueprintGeneratedClass DetailReportCauseManagerWidget.DetailReportCauseManagerWidget_C
// 0x0010 (0x0250 - 0x0240)
class UDetailReportCauseManagerWidget_C : public UUserWidget
{
public:
	class UVerticalBox*                                ListBorder;                                               // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  TextBlock_24;                                             // 0x0248(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DetailReportCauseManagerWidget.DetailReportCauseManagerWidget_C");
		return ptr;
	}


	void OnPrepass_1(class UWidget* BoundWidget);
	void GetSelectedDetailReportCauseList(TArray<EReportDetailCauseType>* DetailCauseTypes);
	void Clear();
	void CreateCheckBox(const struct FReportDetailCauseTypeDescription& DetailCauseData, class UDetailReportCauseCheckBoxWidget_C** ReportDetailCause);
	void UpdateDetailCause(EReportCause Cause);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
