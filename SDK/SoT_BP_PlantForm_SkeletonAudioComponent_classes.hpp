#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PlantForm_SkeletonAudioComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PlantForm_SkeletonAudioComponent.BP_PlantForm_SkeletonAudioComponent_C
// 0x0000 (0x0310 - 0x0310)
class UBP_PlantForm_SkeletonAudioComponent_C : public USkeletonAICharacterAudioComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlantForm_SkeletonAudioComponent.BP_PlantForm_SkeletonAudioComponent_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
