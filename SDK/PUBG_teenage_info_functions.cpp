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

// Function teenage_info.teenage_info_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uteenage_info_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function teenage_info.teenage_info_C.Construct");

	Uteenage_info_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function teenage_info.teenage_info_C.OnFinished
// (BlueprintCallable, BlueprintEvent)

void Uteenage_info_C::OnFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function teenage_info.teenage_info_C.OnFinished");

	Uteenage_info_C_OnFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function teenage_info.teenage_info_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uteenage_info_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function teenage_info.teenage_info_C.Destruct");

	Uteenage_info_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function teenage_info.teenage_info_C.ExecuteUbergraph_teenage_info
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void Uteenage_info_C::ExecuteUbergraph_teenage_info(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function teenage_info.teenage_info_C.ExecuteUbergraph_teenage_info");

	Uteenage_info_C_ExecuteUbergraph_teenage_info_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
