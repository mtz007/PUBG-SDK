#pragma once

// PLAYERUNKNOWN'S BATTLEGROUNDS (3.7.27.27) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AssetRegistry.AssetBundleEntry
// 0x0028
struct FAssetBundleEntry
{
	struct FPrimaryAssetId                             BundleScope;                                              // 0x0000(0x0010)
	struct FName                                       BundleName;                                               // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FStringAssetReference>               BundleAssets;                                             // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct AssetRegistry.AssetBundleData
// 0x0010
struct FAssetBundleData
{
	TArray<struct FAssetBundleEntry>                   Bundles;                                                  // 0x0000(0x0010) (ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
