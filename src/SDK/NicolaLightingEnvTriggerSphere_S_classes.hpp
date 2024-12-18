#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NicolaLightingEnvTriggerSphere_S

#include "Basic.hpp"

#include "BP_NicolaLightingEnvTriggerBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass NicolaLightingEnvTriggerSphere_S.NicolaLightingEnvTriggerSphere_S_C
// 0x0010 (0x02F0 - 0x02E0)
class ANicolaLightingEnvTriggerSphere_S_C final : public ABP_NicolaLightingEnvTriggerBase_C
{
public:
	class USphereComponent*                       CollisionComp;                                     // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       InnerShapeComp;                                    // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NicolaLightingEnvTriggerSphere_S_C">();
	}
	static class ANicolaLightingEnvTriggerSphere_S_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ANicolaLightingEnvTriggerSphere_S_C>();
	}
};
static_assert(alignof(ANicolaLightingEnvTriggerSphere_S_C) == 0x000010, "Wrong alignment on ANicolaLightingEnvTriggerSphere_S_C");
static_assert(sizeof(ANicolaLightingEnvTriggerSphere_S_C) == 0x0002F0, "Wrong size on ANicolaLightingEnvTriggerSphere_S_C");
static_assert(offsetof(ANicolaLightingEnvTriggerSphere_S_C, CollisionComp) == 0x0002E0, "Member 'ANicolaLightingEnvTriggerSphere_S_C::CollisionComp' has a wrong offset!");
static_assert(offsetof(ANicolaLightingEnvTriggerSphere_S_C, InnerShapeComp) == 0x0002E8, "Member 'ANicolaLightingEnvTriggerSphere_S_C::InnerShapeComp' has a wrong offset!");

}

