#pragma once

// PLAYERUNKNOWN'S BATTLEGROUNDS (3.6.13.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TslLobby_cus.TslLobby_cus_C
// 0x0008 (0x03C0 - 0x03B8)
class ATslLobby_cus_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B8(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TslLobby_cus.TslLobby_cus_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_TslLobby_cus(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
