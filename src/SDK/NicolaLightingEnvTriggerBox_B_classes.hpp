#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NicolaLightingEnvTriggerBox_B

#include "Basic.hpp"

#include "BP_NicolaLightingEnvTriggerBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass NicolaLightingEnvTriggerBox_B.NicolaLightingEnvTriggerBox_B_C
// 0x0010 (0x02F0 - 0x02E0)
class ANicolaLightingEnvTriggerBox_B_C final : public ABP_NicolaLightingEnvTriggerBase_C
{
public:
	class UBoxComponent*                          CollisionComp;                                     // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          InnerShapeComp;                                    // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NicolaLightingEnvTriggerBox_B_C">();
	}
	static class ANicolaLightingEnvTriggerBox_B_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ANicolaLightingEnvTriggerBox_B_C>();
	}
};
static_assert(alignof(ANicolaLightingEnvTriggerBox_B_C) == 0x000010, "Wrong alignment on ANicolaLightingEnvTriggerBox_B_C");
static_assert(sizeof(ANicolaLightingEnvTriggerBox_B_C) == 0x0002F0, "Wrong size on ANicolaLightingEnvTriggerBox_B_C");
static_assert(offsetof(ANicolaLightingEnvTriggerBox_B_C, CollisionComp) == 0x0002E0, "Member 'ANicolaLightingEnvTriggerBox_B_C::CollisionComp' has a wrong offset!");
static_assert(offsetof(ANicolaLightingEnvTriggerBox_B_C, InnerShapeComp) == 0x0002E8, "Member 'ANicolaLightingEnvTriggerBox_B_C::InnerShapeComp' has a wrong offset!");

}

