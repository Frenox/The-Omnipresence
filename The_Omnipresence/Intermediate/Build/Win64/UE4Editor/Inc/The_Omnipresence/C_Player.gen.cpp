// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "The_Omnipresence/C_Player.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC_Player() {}
// Cross Module References
	THE_OMNIPRESENCE_API UClass* Z_Construct_UClass_AC_Player_NoRegister();
	THE_OMNIPRESENCE_API UClass* Z_Construct_UClass_AC_Player();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_The_Omnipresence();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void AC_Player::StaticRegisterNativesAC_Player()
	{
	}
	UClass* Z_Construct_UClass_AC_Player_NoRegister()
	{
		return AC_Player::StaticClass();
	}
	struct Z_Construct_UClass_AC_Player_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inventoryManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inventoryManager;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_itemsCollected_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_itemsCollected_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_itemsCollected_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_itemsCollected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hitActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_hitActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AC_Player_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_The_Omnipresence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_Player_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "C_Player.h" },
		{ "ModuleRelativePath", "C_Player.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_Player_Statics::NewProp_MeshPlayer_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "C_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC_Player_Statics::NewProp_MeshPlayer = { "MeshPlayer", nullptr, (EPropertyFlags)0x00100000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AC_Player, MeshPlayer), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC_Player_Statics::NewProp_MeshPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_Player_Statics::NewProp_MeshPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_Player_Statics::NewProp_inventoryManager_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "C_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC_Player_Statics::NewProp_inventoryManager = { "inventoryManager", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AC_Player, inventoryManager), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC_Player_Statics::NewProp_inventoryManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_Player_Statics::NewProp_inventoryManager_MetaData)) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AC_Player_Statics::NewProp_itemsCollected_ValueProp = { "itemsCollected", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AC_Player_Statics::NewProp_itemsCollected_Key_KeyProp = { "itemsCollected_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_Player_Statics::NewProp_itemsCollected_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "C_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AC_Player_Statics::NewProp_itemsCollected = { "itemsCollected", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AC_Player, itemsCollected), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AC_Player_Statics::NewProp_itemsCollected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_Player_Statics::NewProp_itemsCollected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_Player_Statics::NewProp_hitActor_MetaData[] = {
		{ "Category", "BlueprintClass" },
		{ "ModuleRelativePath", "C_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC_Player_Statics::NewProp_hitActor = { "hitActor", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AC_Player, hitActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC_Player_Statics::NewProp_hitActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_Player_Statics::NewProp_hitActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AC_Player_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_Player_Statics::NewProp_MeshPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_Player_Statics::NewProp_inventoryManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_Player_Statics::NewProp_itemsCollected_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_Player_Statics::NewProp_itemsCollected_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_Player_Statics::NewProp_itemsCollected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_Player_Statics::NewProp_hitActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AC_Player_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC_Player>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AC_Player_Statics::ClassParams = {
		&AC_Player::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AC_Player_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AC_Player_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AC_Player_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AC_Player_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AC_Player()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AC_Player_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AC_Player, 2130789328);
	template<> THE_OMNIPRESENCE_API UClass* StaticClass<AC_Player>()
	{
		return AC_Player::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AC_Player(Z_Construct_UClass_AC_Player, &AC_Player::StaticClass, TEXT("/Script/The_Omnipresence"), TEXT("AC_Player"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AC_Player);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
