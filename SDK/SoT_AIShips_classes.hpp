#pragma once

// Sea of Thieves (1.1.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AIShips_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AIShips.AIShipContextParamsDataAsset
// 0x0038 (0x0060 - 0x0028)
class UAIShipContextParamsDataAsset : public UDataAsset
{
public:
	TArray<struct FAIShipEncounterParamsSpawnerData>   Spawners;                                                 // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              IntervalBetweenRepairDamageAssignments;                   // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IntervalBetweenUseCannonAssignments;                      // 0x003C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DistForMinXYAIInteractableUtility;                        // 0x0040(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DistForMaxXYAIInteractableUtility;                        // 0x0044(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinXYAIInteractableUtility;                               // 0x0048(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxXYAIInteractableUtility;                               // 0x004C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DistForMinZAIInteractableUtility;                         // 0x0050(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DistForMaxZAIInteractableUtility;                         // 0x0054(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinZAIInteractableUtility;                                // 0x0058(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxZAIInteractableUtility;                                // 0x005C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIShips.AIShipContextParamsDataAsset");
		return ptr;
	}

};


// Class AIShips.AIShipDebugFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UAIShipDebugFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIShips.AIShipDebugFunctionLibrary");
		return ptr;
	}


	void STATIC_RequestAIShipForCrew(class UObject* WorldContextObject, const struct FGuid& CrewId);
};


// Class AIShips.AIShipEncounterSpawnParamsDataAsset
// 0x00B0 (0x00D8 - 0x0028)
class UAIShipEncounterSpawnParamsDataAsset : public UDataAsset
{
public:
	class UShipDescAsset*                              AIShipDescAsset;                                          // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpawnDepth;                                               // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinSafeSpawnDistanceFromOtherShips;                       // 0x0034(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRelativeSpawnLocationGeneratorParams       RelativeSpawnLocationParams;                              // 0x0038(0x00A0) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIShips.AIShipEncounterSpawnParamsDataAsset");
		return ptr;
	}

};


// Class AIShips.AIShipEncounterParamsDataAsset
// 0x0010 (0x0038 - 0x0028)
class UAIShipEncounterParamsDataAsset : public UDataAsset
{
public:
	class UAIShipEncounterSpawnParamsDataAsset*        SpawnParams;                                              // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAIShipContextParamsDataAsset*               ContextParams;                                            // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIShips.AIShipEncounterParamsDataAsset");
		return ptr;
	}

};


// Class AIShips.AIShipServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UAIShipServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIShips.AIShipServiceInterface");
		return ptr;
	}

};


// Class AIShips.AIShipService
// 0x0040 (0x04B8 - 0x0478)
class AAIShipService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0478(0x0008) MISSED OFFSET
	class UAIShipServiceDataAsset*                     Params;                                                   // 0x0480(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x30];                                      // 0x0488(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIShips.AIShipService");
		return ptr;
	}

};


// Class AIShips.AIShipServiceDataAsset
// 0x0008 (0x0030 - 0x0028)
class UAIShipServiceDataAsset : public UDataAsset
{
public:
	class UAIShipEncounterParamsDataAsset*             EncounterParams;                                          // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIShips.AIShipServiceDataAsset");
		return ptr;
	}

};


// Class AIShips.AthenaAIShipController
// 0x0008 (0x0568 - 0x0560)
class AAthenaAIShipController : public AAIController
{
public:
	class UBehaviorTree*                               BTAsset;                                                  // 0x0560(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIShips.AthenaAIShipController");
		return ptr;
	}

};


// Class AIShips.BTTask_SailShipForward
// 0x0010 (0x0098 - 0x0088)
class UBTTask_SailShipForward : public UBTTask_BlackboardBase
{
public:
	struct FVector                                     Velocity;                                                 // 0x0088(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0094(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIShips.BTTask_SailShipForward");
		return ptr;
	}

};


// Class AIShips.ShipProxyPawn
// 0x0008 (0x04E0 - 0x04D8)
class AShipProxyPawn : public APawn
{
public:
	class AShip*                                       Ship;                                                     // 0x04D8(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIShips.ShipProxyPawn");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
