#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_MiniMapMenu_WindowMain

#include "Basic.hpp"

#include "Nicola_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_MiniMapMenu_WindowMain.WB_MiniMapMenu_WindowMain_C
// 0x0018 (0x03C8 - 0x03B0)
class UWB_MiniMapMenu_WindowMain_C final : public UCommonWindowWidget
{
public:
	class UImage*                                 Frame;                                             // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImagePlayer;                                       // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_MiniMapMenu_WindowDrawMap_C*        WindowDrawMap;                                     // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_MiniMapMenu_WindowMain_C">();
	}
	static class UWB_MiniMapMenu_WindowMain_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_MiniMapMenu_WindowMain_C>();
	}
};
static_assert(alignof(UWB_MiniMapMenu_WindowMain_C) == 0x000008, "Wrong alignment on UWB_MiniMapMenu_WindowMain_C");
static_assert(sizeof(UWB_MiniMapMenu_WindowMain_C) == 0x0003C8, "Wrong size on UWB_MiniMapMenu_WindowMain_C");
static_assert(offsetof(UWB_MiniMapMenu_WindowMain_C, Frame) == 0x0003B0, "Member 'UWB_MiniMapMenu_WindowMain_C::Frame' has a wrong offset!");
static_assert(offsetof(UWB_MiniMapMenu_WindowMain_C, ImagePlayer) == 0x0003B8, "Member 'UWB_MiniMapMenu_WindowMain_C::ImagePlayer' has a wrong offset!");
static_assert(offsetof(UWB_MiniMapMenu_WindowMain_C, WindowDrawMap) == 0x0003C0, "Member 'UWB_MiniMapMenu_WindowMain_C::WindowDrawMap' has a wrong offset!");

}

