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

// Function BP_Sky_Sphere_Desert_02.BP_Sky_Sphere_Desert_02_C.UpdateSunDirection
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Sky_Sphere_Desert_02_C::UpdateSunDirection()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Sky_Sphere_Desert_02.BP_Sky_Sphere_Desert_02_C.UpdateSunDirection");

	ABP_Sky_Sphere_Desert_02_C_UpdateSunDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Sky_Sphere_Desert_02.BP_Sky_Sphere_Desert_02_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Sky_Sphere_Desert_02_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Sky_Sphere_Desert_02.BP_Sky_Sphere_Desert_02_C.UserConstructionScript");

	ABP_Sky_Sphere_Desert_02_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
