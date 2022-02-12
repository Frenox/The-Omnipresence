// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef THE_OMNIPRESENCE_The_OmnipresenceProjectile_generated_h
#error "The_OmnipresenceProjectile.generated.h already included, missing '#pragma once' in The_OmnipresenceProjectile.h"
#endif
#define THE_OMNIPRESENCE_The_OmnipresenceProjectile_generated_h

#define The_Omnipresence_Source_The_Omnipresence_The_OmnipresenceProjectile_h_15_SPARSE_DATA
#define The_Omnipresence_Source_The_Omnipresence_The_OmnipresenceProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define The_Omnipresence_Source_The_Omnipresence_The_OmnipresenceProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define The_Omnipresence_Source_The_Omnipresence_The_OmnipresenceProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAThe_OmnipresenceProjectile(); \
	friend struct Z_Construct_UClass_AThe_OmnipresenceProjectile_Statics; \
public: \
	DECLARE_CLASS(AThe_OmnipresenceProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/The_Omnipresence"), NO_API) \
	DECLARE_SERIALIZER(AThe_OmnipresenceProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define The_Omnipresence_Source_The_Omnipresence_The_OmnipresenceProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAThe_OmnipresenceProjectile(); \
	friend struct Z_Construct_UClass_AThe_OmnipresenceProjectile_Statics; \
public: \
	DECLARE_CLASS(AThe_OmnipresenceProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/The_Omnipresence"), NO_API) \
	DECLARE_SERIALIZER(AThe_OmnipresenceProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define The_Omnipresence_Source_The_Omnipresence_The_OmnipresenceProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AThe_OmnipresenceProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AThe_OmnipresenceProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AThe_OmnipresenceProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AThe_OmnipresenceProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AThe_OmnipresenceProjectile(AThe_OmnipresenceProjectile&&); \
	NO_API AThe_OmnipresenceProjectile(const AThe_OmnipresenceProjectile&); \
public:


#define The_Omnipresence_Source_The_Omnipresence_The_OmnipresenceProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AThe_OmnipresenceProjectile(AThe_OmnipresenceProjectile&&); \
	NO_API AThe_OmnipresenceProjectile(const AThe_OmnipresenceProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AThe_OmnipresenceProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AThe_OmnipresenceProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AThe_OmnipresenceProjectile)


#define The_Omnipresence_Source_The_Omnipresence_The_OmnipresenceProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AThe_OmnipresenceProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AThe_OmnipresenceProjectile, ProjectileMovement); }


#define The_Omnipresence_Source_The_Omnipresence_The_OmnipresenceProjectile_h_12_PROLOG
#define The_Omnipresence_Source_The_Omnipresence_The_OmnipresenceProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	The_Omnipresence_Source_The_Omnipresence_The_OmnipresenceProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	The_Omnipresence_Source_The_Omnipresence_The_OmnipresenceProjectile_h_15_SPARSE_DATA \
	The_Omnipresence_Source_The_Omnipresence_The_OmnipresenceProjectile_h_15_RPC_WRAPPERS \
	The_Omnipresence_Source_The_Omnipresence_The_OmnipresenceProjectile_h_15_INCLASS \
	The_Omnipresence_Source_The_Omnipresence_The_OmnipresenceProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define The_Omnipresence_Source_The_Omnipresence_The_OmnipresenceProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	The_Omnipresence_Source_The_Omnipresence_The_OmnipresenceProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	The_Omnipresence_Source_The_Omnipresence_The_OmnipresenceProjectile_h_15_SPARSE_DATA \
	The_Omnipresence_Source_The_Omnipresence_The_OmnipresenceProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	The_Omnipresence_Source_The_Omnipresence_The_OmnipresenceProjectile_h_15_INCLASS_NO_PURE_DECLS \
	The_Omnipresence_Source_The_Omnipresence_The_OmnipresenceProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THE_OMNIPRESENCE_API UClass* StaticClass<class AThe_OmnipresenceProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID The_Omnipresence_Source_The_Omnipresence_The_OmnipresenceProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
