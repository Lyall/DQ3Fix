#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_UI_BattleCommon_PartyListItem

#include "Basic.hpp"

#include "Nicola_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_UI_BattleCommon_PartyListItem.WB_UI_BattleCommon_PartyListItem_C
// 0x0020 (0x0348 - 0x0328)
class UWB_UI_BattleCommon_PartyListItem_C final : public UCommonItemWidget
{
public:
	class UImage*                                 CharaIcon;                                         // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ItemCursor;                                        // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MouseClick;                                        // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 StatusIcon;                                        // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_UI_BattleCommon_PartyListItem_C">();
	}
	static class UWB_UI_BattleCommon_PartyListItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_UI_BattleCommon_PartyListItem_C>();
	}
};
static_assert(alignof(UWB_UI_BattleCommon_PartyListItem_C) == 0x000008, "Wrong alignment on UWB_UI_BattleCommon_PartyListItem_C");
static_assert(sizeof(UWB_UI_BattleCommon_PartyListItem_C) == 0x000348, "Wrong size on UWB_UI_BattleCommon_PartyListItem_C");
static_assert(offsetof(UWB_UI_BattleCommon_PartyListItem_C, CharaIcon) == 0x000328, "Member 'UWB_UI_BattleCommon_PartyListItem_C::CharaIcon' has a wrong offset!");
static_assert(offsetof(UWB_UI_BattleCommon_PartyListItem_C, ItemCursor) == 0x000330, "Member 'UWB_UI_BattleCommon_PartyListItem_C::ItemCursor' has a wrong offset!");
static_assert(offsetof(UWB_UI_BattleCommon_PartyListItem_C, MouseClick) == 0x000338, "Member 'UWB_UI_BattleCommon_PartyListItem_C::MouseClick' has a wrong offset!");
static_assert(offsetof(UWB_UI_BattleCommon_PartyListItem_C, StatusIcon) == 0x000340, "Member 'UWB_UI_BattleCommon_PartyListItem_C::StatusIcon' has a wrong offset!");

}

