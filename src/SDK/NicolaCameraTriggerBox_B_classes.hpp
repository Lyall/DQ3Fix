#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NicolaCameraTriggerBox_B

#include "Basic.hpp"

#include "BP_NicolaCameraTriggerBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass NicolaCameraTriggerBox_B.NicolaCameraTriggerBox_B_C
// 0x0010 (0x0320 - 0x0310)
class ANicolaCameraTriggerBox_B_C final : public ABP_NicolaCameraTriggerBase_C
{
public:
	class UBoxComponent*                          CollisionComp;                                     // 0x0310(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          InnerShapeComp;                                    // 0x0318(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NicolaCameraTriggerBox_B_C">();
	}
	static class ANicolaCameraTriggerBox_B_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ANicolaCameraTriggerBox_B_C>();
	}
};
static_assert(alignof(ANicolaCameraTriggerBox_B_C) == 0x000010, "Wrong alignment on ANicolaCameraTriggerBox_B_C");
static_assert(sizeof(ANicolaCameraTriggerBox_B_C) == 0x000320, "Wrong size on ANicolaCameraTriggerBox_B_C");
static_assert(offsetof(ANicolaCameraTriggerBox_B_C, CollisionComp) == 0x000310, "Member 'ANicolaCameraTriggerBox_B_C::CollisionComp' has a wrong offset!");
static_assert(offsetof(ANicolaCameraTriggerBox_B_C, InnerShapeComp) == 0x000318, "Member 'ANicolaCameraTriggerBox_B_C::InnerShapeComp' has a wrong offset!");

}
