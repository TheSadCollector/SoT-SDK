#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_HumanoidGhostActionStateCreatorDefinition_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_HumanoidGhostActionStateCreatorDefinition.BP_HumanoidGhostActionStateCreatorDefinition_C
// 0x0000 (0x0728 - 0x0728)
class ABP_HumanoidGhostActionStateCreatorDefinition_C : public ABP_HumanoidActionStateCreatorDefinition_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_HumanoidGhostActionStateCreatorDefinition.BP_HumanoidGhostActionStateCreatorDefinition_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif