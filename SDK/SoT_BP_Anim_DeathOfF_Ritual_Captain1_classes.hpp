#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_DeathOfF_Ritual_Captain1_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_Anim_DeathOfF_Ritual_Captain1.BP_Anim_DeathOfF_Ritual_Captain1_C
// 0x0000 (0x07D1 - 0x07D1)
class UBP_Anim_DeathOfF_Ritual_Captain1_C : public URevealable_AveragePirateV3_AnimInstance_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass BP_Anim_DeathOfF_Ritual_Captain1.BP_Anim_DeathOfF_Ritual_Captain1_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
