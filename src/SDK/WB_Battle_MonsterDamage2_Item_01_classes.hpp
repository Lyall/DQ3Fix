#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_Battle_MonsterDamage2_Item_01

#include "Basic.hpp"

#include "Nicola_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_Battle_MonsterDamage2_Item_01.WB_Battle_MonsterDamage2_Item_01_C
// 0x0030 (0x0358 - 0x0328)
class UWB_Battle_MonsterDamage2_Item_01_C final : public UCommonItemWidget
{
public:
	class UWidgetAnimation*                       Critical;                                          // 0x0328(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 BG;                                                // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Number_00;                                         // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Number_01;                                         // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Number_02;                                         // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Number_03;                                         // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_Battle_MonsterDamage2_Item_01_C">();
	}
	static class UWB_Battle_MonsterDamage2_Item_01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_Battle_MonsterDamage2_Item_01_C>();
	}
};
static_assert(alignof(UWB_Battle_MonsterDamage2_Item_01_C) == 0x000008, "Wrong alignment on UWB_Battle_MonsterDamage2_Item_01_C");
static_assert(sizeof(UWB_Battle_MonsterDamage2_Item_01_C) == 0x000358, "Wrong size on UWB_Battle_MonsterDamage2_Item_01_C");
static_assert(offsetof(UWB_Battle_MonsterDamage2_Item_01_C, Critical) == 0x000328, "Member 'UWB_Battle_MonsterDamage2_Item_01_C::Critical' has a wrong offset!");
static_assert(offsetof(UWB_Battle_MonsterDamage2_Item_01_C, BG) == 0x000330, "Member 'UWB_Battle_MonsterDamage2_Item_01_C::BG' has a wrong offset!");
static_assert(offsetof(UWB_Battle_MonsterDamage2_Item_01_C, Number_00) == 0x000338, "Member 'UWB_Battle_MonsterDamage2_Item_01_C::Number_00' has a wrong offset!");
static_assert(offsetof(UWB_Battle_MonsterDamage2_Item_01_C, Number_01) == 0x000340, "Member 'UWB_Battle_MonsterDamage2_Item_01_C::Number_01' has a wrong offset!");
static_assert(offsetof(UWB_Battle_MonsterDamage2_Item_01_C, Number_02) == 0x000348, "Member 'UWB_Battle_MonsterDamage2_Item_01_C::Number_02' has a wrong offset!");
static_assert(offsetof(UWB_Battle_MonsterDamage2_Item_01_C, Number_03) == 0x000350, "Member 'UWB_Battle_MonsterDamage2_Item_01_C::Number_03' has a wrong offset!");

}

