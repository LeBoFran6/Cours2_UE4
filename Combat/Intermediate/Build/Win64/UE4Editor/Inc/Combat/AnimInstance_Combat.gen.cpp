// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Combat/AnimInstance_Combat.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimInstance_Combat() {}
// Cross Module References
	COMBAT_API UClass* Z_Construct_UClass_UAnimInstance_Combat_NoRegister();
	COMBAT_API UClass* Z_Construct_UClass_UAnimInstance_Combat();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_Combat();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAnimInstance_Combat::execUpdateAnimationAxis)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateAnimationAxis();
		P_NATIVE_END;
	}
	void UAnimInstance_Combat::StaticRegisterNativesUAnimInstance_Combat()
	{
		UClass* Class = UAnimInstance_Combat::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateAnimationAxis", &UAnimInstance_Combat::execUpdateAnimationAxis },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAnimInstance_Combat_UpdateAnimationAxis_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_Combat_UpdateAnimationAxis_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "AnimInstance_Combat.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_Combat_UpdateAnimationAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance_Combat, nullptr, "UpdateAnimationAxis", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_Combat_UpdateAnimationAxis_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Combat_UpdateAnimationAxis_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_Combat_UpdateAnimationAxis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimInstance_Combat_UpdateAnimationAxis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAnimInstance_Combat_NoRegister()
	{
		return UAnimInstance_Combat::StaticClass();
	}
	struct Z_Construct_UClass_UAnimInstance_Combat_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_hSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_vSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_vSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_myPawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_myPawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimInstance_Combat_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Combat,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnimInstance_Combat_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimInstance_Combat_UpdateAnimationAxis, "UpdateAnimationAxis" }, // 708911592
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimInstance_Combat_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "AnimInstance_Combat.h" },
		{ "ModuleRelativePath", "AnimInstance_Combat.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimInstance_Combat_Statics::NewProp_hSpeed_MetaData[] = {
		{ "Category", "Chara" },
		{ "ModuleRelativePath", "AnimInstance_Combat.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimInstance_Combat_Statics::NewProp_hSpeed = { "hSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimInstance_Combat, hSpeed), METADATA_PARAMS(Z_Construct_UClass_UAnimInstance_Combat_Statics::NewProp_hSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimInstance_Combat_Statics::NewProp_hSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimInstance_Combat_Statics::NewProp_vSpeed_MetaData[] = {
		{ "Category", "Chara" },
		{ "ModuleRelativePath", "AnimInstance_Combat.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimInstance_Combat_Statics::NewProp_vSpeed = { "vSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimInstance_Combat, vSpeed), METADATA_PARAMS(Z_Construct_UClass_UAnimInstance_Combat_Statics::NewProp_vSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimInstance_Combat_Statics::NewProp_vSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimInstance_Combat_Statics::NewProp_myPawn_MetaData[] = {
		{ "Category", "Chara" },
		{ "ModuleRelativePath", "AnimInstance_Combat.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimInstance_Combat_Statics::NewProp_myPawn = { "myPawn", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimInstance_Combat, myPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimInstance_Combat_Statics::NewProp_myPawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimInstance_Combat_Statics::NewProp_myPawn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimInstance_Combat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimInstance_Combat_Statics::NewProp_hSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimInstance_Combat_Statics::NewProp_vSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimInstance_Combat_Statics::NewProp_myPawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimInstance_Combat_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimInstance_Combat>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimInstance_Combat_Statics::ClassParams = {
		&UAnimInstance_Combat::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAnimInstance_Combat_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimInstance_Combat_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimInstance_Combat_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimInstance_Combat_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimInstance_Combat()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimInstance_Combat_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimInstance_Combat, 1711618985);
	template<> COMBAT_API UClass* StaticClass<UAnimInstance_Combat>()
	{
		return UAnimInstance_Combat::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimInstance_Combat(Z_Construct_UClass_UAnimInstance_Combat, &UAnimInstance_Combat::StaticClass, TEXT("/Script/Combat"), TEXT("UAnimInstance_Combat"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimInstance_Combat);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
