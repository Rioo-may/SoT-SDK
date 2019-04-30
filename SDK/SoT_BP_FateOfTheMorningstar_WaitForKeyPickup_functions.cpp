// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_FateOfTheMorningstar_WaitForKeyPickup_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_FateOfTheMorningstar_WaitForKeyPickup.BP_FateOfTheMorningstar_WaitForKeyPickup_C.On Item Pickup Event
// (BlueprintCallable, BlueprintEvent)

void UBP_FateOfTheMorningstar_WaitForKeyPickup_C::On_Item_Pickup_Event()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_FateOfTheMorningstar_WaitForKeyPickup.BP_FateOfTheMorningstar_WaitForKeyPickup_C.On Item Pickup Event"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_FateOfTheMorningstar_WaitForKeyPickup.BP_FateOfTheMorningstar_WaitForKeyPickup_C.OnBegin
// (Event, Protected, BlueprintEvent)
// Parameters:
// TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UBP_FateOfTheMorningstar_WaitForKeyPickup_C::OnBegin(TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_FateOfTheMorningstar_WaitForKeyPickup.BP_FateOfTheMorningstar_WaitForKeyPickup_C.OnBegin"));

	struct
	{
		TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode;
	} params;

	params.InBeginMode = InBeginMode;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_FateOfTheMorningstar_WaitForKeyPickup.BP_FateOfTheMorningstar_WaitForKeyPickup_C.ExecuteUbergraph_BP_FateOfTheMorningstar_WaitForKeyPickup
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_FateOfTheMorningstar_WaitForKeyPickup_C::ExecuteUbergraph_BP_FateOfTheMorningstar_WaitForKeyPickup(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_FateOfTheMorningstar_WaitForKeyPickup.BP_FateOfTheMorningstar_WaitForKeyPickup_C.ExecuteUbergraph_BP_FateOfTheMorningstar_WaitForKeyPickup"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
