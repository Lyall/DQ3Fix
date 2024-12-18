#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ChurchMenu_ListItemPartyHeal

#include "Basic.hpp"

#include "Nicola_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_ChurchMenu_ListItemPartyHeal.WB_ChurchMenu_ListItemPartyHeal_C
// 0x0030 (0x0358 - 0x0328)
class UWB_ChurchMenu_ListItemPartyHeal_C final : public UCommonItemWidget
{
public:
	class UWidgetAnimation*                       Select;                                            // 0x0328(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 ItemCursor;                                        // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ItemCursorNF;                                      // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Battle_StatusIcon_C*                ItemStatusEffect;                                  // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MouseClick;                                        // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Player;                                            // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_ChurchMenu_ListItemPartyHeal_C">();
	}
	static class UWB_ChurchMenu_ListItemPartyHeal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_ChurchMenu_ListItemPartyHeal_C>();
	}
};
static_assert(alignof(UWB_ChurchMenu_ListItemPartyHeal_C) == 0x000008, "Wrong alignment on UWB_ChurchMenu_ListItemPartyHeal_C");
static_assert(sizeof(UWB_ChurchMenu_ListItemPartyHeal_C) == 0x000358, "Wrong size on UWB_ChurchMenu_ListItemPartyHeal_C");
static_assert(offsetof(UWB_ChurchMenu_ListItemPartyHeal_C, Select) == 0x000328, "Member 'UWB_ChurchMenu_ListItemPartyHeal_C::Select' has a wrong offset!");
static_assert(offsetof(UWB_ChurchMenu_ListItemPartyHeal_C, ItemCursor) == 0x000330, "Member 'UWB_ChurchMenu_ListItemPartyHeal_C::ItemCursor' has a wrong offset!");
static_assert(offsetof(UWB_ChurchMenu_ListItemPartyHeal_C, ItemCursorNF) == 0x000338, "Member 'UWB_ChurchMenu_ListItemPartyHeal_C::ItemCursorNF' has a wrong offset!");
static_assert(offsetof(UWB_ChurchMenu_ListItemPartyHeal_C, ItemStatusEffect) == 0x000340, "Member 'UWB_ChurchMenu_ListItemPartyHeal_C::ItemStatusEffect' has a wrong offset!");
static_assert(offsetof(UWB_ChurchMenu_ListItemPartyHeal_C, MouseClick) == 0x000348, "Member 'UWB_ChurchMenu_ListItemPartyHeal_C::MouseClick' has a wrong offset!");
static_assert(offsetof(UWB_ChurchMenu_ListItemPartyHeal_C, Player) == 0x000350, "Member 'UWB_ChurchMenu_ListItemPartyHeal_C::Player' has a wrong offset!");

}

