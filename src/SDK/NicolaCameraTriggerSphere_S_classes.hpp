#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NicolaCameraTriggerSphere_S

#include "Basic.hpp"

#include "BP_NicolaCameraTriggerBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass NicolaCameraTriggerSphere_S.NicolaCameraTriggerSphere_S_C
// 0x0010 (0x0320 - 0x0310)
class ANicolaCameraTriggerSphere_S_C final : public ABP_NicolaCameraTriggerBase_C
{
public:
	class USphereComponent*                       CollisionComp;                                     // 0x0310(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       InnerShapeComp;                                    // 0x0318(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NicolaCameraTriggerSphere_S_C">();
	}
	static class ANicolaCameraTriggerSphere_S_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ANicolaCameraTriggerSphere_S_C>();
	}
};
static_assert(alignof(ANicolaCameraTriggerSphere_S_C) == 0x000010, "Wrong alignment on ANicolaCameraTriggerSphere_S_C");
static_assert(sizeof(ANicolaCameraTriggerSphere_S_C) == 0x000320, "Wrong size on ANicolaCameraTriggerSphere_S_C");
static_assert(offsetof(ANicolaCameraTriggerSphere_S_C, CollisionComp) == 0x000310, "Member 'ANicolaCameraTriggerSphere_S_C::CollisionComp' has a wrong offset!");
static_assert(offsetof(ANicolaCameraTriggerSphere_S_C, InnerShapeComp) == 0x000318, "Member 'ANicolaCameraTriggerSphere_S_C::InnerShapeComp' has a wrong offset!");

}
