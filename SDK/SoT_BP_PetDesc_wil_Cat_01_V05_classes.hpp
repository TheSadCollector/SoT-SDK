#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PetDesc_wil_Cat_01_V05_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PetDesc_wil_Cat_01_V05.BP_PetDesc_wil_Cat_01_V05_C
// 0x0000 (0x00E8 - 0x00E8)
class UBP_PetDesc_wil_Cat_01_V05_C : public UPetEntitlementDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_PetDesc_wil_Cat_01_V05.BP_PetDesc_wil_Cat_01_V05_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
