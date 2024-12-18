#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_MBR_Entry_Root

#include "Basic.hpp"

#include "Nicola_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_MBR_Entry_Root.WB_MBR_Entry_Root_C
// 0x0060 (0x0420 - 0x03C0)
class UWB_MBR_Entry_Root_C final : public UCommonRootWidget
{
public:
	class UWB_MBR_Entry_YesNoList_C*              EntryList;                                         // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_MBR_Entry_Window3_C*                EntryWindow;                                       // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_MBR_Zoo_List1_C*                    MonsterList;                                       // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_MBR_Zoo_Window1_C*                  MonsterWindow1;                                    // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_MBR_Zoo_Window2_C*                  MonsterWindow2;                                    // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_MBR_Zoo_Window3_C*                  MonsterWindow3;                                    // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_MBR_Entry_List2_C*                  PartyList;                                         // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Common_PageIcon_C*                  PartyWindow1;                                      // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_MBR_Entry_Window2_C*                PartyWindow2;                                      // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_MBR_Entry_List1_C*                  RankList;                                          // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_MBR_Entry_Window1_C*                RankWindow;                                        // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Common_PageIcon_C*                  Sort;                                              // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_MBR_Entry_Root_C">();
	}
	static class UWB_MBR_Entry_Root_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_MBR_Entry_Root_C>();
	}
};
static_assert(alignof(UWB_MBR_Entry_Root_C) == 0x000008, "Wrong alignment on UWB_MBR_Entry_Root_C");
static_assert(sizeof(UWB_MBR_Entry_Root_C) == 0x000420, "Wrong size on UWB_MBR_Entry_Root_C");
static_assert(offsetof(UWB_MBR_Entry_Root_C, EntryList) == 0x0003C0, "Member 'UWB_MBR_Entry_Root_C::EntryList' has a wrong offset!");
static_assert(offsetof(UWB_MBR_Entry_Root_C, EntryWindow) == 0x0003C8, "Member 'UWB_MBR_Entry_Root_C::EntryWindow' has a wrong offset!");
static_assert(offsetof(UWB_MBR_Entry_Root_C, MonsterList) == 0x0003D0, "Member 'UWB_MBR_Entry_Root_C::MonsterList' has a wrong offset!");
static_assert(offsetof(UWB_MBR_Entry_Root_C, MonsterWindow1) == 0x0003D8, "Member 'UWB_MBR_Entry_Root_C::MonsterWindow1' has a wrong offset!");
static_assert(offsetof(UWB_MBR_Entry_Root_C, MonsterWindow2) == 0x0003E0, "Member 'UWB_MBR_Entry_Root_C::MonsterWindow2' has a wrong offset!");
static_assert(offsetof(UWB_MBR_Entry_Root_C, MonsterWindow3) == 0x0003E8, "Member 'UWB_MBR_Entry_Root_C::MonsterWindow3' has a wrong offset!");
static_assert(offsetof(UWB_MBR_Entry_Root_C, PartyList) == 0x0003F0, "Member 'UWB_MBR_Entry_Root_C::PartyList' has a wrong offset!");
static_assert(offsetof(UWB_MBR_Entry_Root_C, PartyWindow1) == 0x0003F8, "Member 'UWB_MBR_Entry_Root_C::PartyWindow1' has a wrong offset!");
static_assert(offsetof(UWB_MBR_Entry_Root_C, PartyWindow2) == 0x000400, "Member 'UWB_MBR_Entry_Root_C::PartyWindow2' has a wrong offset!");
static_assert(offsetof(UWB_MBR_Entry_Root_C, RankList) == 0x000408, "Member 'UWB_MBR_Entry_Root_C::RankList' has a wrong offset!");
static_assert(offsetof(UWB_MBR_Entry_Root_C, RankWindow) == 0x000410, "Member 'UWB_MBR_Entry_Root_C::RankWindow' has a wrong offset!");
static_assert(offsetof(UWB_MBR_Entry_Root_C, Sort) == 0x000418, "Member 'UWB_MBR_Entry_Root_C::Sort' has a wrong offset!");

}

