#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NicolaCameraEffectTriggerBox_B

#include "Basic.hpp"

#include "BP_NicolaCameraEffectTriggerBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass NicolaCameraEffectTriggerBox_B.NicolaCameraEffectTriggerBox_B_C
// 0x0010 (0x0300 - 0x02F0)
class ANicolaCameraEffectTriggerBox_B_C : public ABP_NicolaCameraEffectTriggerBase_C
{
public:
	class UBoxComponent*                          CollisionComp;                                     // 0x02F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          InnerShapeComp;                                    // 0x02F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NicolaCameraEffectTriggerBox_B_C">();
	}
	static class ANicolaCameraEffectTriggerBox_B_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ANicolaCameraEffectTriggerBox_B_C>();
	}
};
static_assert(alignof(ANicolaCameraEffectTriggerBox_B_C) == 0x000010, "Wrong alignment on ANicolaCameraEffectTriggerBox_B_C");
static_assert(sizeof(ANicolaCameraEffectTriggerBox_B_C) == 0x000300, "Wrong size on ANicolaCameraEffectTriggerBox_B_C");
static_assert(offsetof(ANicolaCameraEffectTriggerBox_B_C, CollisionComp) == 0x0002F0, "Member 'ANicolaCameraEffectTriggerBox_B_C::CollisionComp' has a wrong offset!");
static_assert(offsetof(ANicolaCameraEffectTriggerBox_B_C, InnerShapeComp) == 0x0002F8, "Member 'ANicolaCameraEffectTriggerBox_B_C::InnerShapeComp' has a wrong offset!");

}
