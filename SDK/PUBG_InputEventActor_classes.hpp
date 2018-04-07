#pragma once

// PLAYERUNKNOWN'S BATTLEGROUNDS (3.7.27.27) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass InputEventActor.InputEventActor_C
// 0x0020 (0x03E0 - 0x03C0)
class AInputEventActor_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C0(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnInputAction;                                            // 0x03D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass InputEventActor.InputEventActor_C");
		return ptr;
	}


	void ProcessEnableInput(class APlayerController* OwningPlayer);
	void UserConstructionScript();
	void InpActEvt_AnyKey_K2Node_InputKeyEvent_4(const struct FKey& Key);
	void InpActEvt_AnyKey_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void ExecuteUbergraph_InputEventActor(int EntryPoint);
	void OnInputAction__DelegateSignature(bool bPressed, const struct FKey& Key);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
