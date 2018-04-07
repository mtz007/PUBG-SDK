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

// BlueprintGeneratedClass LobbyViewMode.LobbyViewMode_C
// 0x0010 (0x0430 - 0x0420)
class ALobbyViewMode_C : public AViewModeStudio
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0420(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             Scene;                                                    // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LobbyViewMode.LobbyViewMode_C");
		return ptr;
	}


	void UserConstructionScript();
	void SetViewModeAbleActor(class AActor** Actor);
	void AddYaw(float* Value);
	void AddPitch(float* Value);
	void AddRoll(float* Value);
	void AddViewDistance(float* Value);
	void ExecuteUbergraph_LobbyViewMode(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
