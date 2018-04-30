#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ServerMigration.ServerSettings
// 0x0008
struct FServerSettings
{
	int                                                RefuseIncomingClientConnections;                          // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	bool                                               FailToConnectToServer;                                    // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               RefuseMigrationStart;                                     // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DisconnectServerConnectionDuringMigration;                // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ServerMigration.ClientSettings
// 0x0002
struct FClientSettings
{
	bool                                               PauseMigrationBeforeOwnershipTransfer;                    // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	bool                                               FailToConnectToServer;                                    // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ServerMigration.ServerMigrationCustomMigrationSerialisationStruct
// 0x0004
struct FServerMigrationCustomMigrationSerialisationStruct
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

// ScriptStruct ServerMigration.ServerMigrationSerialisationDetailsTestsUStruct
// 0x000C
struct FServerMigrationSerialisationDetailsTestsUStruct
{
	uint16_t                                           UInt16WithMigrationAndNotReplicatedMarkup;                // 0x0000(0x0002) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x1E1];                                     // 0x0002(0x01E1) MISSED OFFSET
	float                                              FloatWithNoMarkup;                                        // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           UInt16WithMigrationMarkup;                                // 0x01E3(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           UInt16WithNotReplicatedMarkup;                            // 0x01E3(0x0002) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif