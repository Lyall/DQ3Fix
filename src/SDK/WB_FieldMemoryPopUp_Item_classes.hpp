#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_FieldMemoryPopUp_Item

#include "Basic.hpp"

#include "Nicola_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_FieldMemoryPopUp_Item.WB_FieldMemoryPopUp_Item_C
// 0x0008 (0x0330 - 0x0328)
class UWB_FieldMemoryPopUp_Item_C final : public UCommonItemWidget
{
public:
	class UImage*                                 BG;                                                // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_FieldMemoryPopUp_Item_C">();
	}
	static class UWB_FieldMemoryPopUp_Item_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_FieldMemoryPopUp_Item_C>();
	}
};
static_assert(alignof(UWB_FieldMemoryPopUp_Item_C) == 0x000008, "Wrong alignment on UWB_FieldMemoryPopUp_Item_C");
static_assert(sizeof(UWB_FieldMemoryPopUp_Item_C) == 0x000330, "Wrong size on UWB_FieldMemoryPopUp_Item_C");
static_assert(offsetof(UWB_FieldMemoryPopUp_Item_C, BG) == 0x000328, "Member 'UWB_FieldMemoryPopUp_Item_C::BG' has a wrong offset!");

}

