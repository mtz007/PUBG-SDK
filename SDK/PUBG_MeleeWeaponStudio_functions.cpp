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

// Function MeleeWeaponStudio.MeleeWeaponStudio_C.OnLoaded
// (Public, BlueprintCallable, BlueprintEvent)

void AMeleeWeaponStudio_C::OnLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponStudio.MeleeWeaponStudio_C.OnLoaded");

	AMeleeWeaponStudio_C_OnLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeleeWeaponStudio.MeleeWeaponStudio_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMeleeWeaponStudio_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponStudio.MeleeWeaponStudio_C.UserConstructionScript");

	AMeleeWeaponStudio_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeleeWeaponStudio.MeleeWeaponStudio_C.SetItem
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItem**                  Item                           (Parm, ZeroConstructor, IsPlainOldData)

void AMeleeWeaponStudio_C::SetItem(class UItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponStudio.MeleeWeaponStudio_C.SetItem");

	AMeleeWeaponStudio_C_SetItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeleeWeaponStudio.MeleeWeaponStudio_C.ExecuteUbergraph_MeleeWeaponStudio
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMeleeWeaponStudio_C::ExecuteUbergraph_MeleeWeaponStudio(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponStudio.MeleeWeaponStudio_C.ExecuteUbergraph_MeleeWeaponStudio");

	AMeleeWeaponStudio_C_ExecuteUbergraph_MeleeWeaponStudio_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
