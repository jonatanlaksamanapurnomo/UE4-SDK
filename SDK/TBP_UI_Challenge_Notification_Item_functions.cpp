﻿// Name: bbbbbbbbbbbbbbbbbbbbbbblod, Version: 1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Challenge_Notification_Item.TBP_UI_Challenge_Notification_Item_C.SetupDataFromChallengeCompleted
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerChallenge*                             TigerChallenge                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Challenge_Notification_Item_C::SetupDataFromChallengeCompleted(class UTigerChallenge* TigerChallenge)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Challenge_Notification_Item.TBP_UI_Challenge_Notification_Item_C.SetupDataFromChallengeCompleted");

	UTBP_UI_Challenge_Notification_Item_C_SetupDataFromChallengeCompleted_Params params;
	params.TigerChallenge = TigerChallenge;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Challenge_Notification_Item.TBP_UI_Challenge_Notification_Item_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_Challenge_Notification_Item_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Challenge_Notification_Item.TBP_UI_Challenge_Notification_Item_C.Construct");

	UTBP_UI_Challenge_Notification_Item_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Challenge_Notification_Item.TBP_UI_Challenge_Notification_Item_C.ExecuteUbergraph_TBP_UI_Challenge_Notification_Item
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Challenge_Notification_Item_C::ExecuteUbergraph_TBP_UI_Challenge_Notification_Item(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Challenge_Notification_Item.TBP_UI_Challenge_Notification_Item_C.ExecuteUbergraph_TBP_UI_Challenge_Notification_Item");

	UTBP_UI_Challenge_Notification_Item_C_ExecuteUbergraph_TBP_UI_Challenge_Notification_Item_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
