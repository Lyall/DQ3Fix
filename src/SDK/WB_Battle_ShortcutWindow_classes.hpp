#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_Battle_ShortcutWindow

#include "Basic.hpp"

#include "Nicola_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_Battle_ShortcutWindow.WB_Battle_ShortcutWindow_C
// 0x0020 (0x03D0 - 0x03B0)
class UWB_Battle_ShortcutWindow_C final : public UCommonWindowWidget
{
public:
	class UImage*                                 BG;                                                // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Common_LongPressSet_C*              ButtonIcon;                                        // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MouseClick;                                        // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MouseHover;                                        // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_Battle_ShortcutWindow_C">();
	}
	static class UWB_Battle_ShortcutWindow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_Battle_ShortcutWindow_C>();
	}
};
static_assert(alignof(UWB_Battle_ShortcutWindow_C) == 0x000008, "Wrong alignment on UWB_Battle_ShortcutWindow_C");
static_assert(sizeof(UWB_Battle_ShortcutWindow_C) == 0x0003D0, "Wrong size on UWB_Battle_ShortcutWindow_C");
static_assert(offsetof(UWB_Battle_ShortcutWindow_C, BG) == 0x0003B0, "Member 'UWB_Battle_ShortcutWindow_C::BG' has a wrong offset!");
static_assert(offsetof(UWB_Battle_ShortcutWindow_C, ButtonIcon) == 0x0003B8, "Member 'UWB_Battle_ShortcutWindow_C::ButtonIcon' has a wrong offset!");
static_assert(offsetof(UWB_Battle_ShortcutWindow_C, MouseClick) == 0x0003C0, "Member 'UWB_Battle_ShortcutWindow_C::MouseClick' has a wrong offset!");
static_assert(offsetof(UWB_Battle_ShortcutWindow_C, MouseHover) == 0x0003C8, "Member 'UWB_Battle_ShortcutWindow_C::MouseHover' has a wrong offset!");

}
