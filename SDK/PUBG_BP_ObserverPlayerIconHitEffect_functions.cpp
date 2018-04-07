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

// Function BP_ObserverPlayerIconHitEffect.BP_ObserverPlayerIconHitEffect_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_ObserverPlayerIconHitEffect_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ObserverPlayerIconHitEffect.BP_ObserverPlayerIconHitEffect_C.Construct");

	UBP_ObserverPlayerIconHitEffect_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ObserverPlayerIconHitEffect.BP_ObserverPlayerIconHitEffect_C.ExecuteUbergraph_BP_ObserverPlayerIconHitEffect
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_ObserverPlayerIconHitEffect_C::ExecuteUbergraph_BP_ObserverPlayerIconHitEffect(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ObserverPlayerIconHitEffect.BP_ObserverPlayerIconHitEffect_C.ExecuteUbergraph_BP_ObserverPlayerIconHitEffect");

	UBP_ObserverPlayerIconHitEffect_C_ExecuteUbergraph_BP_ObserverPlayerIconHitEffect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
