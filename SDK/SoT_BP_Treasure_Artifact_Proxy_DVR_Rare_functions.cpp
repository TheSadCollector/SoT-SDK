// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Treasure_Artifact_Proxy_DVR_Rare_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Treasure_Artifact_Proxy_DVR_Rare.BP_Treasure_Artifact_Proxy_DVR_Rare_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Treasure_Artifact_Proxy_DVR_Rare_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Treasure_Artifact_Proxy_DVR_Rare.BP_Treasure_Artifact_Proxy_DVR_Rare_C.UserConstructionScript");

	ABP_Treasure_Artifact_Proxy_DVR_Rare_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
