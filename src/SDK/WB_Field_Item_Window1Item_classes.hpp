#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_Field_Item_Window1Item

#include "Basic.hpp"

#include "Nicola_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_Field_Item_Window1Item.WB_Field_Item_Window1Item_C
// 0x0018 (0x0340 - 0x0328)
class UWB_Field_Item_Window1Item_C final : public UCommonItemWidget
{
public:
	class UImage*                                 ItemIcon;                                          // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ItemIcon2;                                         // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 WindowBG;                                          // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_Field_Item_Window1Item_C">();
	}
	static class UWB_Field_Item_Window1Item_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_Field_Item_Window1Item_C>();
	}
};
static_assert(alignof(UWB_Field_Item_Window1Item_C) == 0x000008, "Wrong alignment on UWB_Field_Item_Window1Item_C");
static_assert(sizeof(UWB_Field_Item_Window1Item_C) == 0x000340, "Wrong size on UWB_Field_Item_Window1Item_C");
static_assert(offsetof(UWB_Field_Item_Window1Item_C, ItemIcon) == 0x000328, "Member 'UWB_Field_Item_Window1Item_C::ItemIcon' has a wrong offset!");
static_assert(offsetof(UWB_Field_Item_Window1Item_C, ItemIcon2) == 0x000330, "Member 'UWB_Field_Item_Window1Item_C::ItemIcon2' has a wrong offset!");
static_assert(offsetof(UWB_Field_Item_Window1Item_C, WindowBG) == 0x000338, "Member 'UWB_Field_Item_Window1Item_C::WindowBG' has a wrong offset!");

}
