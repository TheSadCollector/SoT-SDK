#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MadameOlivia_Phased_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MadameOlivia_Phased.BP_MadameOlivia_Phased_C
// 0x0000 (0x05A8 - 0x05A8)
class ABP_MadameOlivia_Phased_C : public ABP_Orderofsouls_TallTales_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_MadameOlivia_Phased.BP_MadameOlivia_Phased_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
