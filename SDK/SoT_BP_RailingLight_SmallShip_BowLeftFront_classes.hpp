#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_RailingLight_SmallShip_BowLeftFront_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_RailingLight_SmallShip_BowLeftFront.BP_RailingLight_SmallShip_BowLeftFront_C
// 0x0000 (0x06B8 - 0x06B8)
class ABP_RailingLight_SmallShip_BowLeftFront_C : public ABP_InteractableShipRailingLight_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_RailingLight_SmallShip_BowLeftFront.BP_RailingLight_SmallShip_BowLeftFront_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
