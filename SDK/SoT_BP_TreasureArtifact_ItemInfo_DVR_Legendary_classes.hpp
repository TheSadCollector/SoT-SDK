#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TreasureArtifact_ItemInfo_DVR_Legendary_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TreasureArtifact_ItemInfo_DVR_Legendary.BP_TreasureArtifact_ItemInfo_DVR_Legendary_C
// 0x0008 (0x06B0 - 0x06A8)
class ABP_TreasureArtifact_ItemInfo_DVR_Legendary_C : public ATreasureChestItemInfo
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x06A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_TreasureArtifact_ItemInfo_DVR_Legendary.BP_TreasureArtifact_ItemInfo_DVR_Legendary_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
