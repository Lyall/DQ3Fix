#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BattleCameraBack

#include "Basic.hpp"

#include "CinematicCamera_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BattleCameraBack.BP_BattleCameraBack_C
// 0x0000 (0x0810 - 0x0810)
class ABP_BattleCameraBack_C final : public ACineCameraActor
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BattleCameraBack_C">();
	}
	static class ABP_BattleCameraBack_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BattleCameraBack_C>();
	}
};
static_assert(alignof(ABP_BattleCameraBack_C) == 0x000010, "Wrong alignment on ABP_BattleCameraBack_C");
static_assert(sizeof(ABP_BattleCameraBack_C) == 0x000810, "Wrong size on ABP_BattleCameraBack_C");

}
