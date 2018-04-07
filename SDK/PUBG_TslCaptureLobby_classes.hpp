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

// BlueprintGeneratedClass TslCaptureLobby.TslCaptureLobby_C
// 0x0086 (0x0456 - 0x03D0)
class ATslCaptureLobby_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (Transient, DuplicateTransient)
	class ALobbyViewMode_C*                            ViewModeStudio;                                           // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ATslWeapon*                                  TslWeapon;                                                // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x03E8(0x0008) MISSED OFFSET
	struct FTransform                                  UiCameraTM;                                               // 0x03F0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  ViewModeTM;                                               // 0x0420(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLeft;                                                    // 0x0450(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Bright;                                                   // 0x0451(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUp;                                                      // 0x0452(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDown;                                                    // 0x0453(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AddView;                                                  // 0x0454(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MinusView;                                                // 0x0455(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TslCaptureLobby.TslCaptureLobby_C");
		return ptr;
	}


	void InpActEvt_Backslash_K2Node_InputKeyEvent_26(const struct FKey& Key);
	void InpActEvt_Left_K2Node_InputKeyEvent_25(const struct FKey& Key);
	void InpActEvt_Left_K2Node_InputKeyEvent_24(const struct FKey& Key);
	void InpActEvt_Right_K2Node_InputKeyEvent_23(const struct FKey& Key);
	void InpActEvt_Right_K2Node_InputKeyEvent_22(const struct FKey& Key);
	void InpActEvt_Up_K2Node_InputKeyEvent_21(const struct FKey& Key);
	void InpActEvt_Up_K2Node_InputKeyEvent_20(const struct FKey& Key);
	void InpActEvt_Down_K2Node_InputKeyEvent_19(const struct FKey& Key);
	void InpActEvt_Down_K2Node_InputKeyEvent_18(const struct FKey& Key);
	void InpActEvt_LeftBracket_K2Node_InputKeyEvent_17(const struct FKey& Key);
	void InpActEvt_LeftBracket_K2Node_InputKeyEvent_16(const struct FKey& Key);
	void InpActEvt_RightBracket_K2Node_InputKeyEvent_15(const struct FKey& Key);
	void InpActEvt_RightBracket_K2Node_InputKeyEvent_14(const struct FKey& Key);
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_TslCaptureLobby(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
