// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMBAT_CombatGameMode_generated_h
#error "CombatGameMode.generated.h already included, missing '#pragma once' in CombatGameMode.h"
#endif
#define COMBAT_CombatGameMode_generated_h

#define Combat_Source_Combat_CombatGameMode_h_12_SPARSE_DATA
#define Combat_Source_Combat_CombatGameMode_h_12_RPC_WRAPPERS
#define Combat_Source_Combat_CombatGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Combat_Source_Combat_CombatGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACombatGameMode(); \
	friend struct Z_Construct_UClass_ACombatGameMode_Statics; \
public: \
	DECLARE_CLASS(ACombatGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Combat"), COMBAT_API) \
	DECLARE_SERIALIZER(ACombatGameMode)


#define Combat_Source_Combat_CombatGameMode_h_12_INCLASS \
private: \
	static void StaticRegisterNativesACombatGameMode(); \
	friend struct Z_Construct_UClass_ACombatGameMode_Statics; \
public: \
	DECLARE_CLASS(ACombatGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Combat"), COMBAT_API) \
	DECLARE_SERIALIZER(ACombatGameMode)


#define Combat_Source_Combat_CombatGameMode_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COMBAT_API ACombatGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACombatGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMBAT_API, ACombatGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACombatGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	COMBAT_API ACombatGameMode(ACombatGameMode&&); \
	COMBAT_API ACombatGameMode(const ACombatGameMode&); \
public:


#define Combat_Source_Combat_CombatGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	COMBAT_API ACombatGameMode(ACombatGameMode&&); \
	COMBAT_API ACombatGameMode(const ACombatGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMBAT_API, ACombatGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACombatGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACombatGameMode)


#define Combat_Source_Combat_CombatGameMode_h_12_PRIVATE_PROPERTY_OFFSET
#define Combat_Source_Combat_CombatGameMode_h_9_PROLOG
#define Combat_Source_Combat_CombatGameMode_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Combat_Source_Combat_CombatGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	Combat_Source_Combat_CombatGameMode_h_12_SPARSE_DATA \
	Combat_Source_Combat_CombatGameMode_h_12_RPC_WRAPPERS \
	Combat_Source_Combat_CombatGameMode_h_12_INCLASS \
	Combat_Source_Combat_CombatGameMode_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Combat_Source_Combat_CombatGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Combat_Source_Combat_CombatGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	Combat_Source_Combat_CombatGameMode_h_12_SPARSE_DATA \
	Combat_Source_Combat_CombatGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Combat_Source_Combat_CombatGameMode_h_12_INCLASS_NO_PURE_DECLS \
	Combat_Source_Combat_CombatGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMBAT_API UClass* StaticClass<class ACombatGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Combat_Source_Combat_CombatGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
