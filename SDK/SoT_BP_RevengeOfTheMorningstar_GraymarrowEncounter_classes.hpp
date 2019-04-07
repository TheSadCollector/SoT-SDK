#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_RevengeOfTheMorningstar_GraymarrowEncounter_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_RevengeOfTheMorningstar_GraymarrowEncounter.BP_RevengeOfTheMorningstar_GraymarrowEncounter_C
// 0x0020 (0x00C8 - 0x00A8)
class UBP_RevengeOfTheMorningstar_GraymarrowEncounter_C : public UBlueprintSpawnAIStepBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class FString                                      Graymarrow_Nameplate;                                     // 0x00B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class APawn*                                       Target;                                                   // 0x00C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_RevengeOfTheMorningstar_GraymarrowEncounter.BP_RevengeOfTheMorningstar_GraymarrowEncounter_C"));
		return ptr;
	}


	void OnSpawn(class APawn* Pawn);
	void OnDespawn(class APawn* Pawn, TEnumAsByte<ECharacterDeathType> DeathType);
	void On_Item_Pickup_Event();
	void ExecuteUbergraph_BP_RevengeOfTheMorningstar_GraymarrowEncounter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
