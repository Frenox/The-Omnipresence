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
	const FCppClassTypeInfoStatic Z_Construct_UClass_AC_Player_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC_Player>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AC_Player_Statics::ClassParams = {
		&AC_Player::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
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
	IMPLEMENT_CLASS(AC_Player, 1469249983);
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
