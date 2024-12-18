#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Nicola_Asset_Decal

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Nicola_Asset_Decal.BP_Nicola_Asset_Decal_C
// 0x0050 (0x0270 - 0x0220)
class ABP_Nicola_Asset_Decal_C : public AActor
{
public:
	class UBillboardComponent*                    Billboard;                                         // 0x0220(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDecalComponent*                        Decal;                                             // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            Mesh;                                              // 0x0238(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     MeshMaterial;                                      // 0x0240(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Decal_Material;                                    // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Decal_Location_X;                                  // 0x0250(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Decal_Location_Y;                                  // 0x0254(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Decal_Location_Z;                                  // 0x0258(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Decal_Rotation_X;                                  // 0x025C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Use_Decal_Scale;                                   // 0x0260(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_261[0x3];                                      // 0x0261(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Decal_Scale_X;                                     // 0x0264(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Decal_Scale_Y;                                     // 0x0268(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Nicola_Asset_Decal_C">();
	}
	static class ABP_Nicola_Asset_Decal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Nicola_Asset_Decal_C>();
	}
};
static_assert(alignof(ABP_Nicola_Asset_Decal_C) == 0x000008, "Wrong alignment on ABP_Nicola_Asset_Decal_C");
static_assert(sizeof(ABP_Nicola_Asset_Decal_C) == 0x000270, "Wrong size on ABP_Nicola_Asset_Decal_C");
static_assert(offsetof(ABP_Nicola_Asset_Decal_C, Billboard) == 0x000220, "Member 'ABP_Nicola_Asset_Decal_C::Billboard' has a wrong offset!");
static_assert(offsetof(ABP_Nicola_Asset_Decal_C, StaticMesh) == 0x000228, "Member 'ABP_Nicola_Asset_Decal_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_Nicola_Asset_Decal_C, Decal) == 0x000230, "Member 'ABP_Nicola_Asset_Decal_C::Decal' has a wrong offset!");
static_assert(offsetof(ABP_Nicola_Asset_Decal_C, Mesh) == 0x000238, "Member 'ABP_Nicola_Asset_Decal_C::Mesh' has a wrong offset!");
static_assert(offsetof(ABP_Nicola_Asset_Decal_C, MeshMaterial) == 0x000240, "Member 'ABP_Nicola_Asset_Decal_C::MeshMaterial' has a wrong offset!");
static_assert(offsetof(ABP_Nicola_Asset_Decal_C, Decal_Material) == 0x000248, "Member 'ABP_Nicola_Asset_Decal_C::Decal_Material' has a wrong offset!");
static_assert(offsetof(ABP_Nicola_Asset_Decal_C, Decal_Location_X) == 0x000250, "Member 'ABP_Nicola_Asset_Decal_C::Decal_Location_X' has a wrong offset!");
static_assert(offsetof(ABP_Nicola_Asset_Decal_C, Decal_Location_Y) == 0x000254, "Member 'ABP_Nicola_Asset_Decal_C::Decal_Location_Y' has a wrong offset!");
static_assert(offsetof(ABP_Nicola_Asset_Decal_C, Decal_Location_Z) == 0x000258, "Member 'ABP_Nicola_Asset_Decal_C::Decal_Location_Z' has a wrong offset!");
static_assert(offsetof(ABP_Nicola_Asset_Decal_C, Decal_Rotation_X) == 0x00025C, "Member 'ABP_Nicola_Asset_Decal_C::Decal_Rotation_X' has a wrong offset!");
static_assert(offsetof(ABP_Nicola_Asset_Decal_C, Use_Decal_Scale) == 0x000260, "Member 'ABP_Nicola_Asset_Decal_C::Use_Decal_Scale' has a wrong offset!");
static_assert(offsetof(ABP_Nicola_Asset_Decal_C, Decal_Scale_X) == 0x000264, "Member 'ABP_Nicola_Asset_Decal_C::Decal_Scale_X' has a wrong offset!");
static_assert(offsetof(ABP_Nicola_Asset_Decal_C, Decal_Scale_Y) == 0x000268, "Member 'ABP_Nicola_Asset_Decal_C::Decal_Scale_Y' has a wrong offset!");

}

