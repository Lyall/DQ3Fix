#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BattleLocation_LevelInstance_28

#include "Basic.hpp"

#include "Nicola_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BattleLocation_LevelInstance_28.BattleLocation_C
// 0x0000 (0x0268 - 0x0268)
class ABattleLocation_C final : public ANicolaBattleLevel
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BattleLocation_C">();
	}
	static class ABattleLocation_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABattleLocation_C>();
	}
};
static_assert(alignof(ABattleLocation_C) == 0x000008, "Wrong alignment on ABattleLocation_C");
static_assert(sizeof(ABattleLocation_C) == 0x000268, "Wrong size on ABattleLocation_C");

}

