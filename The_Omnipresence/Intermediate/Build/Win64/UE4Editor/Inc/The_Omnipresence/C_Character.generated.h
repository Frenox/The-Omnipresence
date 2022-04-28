// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THE_OMNIPRESENCE_C_Character_generated_h
#error "C_Character.generated.h already included, missing '#pragma once' in C_Character.h"
#endif
#define THE_OMNIPRESENCE_C_Character_generated_h

#define The_Omnipresence_Source_The_Omnipresence_C_Character_h_12_SPARSE_DATA
#define The_Omnipresence_Source_The_Omnipresence_C_Character_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMoveRight); \
	DECLARE_FUNCTION(execMoveForward);


#define The_Omnipresence_Source_The_Omnipresence_C_Character_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMoveRight); \
	DECLARE_FUNCTION(execMoveForward);


#define The_Omnipresence_Source_The_Omnipresence_C_Character_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAC_Character(); \
	friend struct Z_Construct_UClass_AC_Character_Statics; \
public: \
	DECLARE_CLASS(AC_Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/The_Omnipresence"), NO_API) \
	DECLARE_SERIALIZER(AC_Character)


#define The_Omnipresence_Source_The_Omnipresence_C_Character_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAC_Character(); \
	friend struct Z_Construct_UClass_AC_Character_Statics; \
public: \
	DECLARE_CLASS(AC_Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/The_Omnipresence"), NO_API) \
	DECLARE_SERIALIZER(AC_Character)


#define The_Omnipresence_Source_The_Omnipresence_C_Character_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AC_Character(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AC_Character) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AC_Character); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AC_Character); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AC_Character(AC_Character&&); \
	NO_API AC_Character(const AC_Character&); \
public:


#define The_Omnipresence_Source_The_Omnipresence_C_Character_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AC_Character(AC_Character&&); \
	NO_API AC_Character(const AC_Character&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AC_Character); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AC_Character); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AC_Character)


#define The_Omnipresence_Source_The_Omnipresence_C_Character_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ConeIntercation() { return STRUCT_OFFSET(AC_Character, ConeIntercation); } \
	FORCEINLINE static uint32 __PPO__hitActor() { return STRUCT_OFFSET(AC_Character, hitActor); }


#define The_Omnipresence_Source_The_Omnipresence_C_Character_h_9_PROLOG
#define The_Omnipresence_Source_The_Omnipresence_C_Character_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	The_Omnipresence_Source_The_Omnipresence_C_Character_h_12_PRIVATE_PROPERTY_OFFSET \
	The_Omnipresence_Source_The_Omnipresence_C_Character_h_12_SPARSE_DATA \
	The_Omnipresence_Source_The_Omnipresence_C_Character_h_12_RPC_WRAPPERS \
	The_Omnipresence_Source_The_Omnipresence_C_Character_h_12_INCLASS \
	The_Omnipresence_Source_The_Omnipresence_C_Character_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define The_Omnipresence_Source_The_Omnipresence_C_Character_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	The_Omnipresence_Source_The_Omnipresence_C_Character_h_12_PRIVATE_PROPERTY_OFFSET \
	The_Omnipresence_Source_The_Omnipresence_C_Character_h_12_SPARSE_DATA \
	The_Omnipresence_Source_The_Omnipresence_C_Character_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	The_Omnipresence_Source_The_Omnipresence_C_Character_h_12_INCLASS_NO_PURE_DECLS \
	The_Omnipresence_Source_The_Omnipresence_C_Character_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THE_OMNIPRESENCE_API UClass* StaticClass<class AC_Character>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID The_Omnipresence_Source_The_Omnipresence_C_Character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
