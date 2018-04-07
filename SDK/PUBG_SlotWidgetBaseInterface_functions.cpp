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

// Function SlotWidgetBaseInterface.SlotWidgetBaseInterface_C.GetSlotContainer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class USlotContainerInterface> SlotContainer                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USlotWidgetBaseInterface_C::GetSlotContainer(TScriptInterface<class USlotContainerInterface>* SlotContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function SlotWidgetBaseInterface.SlotWidgetBaseInterface_C.GetSlotContainer");

	USlotWidgetBaseInterface_C_GetSlotContainer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SlotContainer != nullptr)
		*SlotContainer = params.SlotContainer;
}


// Function SlotWidgetBaseInterface.SlotWidgetBaseInterface_C.GetSlotItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class USlotInterface> SlotItem                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USlotWidgetBaseInterface_C::GetSlotItem(TScriptInterface<class USlotInterface>* SlotItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function SlotWidgetBaseInterface.SlotWidgetBaseInterface_C.GetSlotItem");

	USlotWidgetBaseInterface_C_GetSlotItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SlotItem != nullptr)
		*SlotItem = params.SlotItem;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
