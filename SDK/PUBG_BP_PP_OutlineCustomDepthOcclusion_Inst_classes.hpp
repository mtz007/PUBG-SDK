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

// BlueprintGeneratedClass BP_PP_OutlineCustomDepthOcclusion_Inst.BP_PP_OutlineCustomDepthOcclusion_Inst_C
// 0x0008 (0x0418 - 0x0410)
class ABP_PP_OutlineCustomDepthOcclusion_Inst_C : public ATslPostProcessEffect
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PP_OutlineCustomDepthOcclusion_Inst.BP_PP_OutlineCustomDepthOcclusion_Inst_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
