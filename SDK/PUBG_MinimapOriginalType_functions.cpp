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

// Function MinimapOriginalType.MinimapOriginalType_C.OnPrepass_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UMinimapOriginalType_C::OnPrepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapOriginalType.MinimapOriginalType_C.OnPrepass_1");

	UMinimapOriginalType_C_OnPrepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapOriginalType.MinimapOriginalType_C.OnPrepassMain
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UMinimapOriginalType_C::OnPrepassMain(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapOriginalType.MinimapOriginalType_C.OnPrepassMain");

	UMinimapOriginalType_C_OnPrepassMain_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
