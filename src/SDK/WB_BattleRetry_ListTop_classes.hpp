#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_BattleRetry_ListTop

#include "Basic.hpp"

#include "Nicola_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_BattleRetry_ListTop.WB_BattleRetry_ListTop_C
// 0x0028 (0x03D8 - 0x03B0)
class UWB_BattleRetry_ListTop_C final : public UCommonListWidget
{
public:
	class UWB_Title_ListItem_C*                   Zero0;                                             // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Title_ListItem_C*                   Zero1;                                             // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Title_ListItem_C*                   Zero2;                                             // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Title_ListItem_C*                   Zero3;                                             // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 WindowBG;                                          // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_BattleRetry_ListTop_C">();
	}
	static class UWB_BattleRetry_ListTop_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_BattleRetry_ListTop_C>();
	}
};
static_assert(alignof(UWB_BattleRetry_ListTop_C) == 0x000008, "Wrong alignment on UWB_BattleRetry_ListTop_C");
static_assert(sizeof(UWB_BattleRetry_ListTop_C) == 0x0003D8, "Wrong size on UWB_BattleRetry_ListTop_C");
static_assert(offsetof(UWB_BattleRetry_ListTop_C, Zero0) == 0x0003B0, "Member 'UWB_BattleRetry_ListTop_C::Zero0' has a wrong offset!");
static_assert(offsetof(UWB_BattleRetry_ListTop_C, Zero1) == 0x0003B8, "Member 'UWB_BattleRetry_ListTop_C::Zero1' has a wrong offset!");
static_assert(offsetof(UWB_BattleRetry_ListTop_C, Zero2) == 0x0003C0, "Member 'UWB_BattleRetry_ListTop_C::Zero2' has a wrong offset!");
static_assert(offsetof(UWB_BattleRetry_ListTop_C, Zero3) == 0x0003C8, "Member 'UWB_BattleRetry_ListTop_C::Zero3' has a wrong offset!");
static_assert(offsetof(UWB_BattleRetry_ListTop_C, WindowBG) == 0x0003D0, "Member 'UWB_BattleRetry_ListTop_C::WindowBG' has a wrong offset!");

}
