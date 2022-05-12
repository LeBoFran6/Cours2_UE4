// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMBAT_AnimInstance_Combat_generated_h
#error "AnimInstance_Combat.generated.h already included, missing '#pragma once' in AnimInstance_Combat.h"
#endif
#define COMBAT_AnimInstance_Combat_generated_h

#define Combat_Source_Combat_AnimInstance_Combat_h_15_SPARSE_DATA
#define Combat_Source_Combat_AnimInstance_Combat_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateAnimationAxis);


#define Combat_Source_Combat_AnimInstance_Combat_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateAnimationAxis);


#define Combat_Source_Combat_AnimInstance_Combat_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimInstance_Combat(); \
	friend struct Z_Construct_UClass_UAnimInstance_Combat_Statics; \
public: \
	DECLARE_CLASS(UAnimInstance_Combat, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Combat"), NO_API) \
	DECLARE_SERIALIZER(UAnimInstance_Combat)


#define Combat_Source_Combat_AnimInstance_Combat_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUAnimInstance_Combat(); \
	friend struct Z_Construct_UClass_UAnimInstance_Combat_Statics; \
public: \
	DECLARE_CLASS(UAnimInstance_Combat, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Combat"), NO_API) \
	DECLARE_SERIALIZER(UAnimInstance_Combat)


#define Combat_Source_Combat_AnimInstance_Combat_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimInstance_Combat(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimInstance_Combat) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimInstance_Combat); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimInstance_Combat); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimInstance_Combat(UAnimInstance_Combat&&); \
	NO_API UAnimInstance_Combat(const UAnimInstance_Combat&); \
public:


#define Combat_Source_Combat_AnimInstance_Combat_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimInstance_Combat(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimInstance_Combat(UAnimInstance_Combat&&); \
	NO_API UAnimInstance_Combat(const UAnimInstance_Combat&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimInstance_Combat); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimInstance_Combat); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimInstance_Combat)


#define Combat_Source_Combat_AnimInstance_Combat_h_15_PRIVATE_PROPERTY_OFFSET
#define Combat_Source_Combat_AnimInstance_Combat_h_12_PROLOG
#define Combat_Source_Combat_AnimInstance_Combat_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Combat_Source_Combat_AnimInstance_Combat_h_15_PRIVATE_PROPERTY_OFFSET \
	Combat_Source_Combat_AnimInstance_Combat_h_15_SPARSE_DATA \
	Combat_Source_Combat_AnimInstance_Combat_h_15_RPC_WRAPPERS \
	Combat_Source_Combat_AnimInstance_Combat_h_15_INCLASS \
	Combat_Source_Combat_AnimInstance_Combat_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Combat_Source_Combat_AnimInstance_Combat_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Combat_Source_Combat_AnimInstance_Combat_h_15_PRIVATE_PROPERTY_OFFSET \
	Combat_Source_Combat_AnimInstance_Combat_h_15_SPARSE_DATA \
	Combat_Source_Combat_AnimInstance_Combat_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Combat_Source_Combat_AnimInstance_Combat_h_15_INCLASS_NO_PURE_DECLS \
	Combat_Source_Combat_AnimInstance_Combat_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMBAT_API UClass* StaticClass<class UAnimInstance_Combat>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Combat_Source_Combat_AnimInstance_Combat_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
