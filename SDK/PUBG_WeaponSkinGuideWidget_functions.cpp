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

// Function WeaponSkinGuideWidget.WeaponSkinGuideWidget_C.FadeIn
// (Public, BlueprintCallable, BlueprintEvent)

void UWeaponSkinGuideWidget_C::FadeIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSkinGuideWidget.WeaponSkinGuideWidget_C.FadeIn");

	UWeaponSkinGuideWidget_C_FadeIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSkinGuideWidget.WeaponSkinGuideWidget_C.ShowLine
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 LineWidget                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bShow                          (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponSkinGuideWidget_C::ShowLine(class UWidget* LineWidget, bool bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSkinGuideWidget.WeaponSkinGuideWidget_C.ShowLine");

	UWeaponSkinGuideWidget_C_ShowLine_Params params;
	params.LineWidget = LineWidget;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSkinGuideWidget.WeaponSkinGuideWidget_C.MouseLeave
// (Public, BlueprintCallable, BlueprintEvent)

void UWeaponSkinGuideWidget_C::MouseLeave()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSkinGuideWidget.WeaponSkinGuideWidget_C.MouseLeave");

	UWeaponSkinGuideWidget_C_MouseLeave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSkinGuideWidget.WeaponSkinGuideWidget_C.InitKeys
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ActionName                     (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponSkinGuideWidget_C::InitKeys(const struct FName& ActionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSkinGuideWidget.WeaponSkinGuideWidget_C.InitKeys");

	UWeaponSkinGuideWidget_C_InitKeys_Params params;
	params.ActionName = ActionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSkinGuideWidget.WeaponSkinGuideWidget_C.SelectNone
// (Public, BlueprintCallable, BlueprintEvent)

void UWeaponSkinGuideWidget_C::SelectNone()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSkinGuideWidget.WeaponSkinGuideWidget_C.SelectNone");

	UWeaponSkinGuideWidget_C_SelectNone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSkinGuideWidget.WeaponSkinGuideWidget_C.RefreshByItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class USlotInterface> Item                           (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponSkinGuideWidget_C::RefreshByItem(const TScriptInterface<class USlotInterface>& Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSkinGuideWidget.WeaponSkinGuideWidget_C.RefreshByItem");

	UWeaponSkinGuideWidget_C_RefreshByItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSkinGuideWidget.WeaponSkinGuideWidget_C.KeySetVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 KeyWidget                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bVisible                       (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponSkinGuideWidget_C::KeySetVisibility(class UWidget* KeyWidget, bool bVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSkinGuideWidget.WeaponSkinGuideWidget_C.KeySetVisibility");

	UWeaponSkinGuideWidget_C_KeySetVisibility_Params params;
	params.KeyWidget = KeyWidget;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSkinGuideWidget.WeaponSkinGuideWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWeaponSkinGuideWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSkinGuideWidget.WeaponSkinGuideWidget_C.Construct");

	UWeaponSkinGuideWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSkinGuideWidget.WeaponSkinGuideWidget_C.ExecuteUbergraph_WeaponSkinGuideWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponSkinGuideWidget_C::ExecuteUbergraph_WeaponSkinGuideWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSkinGuideWidget.WeaponSkinGuideWidget_C.ExecuteUbergraph_WeaponSkinGuideWidget");

	UWeaponSkinGuideWidget_C_ExecuteUbergraph_WeaponSkinGuideWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
