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

// Function ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.GetItemDetailedName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UEquipableItem*          NewParam                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Name                           (Parm, OutParm)

void UItemToolTipWidgetv3_C::GetItemDetailedName(class UEquipableItem* NewParam, struct FText* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.GetItemDetailedName");

	UItemToolTipWidgetv3_C_GetItemDetailedName_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;
}


// Function ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.On_MagazineIcon_Prepass_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UItemToolTipWidgetv3_C::On_MagazineIcon_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.On_MagazineIcon_Prepass_1");

	UItemToolTipWidgetv3_C_On_MagazineIcon_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.GetFiringRate
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ATslWeapon_Trajectory*   ShooterWeapon_Trajectory       (Parm, ZeroConstructor, IsPlainOldData)
// int                            AmmoClip                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          FullReloadingTime              (Parm, ZeroConstructor, IsPlainOldData)
// float                          FringRate                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemToolTipWidgetv3_C::GetFiringRate(class ATslWeapon_Trajectory* ShooterWeapon_Trajectory, int AmmoClip, float FullReloadingTime, float* FringRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.GetFiringRate");

	UItemToolTipWidgetv3_C_GetFiringRate_Params params;
	params.ShooterWeapon_Trajectory = ShooterWeapon_Trajectory;
	params.AmmoClip = AmmoClip;
	params.FullReloadingTime = FullReloadingTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FringRate != nullptr)
		*FringRate = params.FringRate;
}


// Function ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.GetShooterWeapon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UEquipableItem*          EquipableItem                  (Parm, ZeroConstructor, IsPlainOldData)
// class ATslWeapon*              ShooterWeapon                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class ATslWeapon_Trajectory*   ShooterWeapon_Trajectory       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemToolTipWidgetv3_C::GetShooterWeapon(class UEquipableItem* EquipableItem, class ATslWeapon** ShooterWeapon, class ATslWeapon_Trajectory** ShooterWeapon_Trajectory)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.GetShooterWeapon");

	UItemToolTipWidgetv3_C_GetShooterWeapon_Params params;
	params.EquipableItem = EquipableItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShooterWeapon != nullptr)
		*ShooterWeapon = params.ShooterWeapon;
	if (ShooterWeapon_Trajectory != nullptr)
		*ShooterWeapon_Trajectory = params.ShooterWeapon_Trajectory;
}


// Function ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.Clear
// (Public, BlueprintCallable, BlueprintEvent)

void UItemToolTipWidgetv3_C::Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.Clear");

	UItemToolTipWidgetv3_C_Clear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.GetAttachedAmmo
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWeaponItem*             WeaponItem                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            AmmoClip                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemToolTipWidgetv3_C::GetAttachedAmmo(class UWeaponItem* WeaponItem, int* AmmoClip)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.GetAttachedAmmo");

	UItemToolTipWidgetv3_C_GetAttachedAmmo_Params params;
	params.WeaponItem = WeaponItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AmmoClip != nullptr)
		*AmmoClip = params.AmmoClip;
}


// Function ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.GetAmmo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWeaponItem*             WeaponItem                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            AmmoClip                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemToolTipWidgetv3_C::GetAmmo(class UWeaponItem* WeaponItem, int* AmmoClip)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.GetAmmo");

	UItemToolTipWidgetv3_C_GetAmmo_Params params;
	params.WeaponItem = WeaponItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AmmoClip != nullptr)
		*AmmoClip = params.AmmoClip;
}


// Function ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.GetAttachedStability
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ATslWeapon_Trajectory*   ShooterWeapon_Trajectory       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Accuracy                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemToolTipWidgetv3_C::GetAttachedStability(class ATslWeapon_Trajectory* ShooterWeapon_Trajectory, float* Accuracy)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.GetAttachedStability");

	UItemToolTipWidgetv3_C_GetAttachedStability_Params params;
	params.ShooterWeapon_Trajectory = ShooterWeapon_Trajectory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Accuracy != nullptr)
		*Accuracy = params.Accuracy;
}


// Function ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.GetStability
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ATslWeapon_Trajectory*   ShooterWeapon_Trajectory       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Accuracy                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemToolTipWidgetv3_C::GetStability(class ATslWeapon_Trajectory* ShooterWeapon_Trajectory, float* Accuracy)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.GetStability");

	UItemToolTipWidgetv3_C_GetStability_Params params;
	params.ShooterWeapon_Trajectory = ShooterWeapon_Trajectory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Accuracy != nullptr)
		*Accuracy = params.Accuracy;
}


// Function ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.GetWeaponEffectiveRange
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ATslWeapon_Trajectory*   ShooterWeapon_Trajectory       (Parm, ZeroConstructor, IsPlainOldData)
// float                          EffectRange                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemToolTipWidgetv3_C::GetWeaponEffectiveRange(class ATslWeapon_Trajectory* ShooterWeapon_Trajectory, float* EffectRange)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.GetWeaponEffectiveRange");

	UItemToolTipWidgetv3_C_GetWeaponEffectiveRange_Params params;
	params.ShooterWeapon_Trajectory = ShooterWeapon_Trajectory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EffectRange != nullptr)
		*EffectRange = params.EffectRange;
}


// Function ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.GetWeaponPower
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ATslWeapon*              ShooterWeapon                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemToolTipWidgetv3_C::GetWeaponPower(class ATslWeapon* ShooterWeapon, float* Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.GetWeaponPower");

	UItemToolTipWidgetv3_C_GetWeaponPower_Params params;
	params.ShooterWeapon = ShooterWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Damage != nullptr)
		*Damage = params.Damage;
}


// Function ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.FadeIn
// (Public, BlueprintCallable, BlueprintEvent)

void UItemToolTipWidgetv3_C::FadeIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.FadeIn");

	UItemToolTipWidgetv3_C_FadeIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.UpdateDefaultInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class USlotInterface> Item                           (Parm, ZeroConstructor, IsPlainOldData)

void UItemToolTipWidgetv3_C::UpdateDefaultInfo(const TScriptInterface<class USlotInterface>& Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.UpdateDefaultInfo");

	UItemToolTipWidgetv3_C_UpdateDefaultInfo_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.SetItemByInterface
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class USlotInterface> Item                           (Parm, ZeroConstructor, IsPlainOldData)

void UItemToolTipWidgetv3_C::SetItemByInterface(const TScriptInterface<class USlotInterface>& Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.SetItemByInterface");

	UItemToolTipWidgetv3_C_SetItemByInterface_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.UpdateItemDetailInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItem*                   Item                           (Parm, ZeroConstructor, IsPlainOldData)

void UItemToolTipWidgetv3_C::UpdateItemDetailInfo(class UItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.UpdateItemDetailInfo");

	UItemToolTipWidgetv3_C_UpdateItemDetailInfo_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemToolTipWidgetv3_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.Construct");

	UItemToolTipWidgetv3_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.UpdateSlotInfo
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TScriptInterface<class USlotInterface>* SlotInterface                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UItemToolTipWidgetv3_C::UpdateSlotInfo(TScriptInterface<class USlotInterface>* SlotInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.UpdateSlotInfo");

	UItemToolTipWidgetv3_C_UpdateSlotInfo_Params params;
	params.SlotInterface = SlotInterface;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.SetToolTipOn
// (BlueprintCallable, BlueprintEvent)

void UItemToolTipWidgetv3_C::SetToolTipOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.SetToolTipOn");

	UItemToolTipWidgetv3_C_SetToolTipOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.SetToolTipOff
// (BlueprintCallable, BlueprintEvent)

void UItemToolTipWidgetv3_C::SetToolTipOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.SetToolTipOff");

	UItemToolTipWidgetv3_C_SetToolTipOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.StartFadeIn
// (BlueprintCallable, BlueprintEvent)

void UItemToolTipWidgetv3_C::StartFadeIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.StartFadeIn");

	UItemToolTipWidgetv3_C_StartFadeIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.ExecuteUbergraph_ItemToolTipWidgetv3
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UItemToolTipWidgetv3_C::ExecuteUbergraph_ItemToolTipWidgetv3(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.ExecuteUbergraph_ItemToolTipWidgetv3");

	UItemToolTipWidgetv3_C_ExecuteUbergraph_ItemToolTipWidgetv3_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
