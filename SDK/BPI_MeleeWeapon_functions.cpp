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
//		Name   -> Function BPI_MeleeWeapon.BPI_MeleeWeapon_C.GetMeleeWeaponCategory
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<ENUM_MeleeWeaponCategories_ENUM_MeleeWeaponCategories> MeleeWeaponCategory                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_MeleeWeapon_C::GetMeleeWeaponCategory(TEnumAsByte<ENUM_MeleeWeaponCategories_ENUM_MeleeWeaponCategories>* MeleeWeaponCategory)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_MeleeWeapon.BPI_MeleeWeapon_C.GetMeleeWeaponCategory");

	UBPI_MeleeWeapon_C_GetMeleeWeaponCategory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MeleeWeaponCategory != nullptr)
		*MeleeWeaponCategory = params.MeleeWeaponCategory;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
