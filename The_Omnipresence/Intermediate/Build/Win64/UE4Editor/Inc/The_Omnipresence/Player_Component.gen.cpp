// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "The_Omnipresence/Player_Component.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayer_Component() {}
// Cross Module References
	THE_OMNIPRESENCE_API UClass* Z_Construct_UClass_UPlayer_Component_NoRegister();
	THE_OMNIPRESENCE_API UClass* Z_Construct_UClass_UPlayer_Component();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_The_Omnipresence();
// End Cross Module References
	void UPlayer_Component::StaticRegisterNativesUPlayer_Component()
	{
	}
	UClass* Z_Construct_UClass_UPlayer_Component_NoRegister()
	{
		return UPlayer_Component::StaticClass();
	}
	struct Z_Construct_UClass_UPlayer_Component_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayer_Component_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_The_Omnipresence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayer_Component_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Player_Component.h" },
		{ "ModuleRelativePath", "Player_Component.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayer_Component_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayer_Component>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayer_Component_Statics::ClassParams = {
		&UPlayer_Component::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayer_Component_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayer_Component_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayer_Component()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayer_Component_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayer_Component, 3328940879);
	template<> THE_OMNIPRESENCE_API UClass* StaticClass<UPlayer_Component>()
	{
		return UPlayer_Component::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayer_Component(Z_Construct_UClass_UPlayer_Component, &UPlayer_Component::StaticClass, TEXT("/Script/The_Omnipresence"), TEXT("UPlayer_Component"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayer_Component);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
