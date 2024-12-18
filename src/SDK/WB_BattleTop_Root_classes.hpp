#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_BattleTop_Root

#include "Basic.hpp"

#include "Nicola_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_BattleTop_Root.WB_BattleTop_Root_C
// 0x0038 (0x03F8 - 0x03C0)
class UWB_BattleTop_Root_C final : public UCommonRootWidget
{
public:
	class UWB_Battle_HideWindow_C*                HideWindow;                                        // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Battle_ShortcutWindow_C*            ShortcutWindow;                                    // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_BattleTactics_UnitList_C*           TacticsList1;                                      // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_BattleTactics_TacticsList_C*        TacticsList2;                                      // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_BattleTactics_TacticsWindow_C*      TacticsWindow;                                     // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_BattleCommon_Dialog_C*              TextWindow;                                        // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_BattleCommon_List3_C*               TopList;                                           // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_BattleTop_Root_C">();
	}
	static class UWB_BattleTop_Root_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_BattleTop_Root_C>();
	}
};
static_assert(alignof(UWB_BattleTop_Root_C) == 0x000008, "Wrong alignment on UWB_BattleTop_Root_C");
static_assert(sizeof(UWB_BattleTop_Root_C) == 0x0003F8, "Wrong size on UWB_BattleTop_Root_C");
static_assert(offsetof(UWB_BattleTop_Root_C, HideWindow) == 0x0003C0, "Member 'UWB_BattleTop_Root_C::HideWindow' has a wrong offset!");
static_assert(offsetof(UWB_BattleTop_Root_C, ShortcutWindow) == 0x0003C8, "Member 'UWB_BattleTop_Root_C::ShortcutWindow' has a wrong offset!");
static_assert(offsetof(UWB_BattleTop_Root_C, TacticsList1) == 0x0003D0, "Member 'UWB_BattleTop_Root_C::TacticsList1' has a wrong offset!");
static_assert(offsetof(UWB_BattleTop_Root_C, TacticsList2) == 0x0003D8, "Member 'UWB_BattleTop_Root_C::TacticsList2' has a wrong offset!");
static_assert(offsetof(UWB_BattleTop_Root_C, TacticsWindow) == 0x0003E0, "Member 'UWB_BattleTop_Root_C::TacticsWindow' has a wrong offset!");
static_assert(offsetof(UWB_BattleTop_Root_C, TextWindow) == 0x0003E8, "Member 'UWB_BattleTop_Root_C::TextWindow' has a wrong offset!");
static_assert(offsetof(UWB_BattleTop_Root_C, TopList) == 0x0003F0, "Member 'UWB_BattleTop_Root_C::TopList' has a wrong offset!");

}

