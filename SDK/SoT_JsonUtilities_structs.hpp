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

// ScriptStruct JsonUtilities.JsonObjectWrapper
// 0x0018
struct FJsonObjectWrapper
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct JsonUtilities.TestTextObject
// 0x0070
struct FTestTextObject
{
	struct FText                                       TestTextExport;                                           // 0x0000(0x0018)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData01[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	struct FText                                       TestText;                                                 // 0x01E3(0x0018)
	unsigned char                                      UnknownData02[0x20];                                      // 0x0038(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
};

// ScriptStruct JsonUtilities.TestFloatObject
// 0x0008
struct FTestFloatObject
{
	float                                              TestFloat2;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	float                                              TestFloat1;                                               // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct JsonUtilities.TestEnumObject
// 0x0001
struct FTestEnumObject
{
	TEnumAsByte<ETestEnum>                             TestEnum;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct JsonUtilities.TestMessageTimespan
// 0x0008
struct FTestMessageTimespan
{
	struct FTimespan                                   Timespan;                                                 // 0x0000(0x0008) (ZeroConstructor)
};

// ScriptStruct JsonUtilities.TestMessageDateTime
// 0x0008
struct FTestMessageDateTime
{
	struct FDateTime                                   DateTime;                                                 // 0x0000(0x0008) (ZeroConstructor)
};

// ScriptStruct JsonUtilities.TestSerializationObject
// 0x0028
struct FTestSerializationObject
{
	struct FGuid                                       TestGuid;                                                 // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	bool                                               TestBool;                                                 // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	int                                                TestInt;                                                  // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	class FString                                      TestString;                                               // 0x01E3(0x0010) (ZeroConstructor)
};

// ScriptStruct JsonUtilities.TestSerializationNestedObject
// 0x0028
struct FTestSerializationNestedObject
{
	struct FTestSerializationObject                    NestedObject;                                             // 0x0000(0x0028)
};

// ScriptStruct JsonUtilities.TestMessageUInt64
// 0x0008
struct FTestMessageUInt64
{
	uint64_t                                           TestInt;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct JsonUtilities.TestMessageInt64
// 0x0008
struct FTestMessageInt64
{
	int64_t                                            TestInt;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct JsonUtilities.TestUStructMapSerializationObject
// 0x0050
struct FTestUStructMapSerializationObject
{
	TMap<class FString, struct FTestSerializationObject> StructMap;                                                // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct JsonUtilities.TestInt32MapSerializationObject
// 0x0050
struct FTestInt32MapSerializationObject
{
	TMap<class FString, int>                           Int32Map;                                                 // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct JsonUtilities.TestInvalidStringMapSerializationObject
// 0x0050
struct FTestInvalidStringMapSerializationObject
{
	TMap<int, class FString>                           StringMap;                                                // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct JsonUtilities.TestStringMapSerializationObject
// 0x0050
struct FTestStringMapSerializationObject
{
	TMap<class FString, class FString>                 StringMap;                                                // 0x0000(0x0050) (ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif