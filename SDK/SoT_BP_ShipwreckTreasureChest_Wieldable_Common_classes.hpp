#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ShipwreckTreasureChest_Wieldable_Common_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ShipwreckTreasureChest_Wieldable_Common.BP_ShipwreckTreasureChest_Wieldable_Common_C
// 0x0000 (0x07E8 - 0x07E8)
class ABP_ShipwreckTreasureChest_Wieldable_Common_C : public ABP_TreasureChest_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ShipwreckTreasureChest_Wieldable_Common.BP_ShipwreckTreasureChest_Wieldable_Common_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
