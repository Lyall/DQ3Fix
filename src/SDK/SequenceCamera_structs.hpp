#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SequenceCamera

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum SequenceCamera.EBlendCoordinate
// NumValues: 0x0004
enum class EBlendCoordinate : uint8
{
	Auto                                     = 0,
	AroundActor                              = 1,
	World                                    = 2,
	EBlendCoordinate_MAX                     = 3,
};

// Enum SequenceCamera.ELookatTrackingRotateBase
// NumValues: 0x0003
enum class ELookatTrackingRotateBase : uint8
{
	CameraActor                              = 0,
	CameraComponent                          = 1,
	ELookatTrackingRotateBase_MAX            = 2,
};

// Enum SequenceCamera.ESequenceCameraForward
// NumValues: 0x0008
enum class ESequenceCameraForward : uint8
{
	Attacker                                 = 0,
	Defender                                 = 1,
	AttackerToDefender                       = 2,
	AttackerToDefenderYaw                    = 3,
	OtherActor                               = 4,
	World                                    = 5,
	AllAreaActor                             = 6,
	ESequenceCameraForward_MAX               = 7,
};

// Enum SequenceCamera.ESequenceCameraLocation
// NumValues: 0x0006
enum class ESequenceCameraLocation : uint8
{
	Attacker                                 = 0,
	Defender                                 = 1,
	Center                                   = 2,
	OtherActor                               = 3,
	AllAreaActor                             = 4,
	ESequenceCameraLocation_MAX              = 5,
};

// ScriptStruct SequenceCamera.SequenceCameraTargetInfo
// 0x0028 (0x0028 - 0x0000)
struct FSequenceCameraTargetInfo final
{
public:
	class AActor*                                 TargetActor;                                       // 0x0000(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                targetLocation;                                    // 0x0008(0x000C)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                targetForward;                                     // 0x0014(0x000C)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         targetRadius;                                      // 0x0020(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bValid;                                            // 0x0024(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_25[0x3];                                       // 0x0025(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FSequenceCameraTargetInfo) == 0x000008, "Wrong alignment on FSequenceCameraTargetInfo");
static_assert(sizeof(FSequenceCameraTargetInfo) == 0x000028, "Wrong size on FSequenceCameraTargetInfo");
static_assert(offsetof(FSequenceCameraTargetInfo, TargetActor) == 0x000000, "Member 'FSequenceCameraTargetInfo::TargetActor' has a wrong offset!");
static_assert(offsetof(FSequenceCameraTargetInfo, targetLocation) == 0x000008, "Member 'FSequenceCameraTargetInfo::targetLocation' has a wrong offset!");
static_assert(offsetof(FSequenceCameraTargetInfo, targetForward) == 0x000014, "Member 'FSequenceCameraTargetInfo::targetForward' has a wrong offset!");
static_assert(offsetof(FSequenceCameraTargetInfo, targetRadius) == 0x000020, "Member 'FSequenceCameraTargetInfo::targetRadius' has a wrong offset!");
static_assert(offsetof(FSequenceCameraTargetInfo, bValid) == 0x000024, "Member 'FSequenceCameraTargetInfo::bValid' has a wrong offset!");

// ScriptStruct SequenceCamera.SequenceCameraInfo
// 0x00B8 (0x00B8 - 0x0000)
struct FSequenceCameraInfo final
{
public:
	class ULevelSequence*                         Sequence;                                          // 0x0000(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSequenceCameraTargetInfo              attackerInfo;                                      // 0x0008(0x0028)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FSequenceCameraTargetInfo              defenderInfo;                                      // 0x0030(0x0028)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FSequenceCameraTargetInfo              otherInfo;                                         // 0x0058(0x0028)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FSequenceCameraTargetInfo              allAreaInfo;                                       // 0x0080(0x0028)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                flipVector;                                        // 0x00A8(0x000C)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         PlayRate;                                          // 0x00B4(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSequenceCameraInfo) == 0x000008, "Wrong alignment on FSequenceCameraInfo");
static_assert(sizeof(FSequenceCameraInfo) == 0x0000B8, "Wrong size on FSequenceCameraInfo");
static_assert(offsetof(FSequenceCameraInfo, Sequence) == 0x000000, "Member 'FSequenceCameraInfo::Sequence' has a wrong offset!");
static_assert(offsetof(FSequenceCameraInfo, attackerInfo) == 0x000008, "Member 'FSequenceCameraInfo::attackerInfo' has a wrong offset!");
static_assert(offsetof(FSequenceCameraInfo, defenderInfo) == 0x000030, "Member 'FSequenceCameraInfo::defenderInfo' has a wrong offset!");
static_assert(offsetof(FSequenceCameraInfo, otherInfo) == 0x000058, "Member 'FSequenceCameraInfo::otherInfo' has a wrong offset!");
static_assert(offsetof(FSequenceCameraInfo, allAreaInfo) == 0x000080, "Member 'FSequenceCameraInfo::allAreaInfo' has a wrong offset!");
static_assert(offsetof(FSequenceCameraInfo, flipVector) == 0x0000A8, "Member 'FSequenceCameraInfo::flipVector' has a wrong offset!");
static_assert(offsetof(FSequenceCameraInfo, PlayRate) == 0x0000B4, "Member 'FSequenceCameraInfo::PlayRate' has a wrong offset!");

}

