// PLAYERUNKNOWN'S BATTLEGROUNDS (3.5.5.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_StanceManagerWidget.BP_StanceManagerWidget_C.On_StanceManagerCanvas_Prepass_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UBP_StanceManagerWidget_C::On_StanceManagerCanvas_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StanceManagerWidget.BP_StanceManagerWidget_C.On_StanceManagerCanvas_Prepass_1");

	UBP_StanceManagerWidget_C_On_StanceManagerCanvas_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StanceManagerWidget.BP_StanceManagerWidget_C.SetStanceManagerShow
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_StanceManagerWidget_C::SetStanceManagerShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StanceManagerWidget.BP_StanceManagerWidget_C.SetStanceManagerShow");

	UBP_StanceManagerWidget_C_SetStanceManagerShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StanceManagerWidget.BP_StanceManagerWidget_C.SetStanceManagerHide
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_StanceManagerWidget_C::SetStanceManagerHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StanceManagerWidget.BP_StanceManagerWidget_C.SetStanceManagerHide");

	UBP_StanceManagerWidget_C_SetStanceManagerHide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StanceManagerWidget.BP_StanceManagerWidget_C.OnDriver
// (BlueprintCallable, BlueprintEvent)

void UBP_StanceManagerWidget_C::OnDriver()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StanceManagerWidget.BP_StanceManagerWidget_C.OnDriver");

	UBP_StanceManagerWidget_C_OnDriver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StanceManagerWidget.BP_StanceManagerWidget_C.OnRider
// (BlueprintCallable, BlueprintEvent)

void UBP_StanceManagerWidget_C::OnRider()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StanceManagerWidget.BP_StanceManagerWidget_C.OnRider");

	UBP_StanceManagerWidget_C_OnRider_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StanceManagerWidget.BP_StanceManagerWidget_C.ExecuteUbergraph_BP_StanceManagerWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_StanceManagerWidget_C::ExecuteUbergraph_BP_StanceManagerWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StanceManagerWidget.BP_StanceManagerWidget_C.ExecuteUbergraph_BP_StanceManagerWidget");

	UBP_StanceManagerWidget_C_ExecuteUbergraph_BP_StanceManagerWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
