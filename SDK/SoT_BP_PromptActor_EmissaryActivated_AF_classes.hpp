#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PromptActor_EmissaryActivated_AF_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PromptActor_EmissaryActivated_AF.BP_PromptActor_EmissaryActivated_AF_C
// 0x0030 (0x04C8 - 0x0498)
class ABP_PromptActor_EmissaryActivated_AF_C : public ABP_PromptActorBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0498(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBP_Prompt_EmissaryActivated_C*              PromptCoordinatorEmissaryActivated;                       // 0x04A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      PromptCounterAccessKey;                                   // 0x04A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FPrioritisedPromptWithHandle>        Prompts;                                                  // 0x04B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      Company;                                                  // 0x04C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_PromptActor_EmissaryActivated_AF.BP_PromptActor_EmissaryActivated_AF_C"));
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_PromptActor_EmissaryActivated_AF(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
