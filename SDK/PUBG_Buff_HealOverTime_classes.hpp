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

// BlueprintGeneratedClass Buff_HealOverTime.Buff_HealOverTime_C
// 0x0008 (0x0428 - 0x0420)
class ABuff_HealOverTime_C : public AHealOverTimeBuff
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_HealOverTime.Buff_HealOverTime_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
