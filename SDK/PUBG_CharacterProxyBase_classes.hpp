#pragma once

// PLAYERUNKNOWN'S BATTLEGROUNDS (3.6.4.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CharacterProxyBase.CharacterProxyBase_C
// 0x0030 (0x0840 - 0x0810)
class ACharacterProxyBase_C : public ATslCharacterProxy
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0810(0x0008) (Transient, DuplicateTransient)
	class UTslAccessoryComponent*                      Slot_Thrown;                                              // 0x0818(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTslAccessoryComponent*                      slot_melee;                                               // 0x0820(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTslAccessoryComponent*                      slot_sidearm;                                             // 0x0828(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTslAccessoryComponent*                      slot_secondary;                                           // 0x0830(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTslAccessoryComponent*                      slot_primary;                                             // 0x0838(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CharacterProxyBase.CharacterProxyBase_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_CharacterProxyBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
