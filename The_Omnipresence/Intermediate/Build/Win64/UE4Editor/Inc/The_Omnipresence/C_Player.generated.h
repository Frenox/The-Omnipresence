// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THE_OMNIPRESENCE_C_Player_generated_h
#error "C_Player.generated.h already included, missing '#pragma once' in C_Player.h"
#endif
#define THE_OMNIPRESENCE_C_Player_generated_h

#define The_Omnipresence_Source_The_Omnipresence_C_Player_h_15_SPARSE_DATA
#define The_Omnipresence_Source_The_Omnipresence_C_Player_h_15_RPC_WRAPPERS
#define The_Omnipresence_Source_The_Omnipresence_C_Player_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define The_Omnipresence_Source_The_Omnipresence_C_Player_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAC_Player(); \
	friend struct Z_Construct_UClass_AC_Player_Statics; \
public: \
	DECLARE_CLASS(AC_Player, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/The_Omnipresence"), NO_API) \
	DECLARE_SERIALIZER(AC_Player)


#define The_Omnipresence_Source_The_Omnipresence_C_Player_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAC_Player(); \
	friend struct Z_Construct_UClass_AC_Player_Statics; \
public: \
	DECLARE_CLASS(AC_Player, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/The_Omnipresence"), NO_API) \
	DECLARE_SERIALIZER(AC_Player)


#define The_Omnipresence_Source_The_Omnipresence_C_Player_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AC_Player(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AC_Player) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AC_Player); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AC_Player); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AC_Player(AC_Player&&); \
	NO_API AC_Player(const AC_Player&); \
public:


#define The_Omnipresence_Source_The_Omnipresence_C_Player_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AC_Player(AC_Player&&); \
	NO_API AC_Player(const AC_Player&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AC_Player); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AC_Player); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AC_Player)


#define The_Omnipresence_Source_The_Omnipresence_C_Player_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__hitActor() { return STRUCT_OFFSET(AC_Player, hitActor); }


#define The_Omnipresence_Source_The_Omnipresence_C_Player_h_12_PROLOG
#define The_Omnipresence_Source_The_Omnipresence_C_Player_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	The_Omnipresence_Source_The_Omnipresence_C_Player_h_15_PRIVATE_PROPERTY_OFFSET \
	The_Omnipresence_Source_The_Omnipresence_C_Player_h_15_SPARSE_DATA \
	The_Omnipresence_Source_The_Omnipresence_C_Player_h_15_RPC_WRAPPERS \
	The_Omnipresence_Source_The_Omnipresence_C_Player_h_15_INCLASS \
	The_Omnipresence_Source_The_Omnipresence_C_Player_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define The_Omnipresence_Source_The_Omnipresence_C_Player_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	The_Omnipresence_Source_The_Omnipresence_C_Player_h_15_PRIVATE_PROPERTY_OFFSET \
	The_Omnipresence_Source_The_Omnipresence_C_Player_h_15_SPARSE_DATA \
	The_Omnipresence_Source_The_Omnipresence_C_Player_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	The_Omnipresence_Source_The_Omnipresence_C_Player_h_15_INCLASS_NO_PURE_DECLS \
	The_Omnipresence_Source_The_Omnipresence_C_Player_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THE_OMNIPRESENCE_API UClass* StaticClass<class AC_Player>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID The_Omnipresence_Source_The_Omnipresence_C_Player_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
