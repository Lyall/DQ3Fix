#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BattleCameraFront

#include "Basic.hpp"

#include "CinematicCamera_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BattleCameraFront.BP_BattleCameraFront_C
// 0x0000 (0x0810 - 0x0810)
class ABP_BattleCameraFront_C final : public ACineCameraActor
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BattleCameraFront_C">();
	}
	static class ABP_BattleCameraFront_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BattleCameraFront_C>();
	}
};
static_assert(alignof(ABP_BattleCameraFront_C) == 0x000010, "Wrong alignment on ABP_BattleCameraFront_C");
static_assert(sizeof(ABP_BattleCameraFront_C) == 0x000810, "Wrong size on ABP_BattleCameraFront_C");

}
