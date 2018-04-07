// PLAYERUNKNOWN'S BATTLEGROUNDS (3.7.27.27) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ToolTipGaugeWidget.ToolTipGaugeWidget_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          BeginGap                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          EndGap                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCompareMode                   (Parm, ZeroConstructor, IsPlainOldData)

void UToolTipGaugeWidget_C::Update(float BeginGap, float EndGap, bool bCompareMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function ToolTipGaugeWidget.ToolTipGaugeWidget_C.Update");

	UToolTipGaugeWidget_C_Update_Params params;
	params.BeginGap = BeginGap;
	params.EndGap = EndGap;
	params.bCompareMode = bCompareMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToolTipGaugeWidget.ToolTipGaugeWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UToolTipGaugeWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ToolTipGaugeWidget.ToolTipGaugeWidget_C.Construct");

	UToolTipGaugeWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToolTipGaugeWidget.ToolTipGaugeWidget_C.ExecuteUbergraph_ToolTipGaugeWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UToolTipGaugeWidget_C::ExecuteUbergraph_ToolTipGaugeWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ToolTipGaugeWidget.ToolTipGaugeWidget_C.ExecuteUbergraph_ToolTipGaugeWidget");

	UToolTipGaugeWidget_C_ExecuteUbergraph_ToolTipGaugeWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
