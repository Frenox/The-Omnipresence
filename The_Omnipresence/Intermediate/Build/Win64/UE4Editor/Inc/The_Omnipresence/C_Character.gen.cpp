// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "The_Omnipresence/C_Character.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC_Character() {}
// Cross Module References
	THE_OMNIPRESENCE_API UClass* Z_Construct_UClass_AC_Character_NoRegister();
	THE_OMNIPRESENCE_API UClass* Z_Construct_UClass_AC_Character();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_The_Omnipresence();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AC_Character::execMoveRight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveRight(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AC_Character::execMoveForward)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveForward(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AC_Character::execStartMove)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_mvmt);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartMove(Z_Param_mvmt);
		P_NATIVE_END;
	}
	void AC_Character::StaticRegisterNativesAC_Character()
	{
		UClass* Class = AC_Character::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MoveForward", &AC_Character::execMoveForward },
			{ "MoveRight", &AC_Character::execMoveRight },
			{ "StartMove", &AC_Character::execStartMove },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AC_Character_MoveForward_Statics
	{
		struct C_Character_eventMoveForward_Parms
		{
			float value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AC_Character_MoveForward_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(C_Character_eventMoveForward_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC_Character_MoveForward_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC_Character_MoveForward_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC_Character_MoveForward_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movements" },
		{ "ModuleRelativePath", "C_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_Character_MoveForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_Character, nullptr, "MoveForward", nullptr, nullptr, sizeof(C_Character_eventMoveForward_Parms), Z_Construct_UFunction_AC_Character_MoveForward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_Character_MoveForward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AC_Character_MoveForward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_Character_MoveForward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AC_Character_MoveForward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AC_Character_MoveForward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AC_Character_MoveRight_Statics
	{
		struct C_Character_eventMoveRight_Parms
		{
			float value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AC_Character_MoveRight_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(C_Character_eventMoveRight_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC_Character_MoveRight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC_Character_MoveRight_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC_Character_MoveRight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movements" },
		{ "ModuleRelativePath", "C_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_Character_MoveRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_Character, nullptr, "MoveRight", nullptr, nullptr, sizeof(C_Character_eventMoveRight_Parms), Z_Construct_UFunction_AC_Character_MoveRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_Character_MoveRight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AC_Character_MoveRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_Character_MoveRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AC_Character_MoveRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AC_Character_MoveRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AC_Character_StartMove_Statics
	{
		struct C_Character_eventStartMove_Parms
		{
			int32 mvmt;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_mvmt;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AC_Character_StartMove_Statics::NewProp_mvmt = { "mvmt", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(C_Character_eventStartMove_Parms, mvmt), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC_Character_StartMove_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC_Character_StartMove_Statics::NewProp_mvmt,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC_Character_StartMove_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movements" },
		{ "ModuleRelativePath", "C_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_Character_StartMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_Character, nullptr, "StartMove", nullptr, nullptr, sizeof(C_Character_eventStartMove_Parms), Z_Construct_UFunction_AC_Character_StartMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_Character_StartMove_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AC_Character_StartMove_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_Character_StartMove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AC_Character_StartMove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AC_Character_StartMove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AC_Character_NoRegister()
	{
		return AC_Character::StaticClass();
	}
	struct Z_Construct_UClass_AC_Character_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConeIntercation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConeIntercation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hitActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_hitActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AC_Character_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_The_Omnipresence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AC_Character_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AC_Character_MoveForward, "MoveForward" }, // 1319245451
		{ &Z_Construct_UFunction_AC_Character_MoveRight, "MoveRight" }, // 145997273
		{ &Z_Construct_UFunction_AC_Character_StartMove, "StartMove" }, // 529153685
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_Character_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "C_Character.h" },
		{ "ModuleRelativePath", "C_Character.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_Character_Statics::NewProp_ConeIntercation_MetaData[] = {
		{ "Category", "Interaction" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "C_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC_Character_Statics::NewProp_ConeIntercation = { "ConeIntercation", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AC_Character, ConeIntercation), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC_Character_Statics::NewProp_ConeIntercation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_Character_Statics::NewProp_ConeIntercation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_Character_Statics::NewProp_hitActor_MetaData[] = {
		{ "Category", "BlueprintClass" },
		{ "ModuleRelativePath", "C_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC_Character_Statics::NewProp_hitActor = { "hitActor", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AC_Character, hitActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC_Character_Statics::NewProp_hitActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_Character_Statics::NewProp_hitActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AC_Character_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_Character_Statics::NewProp_ConeIntercation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_Character_Statics::NewProp_hitActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AC_Character_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC_Character>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AC_Character_Statics::ClassParams = {
		&AC_Character::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AC_Character_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AC_Character_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AC_Character_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AC_Character_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AC_Character()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AC_Character_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AC_Character, 2183034581);
	template<> THE_OMNIPRESENCE_API UClass* StaticClass<AC_Character>()
	{
		return AC_Character::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AC_Character(Z_Construct_UClass_AC_Character, &AC_Character::StaticClass, TEXT("/Script/The_Omnipresence"), TEXT("AC_Character"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AC_Character);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
