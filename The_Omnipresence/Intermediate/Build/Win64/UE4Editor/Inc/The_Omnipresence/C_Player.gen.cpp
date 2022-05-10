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
	THE_OMNIPRESENCE_API UScriptStruct* Z_Construct_UScriptStruct_FItemsMeshes();
	UPackage* Z_Construct_UPackage__Script_The_Omnipresence();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	THE_OMNIPRESENCE_API UClass* Z_Construct_UClass_AC_Player_NoRegister();
	THE_OMNIPRESENCE_API UClass* Z_Construct_UClass_AC_Player();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FItemsMeshes>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FItemsMeshes cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FItemsMeshes::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern THE_OMNIPRESENCE_API uint32 Get_Z_Construct_UScriptStruct_FItemsMeshes_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemsMeshes, Z_Construct_UPackage__Script_The_Omnipresence(), TEXT("ItemsMeshes"), sizeof(FItemsMeshes), Get_Z_Construct_UScriptStruct_FItemsMeshes_Hash());
	}
	return Singleton;
}
template<> THE_OMNIPRESENCE_API UScriptStruct* StaticStruct<FItemsMeshes>()
{
	return FItemsMeshes::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FItemsMeshes(FItemsMeshes::StaticStruct, TEXT("/Script/The_Omnipresence"), TEXT("ItemsMeshes"), false, nullptr, nullptr);
static struct FScriptStruct_The_Omnipresence_StaticRegisterNativesFItemsMeshes
{
	FScriptStruct_The_Omnipresence_StaticRegisterNativesFItemsMeshes()
	{
		UScriptStruct::DeferCppStructOps<FItemsMeshes>(FName(TEXT("ItemsMeshes")));
	}
} ScriptStruct_The_Omnipresence_StaticRegisterNativesFItemsMeshes;
	struct Z_Construct_UScriptStruct_FItemsMeshes_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Category;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemsMeshes_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "C_Player.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FItemsMeshes_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemsMeshes>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemsMeshes_Statics::NewProp_Category_MetaData[] = {
		{ "Category", "ItemsMeshes" },
		{ "ModuleRelativePath", "C_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FItemsMeshes_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemsMeshes, Category), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemsMeshes_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemsMeshes_Statics::NewProp_Category_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemsMeshes_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "ItemsMeshes" },
		{ "ModuleRelativePath", "C_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FItemsMeshes_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemsMeshes, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemsMeshes_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemsMeshes_Statics::NewProp_Mesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemsMeshes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemsMeshes_Statics::NewProp_Category,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemsMeshes_Statics::NewProp_Mesh,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemsMeshes_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_The_Omnipresence,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ItemsMeshes",
		sizeof(FItemsMeshes),
		alignof(FItemsMeshes),
		Z_Construct_UScriptStruct_FItemsMeshes_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemsMeshes_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FItemsMeshes_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemsMeshes_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FItemsMeshes()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FItemsMeshes_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_The_Omnipresence();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ItemsMeshes"), sizeof(FItemsMeshes), Get_Z_Construct_UScriptStruct_FItemsMeshes_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FItemsMeshes_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FItemsMeshes_Hash() { return 3175237215U; }
	DEFINE_FUNCTION(AC_Player::execresetLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->resetLevel();
		P_NATIVE_END;
	}
	void AC_Player::StaticRegisterNativesAC_Player()
	{
		UClass* Class = AC_Player::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "resetLevel", &AC_Player::execresetLevel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AC_Player_resetLevel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC_Player_resetLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "C_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_Player_resetLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_Player, nullptr, "resetLevel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AC_Player_resetLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_Player_resetLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AC_Player_resetLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AC_Player_resetLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AC_Player_NoRegister()
	{
		return AC_Player::StaticClass();
	}
	struct Z_Construct_UClass_AC_Player_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshItem;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_missionsManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_missionsManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hitActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_hitActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemsDataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemsDataTable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AC_Player_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_The_Omnipresence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AC_Player_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AC_Player_resetLevel, "resetLevel" }, // 1752123533
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_Player_Statics::NewProp_MeshItem_MetaData[] = {
		{ "Category", "Inventory" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "C_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC_Player_Statics::NewProp_MeshItem = { "MeshItem", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AC_Player, MeshItem), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC_Player_Statics::NewProp_MeshItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_Player_Statics::NewProp_MeshItem_MetaData)) };
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_Player_Statics::NewProp_missionsManager_MetaData[] = {
		{ "Category", "Missions" },
		{ "ModuleRelativePath", "C_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC_Player_Statics::NewProp_missionsManager = { "missionsManager", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AC_Player, missionsManager), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC_Player_Statics::NewProp_missionsManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_Player_Statics::NewProp_missionsManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_Player_Statics::NewProp_hitActor_MetaData[] = {
		{ "Category", "HitActor" },
		{ "ModuleRelativePath", "C_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC_Player_Statics::NewProp_hitActor = { "hitActor", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AC_Player, hitActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC_Player_Statics::NewProp_hitActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_Player_Statics::NewProp_hitActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_Player_Statics::NewProp_ItemsDataTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "C_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC_Player_Statics::NewProp_ItemsDataTable = { "ItemsDataTable", nullptr, (EPropertyFlags)0x0040000000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AC_Player, ItemsDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC_Player_Statics::NewProp_ItemsDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_Player_Statics::NewProp_ItemsDataTable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AC_Player_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_Player_Statics::NewProp_MeshPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_Player_Statics::NewProp_MeshItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_Player_Statics::NewProp_inventoryManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_Player_Statics::NewProp_itemsCollected_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_Player_Statics::NewProp_itemsCollected_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_Player_Statics::NewProp_itemsCollected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_Player_Statics::NewProp_missionsManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_Player_Statics::NewProp_hitActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_Player_Statics::NewProp_ItemsDataTable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AC_Player_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC_Player>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AC_Player_Statics::ClassParams = {
		&AC_Player::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AC_Player_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(AC_Player, 3488902392);
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
