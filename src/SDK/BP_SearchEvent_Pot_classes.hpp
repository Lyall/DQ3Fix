#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SearchEvent_Pot

#include "Basic.hpp"

#include "BP_SearchEvent_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SearchEvent_Pot.BP_SearchEvent_Pot_C
// 0x0008 (0x0298 - 0x0290)
class ABP_SearchEvent_Pot_C final : public ABP_SearchEvent_C
{
public:
	class USphereComponent*                       Sphere;                                            // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SearchEvent_Pot_C">();
	}
	static class ABP_SearchEvent_Pot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SearchEvent_Pot_C>();
	}
};
static_assert(alignof(ABP_SearchEvent_Pot_C) == 0x000008, "Wrong alignment on ABP_SearchEvent_Pot_C");
static_assert(sizeof(ABP_SearchEvent_Pot_C) == 0x000298, "Wrong size on ABP_SearchEvent_Pot_C");
static_assert(offsetof(ABP_SearchEvent_Pot_C, Sphere) == 0x000290, "Member 'ABP_SearchEvent_Pot_C::Sphere' has a wrong offset!");

}
