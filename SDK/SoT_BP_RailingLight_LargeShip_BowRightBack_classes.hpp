#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_RailingLight_LargeShip_BowRightBack_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_RailingLight_LargeShip_BowRightBack.BP_RailingLight_LargeShip_BowRightBack_C
// 0x0000 (0x06A0 - 0x06A0)
class ABP_RailingLight_LargeShip_BowRightBack_C : public ABP_InteractableShipRailingLight_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_RailingLight_LargeShip_BowRightBack.BP_RailingLight_LargeShip_BowRightBack_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif