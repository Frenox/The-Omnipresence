// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "The_Omnipresence/C_HouseDoor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC_HouseDoor() {}
// Cross Module References
	THE_OMNIPRESENCE_API UClass* Z_Construct_UClass_AC_HouseDoor_NoRegister();
	THE_OMNIPRESENCE_API UClass* Z_Construct_UClass_AC_HouseDoor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_The_Omnipresence();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AC_HouseDoor::StaticRegisterNativesAC_HouseDoor()
	{
	}
	UClass* Z_Construct_UClass_AC_HouseDoor_NoRegister()
	{
		return AC_HouseDoor::StaticClass();
	}
	struct Z_Construct_UClass_AC_HouseDoor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoorMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DoorMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandleHolderMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HandleHolderMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandleMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HandleMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AC_HouseDoor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_The_Omnipresence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_HouseDoor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "C_HouseDoor.h" },
		{ "ModuleRelativePath", "C_HouseDoor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_HouseDoor_Statics::NewProp_DoorMesh_MetaData[] = {
		{ "Category", "C_HouseDoor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "C_HouseDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC_HouseDoor_Statics::NewProp_DoorMesh = { "DoorMesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AC_HouseDoor, DoorMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC_HouseDoor_Statics::NewProp_DoorMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_HouseDoor_Statics::NewProp_DoorMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_HouseDoor_Statics::NewProp_HandleHolderMesh_MetaData[] = {
		{ "Category", "C_HouseDoor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "C_HouseDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC_HouseDoor_Statics::NewProp_HandleHolderMesh = { "HandleHolderMesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AC_HouseDoor, HandleHolderMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC_HouseDoor_Statics::NewProp_HandleHolderMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_HouseDoor_Statics::NewProp_HandleHolderMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_HouseDoor_Statics::NewProp_HandleMesh_MetaData[] = {
		{ "Category", "C_HouseDoor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "C_HouseDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC_HouseDoor_Statics::NewProp_HandleMesh = { "HandleMesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AC_HouseDoor, HandleMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC_HouseDoor_Statics::NewProp_HandleMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_HouseDoor_Statics::NewProp_HandleMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AC_HouseDoor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_HouseDoor_Statics::NewProp_DoorMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_HouseDoor_Statics::NewProp_HandleHolderMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_HouseDoor_Statics::NewProp_HandleMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AC_HouseDoor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC_HouseDoor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AC_HouseDoor_Statics::ClassParams = {
		&AC_HouseDoor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AC_HouseDoor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AC_HouseDoor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AC_HouseDoor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AC_HouseDoor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AC_HouseDoor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AC_HouseDoor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AC_HouseDoor, 299900054);
	template<> THE_OMNIPRESENCE_API UClass* StaticClass<AC_HouseDoor>()
	{
		return AC_HouseDoor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AC_HouseDoor(Z_Construct_UClass_AC_HouseDoor, &AC_HouseDoor::StaticClass, TEXT("/Script/The_Omnipresence"), TEXT("AC_HouseDoor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AC_HouseDoor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
