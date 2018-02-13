#pragma once

// PLAYERUNKNOWN'S BATTLEGROUNDS (3.6.10.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Item_Boost_PainKiller.Item_Boost_PainKiller_C
// 0x0014 (0x0214 - 0x0200)
class UItem_Boost_PainKiller_C : public UCastableItem
{
public:
	class ATslCharacter*                               Character;                                                // 0x0200(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                PrintTime;                                                // 0x0208(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isProcessing;                                             // 0x020C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x020D(0x0003) MISSED OFFSET
	float                                              BoostGaugeAmount;                                         // 0x0210(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Item_Boost_PainKiller.Item_Boost_PainKiller_C");
		return ptr;
	}


	void BoostGaugeUp();
	bool IsCastable(class ATslCharacter** Character);
	void PrintCastingTime();
	bool UseBy(class ATslCharacter** Character);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
