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

// WidgetBlueprintGeneratedClass MapGridWidget.MapGridWidget_C
// 0x0018 (0x08C0 - 0x08A8)
class UMapGridWidget_C : public UMapGridWidget
{
public:
	struct FVector2D                                   StartPointUC;                                             // 0x08A8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   EndPointUC;                                               // 0x08B0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   StandardVector;                                           // 0x08B8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MapGridWidget.MapGridWidget_C");
		return ptr;
	}


	struct FSlateBrush Get_Replayzone_Brush_2();
	struct FSlateBrush Get_Replayzone_Brush_1();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
