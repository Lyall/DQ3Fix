#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BattleLocationControl

#include "Basic.hpp"

#include "Nicola_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BattleLocationControl.BP_BattleLocationControl_C
// 0x0010 (0x04D0 - 0x04C0)
class ABP_BattleLocationControl_C final : public ABattleCameraControl
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x04C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_BattleLocationControl(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BattleLocationControl_C">();
	}
	static class ABP_BattleLocationControl_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BattleLocationControl_C>();
	}
};
static_assert(alignof(ABP_BattleLocationControl_C) == 0x000010, "Wrong alignment on ABP_BattleLocationControl_C");
static_assert(sizeof(ABP_BattleLocationControl_C) == 0x0004D0, "Wrong size on ABP_BattleLocationControl_C");
static_assert(offsetof(ABP_BattleLocationControl_C, UberGraphFrame) == 0x0004C0, "Member 'ABP_BattleLocationControl_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_BattleLocationControl_C, DefaultSceneRoot) == 0x0004C8, "Member 'ABP_BattleLocationControl_C::DefaultSceneRoot' has a wrong offset!");

}
