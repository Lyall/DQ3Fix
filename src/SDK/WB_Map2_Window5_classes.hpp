#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_Map2_Window5

#include "Basic.hpp"

#include "Nicola_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_Map2_Window5.WB_Map2_Window5_C
// 0x0030 (0x03E0 - 0x03B0)
class UWB_Map2_Window5_C final : public UCommonWindowWidget
{
public:
	class UWidgetAnimation*                       Push_R;                                            // 0x03B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Push_L;                                            // 0x03B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 BG;                                                // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Common_ButtonSet_C*                 ButtonLeft;                                        // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Common_ButtonSet_C*                 ButtonRight;                                       // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ItemIcon;                                          // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_Map2_Window5_C">();
	}
	static class UWB_Map2_Window5_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_Map2_Window5_C>();
	}
};
static_assert(alignof(UWB_Map2_Window5_C) == 0x000008, "Wrong alignment on UWB_Map2_Window5_C");
static_assert(sizeof(UWB_Map2_Window5_C) == 0x0003E0, "Wrong size on UWB_Map2_Window5_C");
static_assert(offsetof(UWB_Map2_Window5_C, Push_R) == 0x0003B0, "Member 'UWB_Map2_Window5_C::Push_R' has a wrong offset!");
static_assert(offsetof(UWB_Map2_Window5_C, Push_L) == 0x0003B8, "Member 'UWB_Map2_Window5_C::Push_L' has a wrong offset!");
static_assert(offsetof(UWB_Map2_Window5_C, BG) == 0x0003C0, "Member 'UWB_Map2_Window5_C::BG' has a wrong offset!");
static_assert(offsetof(UWB_Map2_Window5_C, ButtonLeft) == 0x0003C8, "Member 'UWB_Map2_Window5_C::ButtonLeft' has a wrong offset!");
static_assert(offsetof(UWB_Map2_Window5_C, ButtonRight) == 0x0003D0, "Member 'UWB_Map2_Window5_C::ButtonRight' has a wrong offset!");
static_assert(offsetof(UWB_Map2_Window5_C, ItemIcon) == 0x0003D8, "Member 'UWB_Map2_Window5_C::ItemIcon' has a wrong offset!");

}

