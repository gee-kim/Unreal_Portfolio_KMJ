// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SideScroll/SideScrollCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSideScrollCharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	TESTPROJECT_API UClass* Z_Construct_UClass_ASideScrollCharacter();
	TESTPROJECT_API UClass* Z_Construct_UClass_ASideScrollCharacter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TestProject();
// End Cross Module References
	void ASideScrollCharacter::StaticRegisterNativesASideScrollCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASideScrollCharacter);
	UClass* Z_Construct_UClass_ASideScrollCharacter_NoRegister()
	{
		return ASideScrollCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ASideScrollCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArmComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASideScrollCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_TestProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASideScrollCharacter_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASideScrollCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SideScroll/SideScrollCharacter.h" },
		{ "ModuleRelativePath", "SideScroll/SideScrollCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASideScrollCharacter_Statics::NewProp_SpringArmComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Contents" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SideScroll/SideScrollCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASideScrollCharacter_Statics::NewProp_SpringArmComponent = { "SpringArmComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASideScrollCharacter, SpringArmComponent), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASideScrollCharacter_Statics::NewProp_SpringArmComponent_MetaData), Z_Construct_UClass_ASideScrollCharacter_Statics::NewProp_SpringArmComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASideScrollCharacter_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Contents" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SideScroll/SideScrollCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASideScrollCharacter_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASideScrollCharacter, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASideScrollCharacter_Statics::NewProp_CameraComponent_MetaData), Z_Construct_UClass_ASideScrollCharacter_Statics::NewProp_CameraComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASideScrollCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASideScrollCharacter_Statics::NewProp_SpringArmComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASideScrollCharacter_Statics::NewProp_CameraComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASideScrollCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASideScrollCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASideScrollCharacter_Statics::ClassParams = {
		&ASideScrollCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASideScrollCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASideScrollCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASideScrollCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ASideScrollCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASideScrollCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ASideScrollCharacter()
	{
		if (!Z_Registration_Info_UClass_ASideScrollCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASideScrollCharacter.OuterSingleton, Z_Construct_UClass_ASideScrollCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASideScrollCharacter.OuterSingleton;
	}
	template<> TESTPROJECT_API UClass* StaticClass<ASideScrollCharacter>()
	{
		return ASideScrollCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASideScrollCharacter);
	ASideScrollCharacter::~ASideScrollCharacter() {}
	struct Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_SideScroll_SideScrollCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_SideScroll_SideScrollCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASideScrollCharacter, ASideScrollCharacter::StaticClass, TEXT("ASideScrollCharacter"), &Z_Registration_Info_UClass_ASideScrollCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASideScrollCharacter), 3538659174U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_SideScroll_SideScrollCharacter_h_1363935880(TEXT("/Script/TestProject"),
		Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_SideScroll_SideScrollCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_SideScroll_SideScrollCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
