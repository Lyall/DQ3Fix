#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_TownName_Root

#include "Basic.hpp"

#include "Nicola_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_TownName_Root.WB_TownName_Root_C
// 0x0008 (0x03C8 - 0x03C0)
class UWB_TownName_Root_C final : public UCommonRootWidget
{
public:
	class UWB_TownName_Item_C*                    WB_TownName_Item;                                  // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_TownName_Root_C">();
	}
	static class UWB_TownName_Root_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_TownName_Root_C>();
	}
};
static_assert(alignof(UWB_TownName_Root_C) == 0x000008, "Wrong alignment on UWB_TownName_Root_C");
static_assert(sizeof(UWB_TownName_Root_C) == 0x0003C8, "Wrong size on UWB_TownName_Root_C");
static_assert(offsetof(UWB_TownName_Root_C, WB_TownName_Item) == 0x0003C0, "Member 'UWB_TownName_Root_C::WB_TownName_Item' has a wrong offset!");

}
