#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BattleRoadStartEffectManager

#include "Basic.hpp"

#include "Nicola_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BattleRoadStartEffectManager.BP_BattleRoadStartEffectManager_C
// 0x0008 (0x0270 - 0x0268)
class ABP_BattleRoadStartEffectManager_C final : public ABattleRoadStartEffectManager
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BattleRoadStartEffectManager_C">();
	}
	static class ABP_BattleRoadStartEffectManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BattleRoadStartEffectManager_C>();
	}
};
static_assert(alignof(ABP_BattleRoadStartEffectManager_C) == 0x000008, "Wrong alignment on ABP_BattleRoadStartEffectManager_C");
static_assert(sizeof(ABP_BattleRoadStartEffectManager_C) == 0x000270, "Wrong size on ABP_BattleRoadStartEffectManager_C");
static_assert(offsetof(ABP_BattleRoadStartEffectManager_C, DefaultSceneRoot) == 0x000268, "Member 'ABP_BattleRoadStartEffectManager_C::DefaultSceneRoot' has a wrong offset!");

}

