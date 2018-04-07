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

// BlueprintGeneratedClass TslLobby_ver_3.TslLobby_ver_C
// 0x0010 (0x03F0 - 0x03E0)
class ATslLobby_ver_C : public ATslLobbyLevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E0(0x0008) (Transient, DuplicateTransient)
	class ACameraActor*                                MainCamera_ExecuteUbergraph_TslLobby_ver_2_RefProperty;   // 0x03E8(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TslLobby_ver_3.TslLobby_ver_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_TslLobby_ver_3(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
