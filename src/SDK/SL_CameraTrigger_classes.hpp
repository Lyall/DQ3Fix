#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SL_CameraTrigger

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SL_CameraTrigger.SL_CameraTrigger_C
// 0x0000 (0x0228 - 0x0228)
class ASL_CameraTrigger_C final : public ALevelScriptActor
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SL_CameraTrigger_C">();
	}
	static class ASL_CameraTrigger_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASL_CameraTrigger_C>();
	}
};
static_assert(alignof(ASL_CameraTrigger_C) == 0x000008, "Wrong alignment on ASL_CameraTrigger_C");
static_assert(sizeof(ASL_CameraTrigger_C) == 0x000228, "Wrong size on ASL_CameraTrigger_C");

}
