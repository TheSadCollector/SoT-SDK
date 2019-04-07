#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_WildRoseDefinitionDev_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WildRoseDefinitionDev.WildRoseDefinitionDev_C
// 0x0158 (0x0180 - 0x0028)
class UWildRoseDefinitionDev_C : public UObject
{
public:
	struct FDS_WildRoseDefinition                      Definition;                                               // 0x0028(0x0110) (Edit, BlueprintVisible)
	class UQuestBookPageBundle*                        InitialBundle;                                            // 0x0138(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UQuestBookPageBundle*                        FinalBundle;                                              // 0x0140(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<TAssetPtr<class AActor>>                    Actors;                                                   // 0x0148(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               Islands;                                                  // 0x0158(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UAISpawner*                                  Spawner;                                                  // 0x0168(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UQuestBookPageBundle*                        DeathNote;                                                // 0x0170(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UQuestBookPageBundle*                        OurMemories;                                              // 0x0178(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass WildRoseDefinitionDev.WildRoseDefinitionDev_C"));
		return ptr;
	}


	void GetIslandForActor(TAssetPtr<class AActor> Actor, struct FName* Name);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
