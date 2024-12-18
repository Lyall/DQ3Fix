#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BattlePositionLine

#include "Basic.hpp"

#include "Nicola_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BattlePositionLine.BP_BattlePositionLine_C
// 0x0028 (0x0290 - 0x0268)
class ABP_BattlePositionLine_C final : public ABattlePositionLine
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0268(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Cube;                                              // 0x0270(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0278(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         TempActors;                                        // 0x0280(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, DisableEditOnInstance)

public:
	void P____K______Y_();
	void ExecuteUbergraph_BP_BattlePositionLine(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BattlePositionLine_C">();
	}
	static class ABP_BattlePositionLine_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BattlePositionLine_C>();
	}
};
static_assert(alignof(ABP_BattlePositionLine_C) == 0x000008, "Wrong alignment on ABP_BattlePositionLine_C");
static_assert(sizeof(ABP_BattlePositionLine_C) == 0x000290, "Wrong size on ABP_BattlePositionLine_C");
static_assert(offsetof(ABP_BattlePositionLine_C, UberGraphFrame) == 0x000268, "Member 'ABP_BattlePositionLine_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_BattlePositionLine_C, Cube) == 0x000270, "Member 'ABP_BattlePositionLine_C::Cube' has a wrong offset!");
static_assert(offsetof(ABP_BattlePositionLine_C, DefaultSceneRoot) == 0x000278, "Member 'ABP_BattlePositionLine_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_BattlePositionLine_C, TempActors) == 0x000280, "Member 'ABP_BattlePositionLine_C::TempActors' has a wrong offset!");

}

