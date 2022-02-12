// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "The_Omnipresence/The_OmnipresenceGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThe_OmnipresenceGameMode() {}
// Cross Module References
	THE_OMNIPRESENCE_API UClass* Z_Construct_UClass_AThe_OmnipresenceGameMode_NoRegister();
	THE_OMNIPRESENCE_API UClass* Z_Construct_UClass_AThe_OmnipresenceGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_The_Omnipresence();
// End Cross Module References
	void AThe_OmnipresenceGameMode::StaticRegisterNativesAThe_OmnipresenceGameMode()
	{
	}
	UClass* Z_Construct_UClass_AThe_OmnipresenceGameMode_NoRegister()
	{
		return AThe_OmnipresenceGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AThe_OmnipresenceGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AThe_OmnipresenceGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_The_Omnipresence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThe_OmnipresenceGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "The_OmnipresenceGameMode.h" },
		{ "ModuleRelativePath", "The_OmnipresenceGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AThe_OmnipresenceGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AThe_OmnipresenceGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AThe_OmnipresenceGameMode_Statics::ClassParams = {
		&AThe_OmnipresenceGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AThe_OmnipresenceGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AThe_OmnipresenceGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AThe_OmnipresenceGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AThe_OmnipresenceGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AThe_OmnipresenceGameMode, 2673333869);
	template<> THE_OMNIPRESENCE_API UClass* StaticClass<AThe_OmnipresenceGameMode>()
	{
		return AThe_OmnipresenceGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AThe_OmnipresenceGameMode(Z_Construct_UClass_AThe_OmnipresenceGameMode, &AThe_OmnipresenceGameMode::StaticClass, TEXT("/Script/The_Omnipresence"), TEXT("AThe_OmnipresenceGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AThe_OmnipresenceGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
