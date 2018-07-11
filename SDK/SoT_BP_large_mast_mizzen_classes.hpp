#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_large_mast_mizzen_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_large_mast_mizzen.BP_large_mast_mizzen_C
// 0x0010 (0x07D8 - 0x07C8)
class ABP_large_mast_mizzen_C : public ABP_Mast_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        shp_flag_pennant_01_b;                                    // 0x07D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_large_mast_mizzen.BP_large_mast_mizzen_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnMastDescLoaded(class UMastDescAsset** MastDesc);
	void ExecuteUbergraph_BP_large_mast_mizzen(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
