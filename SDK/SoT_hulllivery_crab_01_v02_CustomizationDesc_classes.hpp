#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_hulllivery_crab_01_v02_CustomizationDesc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass hulllivery_crab_01_v02_CustomizationDesc.hulllivery_crab_01_v02_CustomizationDesc_C
// 0x0000 (0x0108 - 0x0108)
class Uhulllivery_crab_01_v02_CustomizationDesc_C : public UShipCustomizationDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass hulllivery_crab_01_v02_CustomizationDesc.hulllivery_crab_01_v02_CustomizationDesc_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif