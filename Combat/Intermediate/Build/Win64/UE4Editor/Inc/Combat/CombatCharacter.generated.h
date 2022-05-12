// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMBAT_CombatCharacter_generated_h
#error "CombatCharacter.generated.h already included, missing '#pragma once' in CombatCharacter.h"
#endif
#define COMBAT_CombatCharacter_generated_h

#define Combat_Source_Combat_CombatCharacter_h_12_SPARSE_DATA
#define Combat_Source_Combat_CombatCharacter_h_12_RPC_WRAPPERS
#define Combat_Source_Combat_CombatCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Combat_Source_Combat_CombatCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACombatCharacter(); \
	friend struct Z_Construct_UClass_ACombatCharacter_Statics; \
public: \
	DECLARE_CLASS(ACombatCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Combat"), NO_API) \
	DECLARE_SERIALIZER(ACombatCharacter)


#define Combat_Source_Combat_CombatCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesACombatCharacter(); \
	friend struct Z_Construct_UClass_ACombatCharacter_Statics; \
public: \
	DECLARE_CLASS(ACombatCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Combat"), NO_API) \
	DECLARE_SERIALIZER(ACombatCharacter)


#define Combat_Source_Combat_CombatCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACombatCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACombatCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACombatCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACombatCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACombatCharacter(ACombatCharacter&&); \
	NO_API ACombatCharacter(const ACombatCharacter&); \
public:


#define Combat_Source_Combat_CombatCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACombatCharacter(ACombatCharacter&&); \
	NO_API ACombatCharacter(const ACombatCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACombatCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACombatCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACombatCharacter)


#define Combat_Source_Combat_CombatCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ACombatCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ACombatCharacter, FollowCamera); }


#define Combat_Source_Combat_CombatCharacter_h_9_PROLOG
#define Combat_Source_Combat_CombatCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Combat_Source_Combat_CombatCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Combat_Source_Combat_CombatCharacter_h_12_SPARSE_DATA \
	Combat_Source_Combat_CombatCharacter_h_12_RPC_WRAPPERS \
	Combat_Source_Combat_CombatCharacter_h_12_INCLASS \
	Combat_Source_Combat_CombatCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Combat_Source_Combat_CombatCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Combat_Source_Combat_CombatCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Combat_Source_Combat_CombatCharacter_h_12_SPARSE_DATA \
	Combat_Source_Combat_CombatCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Combat_Source_Combat_CombatCharacter_h_12_INCLASS_NO_PURE_DECLS \
	Combat_Source_Combat_CombatCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMBAT_API UClass* StaticClass<class ACombatCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Combat_Source_Combat_CombatCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
