#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Entry_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Entry.Entry_C
// 0x0008 (0x04B0 - 0x04A8)
class AEntry_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Entry.Entry_C"));
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_Entry(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
