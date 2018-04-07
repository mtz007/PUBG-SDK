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

// Function HitNotifyWidget.HitNotifyWidget_C.GetBloodSpotWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBloodSpotWidget_C*      return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UHitNotifyWidget_C::GetBloodSpotWidget(class UBloodSpotWidget_C** return)
{
	static auto fn = UObject::FindObject<UFunction>("Function HitNotifyWidget.HitNotifyWidget_C.GetBloodSpotWidget");

	UHitNotifyWidget_C_GetBloodSpotWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (return != nullptr)
		*return = params.return;
}


// Function HitNotifyWidget.HitNotifyWidget_C.InitializeBloodSpotWidgets
// (Public, BlueprintCallable, BlueprintEvent)

void UHitNotifyWidget_C::InitializeBloodSpotWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function HitNotifyWidget.HitNotifyWidget_C.InitializeBloodSpotWidgets");

	UHitNotifyWidget_C_InitializeBloodSpotWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HitNotifyWidget.HitNotifyWidget_C.InitializeKoreanRating
// (Public, BlueprintCallable, BlueprintEvent)

void UHitNotifyWidget_C::InitializeKoreanRating()
{
	static auto fn = UObject::FindObject<UFunction>("Function HitNotifyWidget.HitNotifyWidget_C.InitializeKoreanRating");

	UHitNotifyWidget_C_InitializeKoreanRating_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HitNotifyWidget.HitNotifyWidget_C.InitializeChineseLicensing
// (Public, BlueprintCallable, BlueprintEvent)

void UHitNotifyWidget_C::InitializeChineseLicensing()
{
	static auto fn = UObject::FindObject<UFunction>("Function HitNotifyWidget.HitNotifyWidget_C.InitializeChineseLicensing");

	UHitNotifyWidget_C_InitializeChineseLicensing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HitNotifyWidget.HitNotifyWidget_C.DamagedPercentToDamage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          DamagedPercent                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UHitNotifyWidget_C::DamagedPercentToDamage(float DamagedPercent, float* Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function HitNotifyWidget.HitNotifyWidget_C.DamagedPercentToDamage");

	UHitNotifyWidget_C_DamagedPercentToDamage_Params params;
	params.DamagedPercent = DamagedPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Damage != nullptr)
		*Damage = params.Damage;
}


// Function HitNotifyWidget.HitNotifyWidget_C.GetPlayerHealthPercent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          HealthPercent                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UHitNotifyWidget_C::GetPlayerHealthPercent(float* HealthPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function HitNotifyWidget.HitNotifyWidget_C.GetPlayerHealthPercent");

	UHitNotifyWidget_C_GetPlayerHealthPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HealthPercent != nullptr)
		*HealthPercent = params.HealthPercent;
}


// Function HitNotifyWidget.HitNotifyWidget_C.PostAkEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEvent*           AkEvent                        (Parm, ZeroConstructor, IsPlainOldData)

void UHitNotifyWidget_C::PostAkEvent(class UAkAudioEvent* AkEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function HitNotifyWidget.HitNotifyWidget_C.PostAkEvent");

	UHitNotifyWidget_C_PostAkEvent_Params params;
	params.AkEvent = AkEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HitNotifyWidget.HitNotifyWidget_C.SetRTPCValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 RTPC                           (Parm, ZeroConstructor)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UHitNotifyWidget_C::SetRTPCValue(const struct FString& RTPC, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function HitNotifyWidget.HitNotifyWidget_C.SetRTPCValue");

	UHitNotifyWidget_C_SetRTPCValue_Params params;
	params.RTPC = RTPC;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HitNotifyWidget.HitNotifyWidget_C.DamagedPercentToDamagePercent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          DamagedPercent                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          DamagePercent                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UHitNotifyWidget_C::DamagedPercentToDamagePercent(float DamagedPercent, float* DamagePercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function HitNotifyWidget.HitNotifyWidget_C.DamagedPercentToDamagePercent");

	UHitNotifyWidget_C_DamagedPercentToDamagePercent_Params params;
	params.DamagedPercent = DamagedPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamagePercent != nullptr)
		*DamagePercent = params.DamagePercent;
}


// Function HitNotifyWidget.HitNotifyWidget_C.PlayHitNotifySound
// (Public, BlueprintCallable, BlueprintEvent)

void UHitNotifyWidget_C::PlayHitNotifySound()
{
	static auto fn = UObject::FindObject<UFunction>("Function HitNotifyWidget.HitNotifyWidget_C.PlayHitNotifySound");

	UHitNotifyWidget_C_PlayHitNotifySound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HitNotifyWidget.HitNotifyWidget_C.GetRandomScale
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector2D               Scale                          (Parm, OutParm, IsPlainOldData)

void UHitNotifyWidget_C::GetRandomScale(struct FVector2D* Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function HitNotifyWidget.HitNotifyWidget_C.GetRandomScale");

	UHitNotifyWidget_C_GetRandomScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Scale != nullptr)
		*Scale = params.Scale;
}


// Function HitNotifyWidget.HitNotifyWidget_C.GetRandomTranslation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector2D               Translation                    (Parm, OutParm, IsPlainOldData)

void UHitNotifyWidget_C::GetRandomTranslation(struct FVector2D* Translation)
{
	static auto fn = UObject::FindObject<UFunction>("Function HitNotifyWidget.HitNotifyWidget_C.GetRandomTranslation");

	UHitNotifyWidget_C_GetRandomTranslation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Translation != nullptr)
		*Translation = params.Translation;
}


// Function HitNotifyWidget.HitNotifyWidget_C.OnHitNotify
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DamagePercent                  (Parm, ZeroConstructor, IsPlainOldData)
// EDamageTypeCategory            DamageTypeCategory             (Parm, ZeroConstructor, IsPlainOldData)

void UHitNotifyWidget_C::OnHitNotify(float DamagePercent, EDamageTypeCategory DamageTypeCategory)
{
	static auto fn = UObject::FindObject<UFunction>("Function HitNotifyWidget.HitNotifyWidget_C.OnHitNotify");

	UHitNotifyWidget_C_OnHitNotify_Params params;
	params.DamagePercent = DamagePercent;
	params.DamageTypeCategory = DamageTypeCategory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HitNotifyWidget.HitNotifyWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHitNotifyWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HitNotifyWidget.HitNotifyWidget_C.Construct");

	UHitNotifyWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HitNotifyWidget.HitNotifyWidget_C.ExecuteUbergraph_HitNotifyWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UHitNotifyWidget_C::ExecuteUbergraph_HitNotifyWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HitNotifyWidget.HitNotifyWidget_C.ExecuteUbergraph_HitNotifyWidget");

	UHitNotifyWidget_C_ExecuteUbergraph_HitNotifyWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
