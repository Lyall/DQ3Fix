#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_Common_PageIcon

#include "Basic.hpp"

#include "Nicola_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_Common_PageIcon.WB_Common_PageIcon_C
// 0x0038 (0x03E8 - 0x03B0)
class UWB_Common_PageIcon_C final : public UCommonWindowWidget
{
public:
	class UWidgetAnimation*                       Push_Key_R;                                        // 0x03B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Push_Key_L;                                        // 0x03B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Push_R;                                            // 0x03C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Push_L;                                            // 0x03C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWB_Common_ButtonSet_C*                 ButtonLeft;                                        // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Common_ButtonSet_C*                 ButtonRight;                                       // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 WindowBG;                                          // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_Common_PageIcon_C">();
	}
	static class UWB_Common_PageIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_Common_PageIcon_C>();
	}
};
static_assert(alignof(UWB_Common_PageIcon_C) == 0x000008, "Wrong alignment on UWB_Common_PageIcon_C");
static_assert(sizeof(UWB_Common_PageIcon_C) == 0x0003E8, "Wrong size on UWB_Common_PageIcon_C");
static_assert(offsetof(UWB_Common_PageIcon_C, Push_Key_R) == 0x0003B0, "Member 'UWB_Common_PageIcon_C::Push_Key_R' has a wrong offset!");
static_assert(offsetof(UWB_Common_PageIcon_C, Push_Key_L) == 0x0003B8, "Member 'UWB_Common_PageIcon_C::Push_Key_L' has a wrong offset!");
static_assert(offsetof(UWB_Common_PageIcon_C, Push_R) == 0x0003C0, "Member 'UWB_Common_PageIcon_C::Push_R' has a wrong offset!");
static_assert(offsetof(UWB_Common_PageIcon_C, Push_L) == 0x0003C8, "Member 'UWB_Common_PageIcon_C::Push_L' has a wrong offset!");
static_assert(offsetof(UWB_Common_PageIcon_C, ButtonLeft) == 0x0003D0, "Member 'UWB_Common_PageIcon_C::ButtonLeft' has a wrong offset!");
static_assert(offsetof(UWB_Common_PageIcon_C, ButtonRight) == 0x0003D8, "Member 'UWB_Common_PageIcon_C::ButtonRight' has a wrong offset!");
static_assert(offsetof(UWB_Common_PageIcon_C, WindowBG) == 0x0003E0, "Member 'UWB_Common_PageIcon_C::WindowBG' has a wrong offset!");

}
