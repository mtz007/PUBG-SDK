// PLAYERUNKNOWN'S BATTLEGROUNDS (3.6.10.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ReportPlayerWidget.ReportPlayerWidget_C.OnChangeCauser
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 SelectCauser                   (Parm, ZeroConstructor)

void UReportPlayerWidget_C::OnChangeCauser(const struct FString& SelectCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportPlayerWidget.ReportPlayerWidget_C.OnChangeCauser");

	UReportPlayerWidget_C_OnChangeCauser_Params params;
	params.SelectCauser = SelectCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReportPlayerWidget.ReportPlayerWidget_C.InitPlayerNameSetting
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESubjectToReport               Key                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UReportPlayerWidget_C::InitPlayerNameSetting(ESubjectToReport Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportPlayerWidget.ReportPlayerWidget_C.InitPlayerNameSetting");

	UReportPlayerWidget_C_InitPlayerNameSetting_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReportPlayerWidget.ReportPlayerWidget_C.InitComboboxSetting
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UReportPlayerWidget_C::InitComboboxSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportPlayerWidget.ReportPlayerWidget_C.InitComboboxSetting");

	UReportPlayerWidget_C_InitComboboxSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReportPlayerWidget.ReportPlayerWidget_C.InitSubjectToReport
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESubjectToReport               SubjectToReportType            (Parm, ZeroConstructor, IsPlainOldData)

void UReportPlayerWidget_C::InitSubjectToReport(ESubjectToReport SubjectToReportType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportPlayerWidget.ReportPlayerWidget_C.InitSubjectToReport");

	UReportPlayerWidget_C_InitSubjectToReport_Params params;
	params.SubjectToReportType = SubjectToReportType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReportPlayerWidget.ReportPlayerWidget_C.GetbIsEnabled_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UReportPlayerWidget_C::GetbIsEnabled_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportPlayerWidget.ReportPlayerWidget_C.GetbIsEnabled_1");

	UReportPlayerWidget_C_GetbIsEnabled_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ReportPlayerWidget.ReportPlayerWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UReportPlayerWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportPlayerWidget.ReportPlayerWidget_C.Construct");

	UReportPlayerWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReportPlayerWidget.ReportPlayerWidget_C.BndEvt__ReportCausesComboBox_K2Node_ComponentBoundEvent_59_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString                 SelectedItem                   (Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (Parm, ZeroConstructor, IsPlainOldData)

void UReportPlayerWidget_C::BndEvt__ReportCausesComboBox_K2Node_ComponentBoundEvent_59_OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportPlayerWidget.ReportPlayerWidget_C.BndEvt__ReportCausesComboBox_K2Node_ComponentBoundEvent_59_OnSelectionChangedEvent__DelegateSignature");

	UReportPlayerWidget_C_BndEvt__ReportCausesComboBox_K2Node_ComponentBoundEvent_59_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReportPlayerWidget.ReportPlayerWidget_C.BndEvt__ButtonClose_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UReportPlayerWidget_C::BndEvt__ButtonClose_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportPlayerWidget.ReportPlayerWidget_C.BndEvt__ButtonClose_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");

	UReportPlayerWidget_C_BndEvt__ButtonClose_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReportPlayerWidget.ReportPlayerWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UReportPlayerWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportPlayerWidget.ReportPlayerWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature");

	UReportPlayerWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReportPlayerWidget.ReportPlayerWidget_C.UpdateSubjectToReportType
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESubjectToReport               SubjectToReportType            (Parm, ZeroConstructor, IsPlainOldData)

void UReportPlayerWidget_C::UpdateSubjectToReportType(ESubjectToReport SubjectToReportType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportPlayerWidget.ReportPlayerWidget_C.UpdateSubjectToReportType");

	UReportPlayerWidget_C_UpdateSubjectToReportType_Params params;
	params.SubjectToReportType = SubjectToReportType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReportPlayerWidget.ReportPlayerWidget_C.ExecuteUbergraph_ReportPlayerWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UReportPlayerWidget_C::ExecuteUbergraph_ReportPlayerWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportPlayerWidget.ReportPlayerWidget_C.ExecuteUbergraph_ReportPlayerWidget");

	UReportPlayerWidget_C_ExecuteUbergraph_ReportPlayerWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
