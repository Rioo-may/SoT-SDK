#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_RailingLight_LargeShip_BowRightFront_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_RailingLight_LargeShip_BowRightFront.BP_RailingLight_LargeShip_BowRightFront_C
// 0x0000 (0x0831 - 0x0831)
class ABP_RailingLight_LargeShip_BowRightFront_C : public ABP_InteractableShipRailingLight_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_RailingLight_LargeShip_BowRightFront.BP_RailingLight_LargeShip_BowRightFront_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif