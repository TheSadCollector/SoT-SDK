#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Cutlass_Item_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Cutlass_Item.BP_Cutlass_Item_C
// 0x0008 (0x0A18 - 0x0A10)
class ABP_Cutlass_Item_C : public AMeleeWeapon
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0A10(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Cutlass_Item.BP_Cutlass_Item_C");
		return ptr;
	}


	void DoBlockEffect();
	void UserConstructionScript();
	void OnBlockedAttack(struct FEventBlocked* Event);
	void ExecuteUbergraph_BP_Cutlass_Item(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif