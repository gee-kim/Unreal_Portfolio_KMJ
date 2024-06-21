// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SideScroll/SideScrollPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSideScrollPlayerController() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	TESTPROJECT_API UClass* Z_Construct_UClass_ASideScrollPlayerController();
	TESTPROJECT_API UClass* Z_Construct_UClass_ASideScrollPlayerController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TestProject();
// End Cross Module References
	void ASideScrollPlayerController::StaticRegisterNativesASideScrollPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASideScrollPlayerController);
	UClass* Z_Construct_UClass_ASideScrollPlayerController_NoRegister()
	{
		return ASideScrollPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ASideScrollPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMapping_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMapping;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASideScrollPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_TestProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASideScrollPlayerController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASideScrollPlayerController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "SideScroll/SideScrollPlayerController.h" },
		{ "ModuleRelativePath", "SideScroll/SideScrollPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASideScrollPlayerController_Statics::NewProp_InputMapping_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "SideScroll/SideScrollPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASideScrollPlayerController_Statics::NewProp_InputMapping = { "InputMapping", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASideScrollPlayerController, InputMapping), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASideScrollPlayerController_Statics::NewProp_InputMapping_MetaData), Z_Construct_UClass_ASideScrollPlayerController_Statics::NewProp_InputMapping_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASideScrollPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASideScrollPlayerController_Statics::NewProp_InputMapping,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASideScrollPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASideScrollPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASideScrollPlayerController_Statics::ClassParams = {
		&ASideScrollPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASideScrollPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASideScrollPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASideScrollPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ASideScrollPlayerController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASideScrollPlayerController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ASideScrollPlayerController()
	{
		if (!Z_Registration_Info_UClass_ASideScrollPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASideScrollPlayerController.OuterSingleton, Z_Construct_UClass_ASideScrollPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASideScrollPlayerController.OuterSingleton;
	}
	template<> TESTPROJECT_API UClass* StaticClass<ASideScrollPlayerController>()
	{
		return ASideScrollPlayerController::StaticClass();
	}
	ASideScrollPlayerController::ASideScrollPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASideScrollPlayerController);
	ASideScrollPlayerController::~ASideScrollPlayerController() {}
	struct Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_SideScroll_SideScrollPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_SideScroll_SideScrollPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASideScrollPlayerController, ASideScrollPlayerController::StaticClass, TEXT("ASideScrollPlayerController"), &Z_Registration_Info_UClass_ASideScrollPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASideScrollPlayerController), 1428877277U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_SideScroll_SideScrollPlayerController_h_319216063(TEXT("/Script/TestProject"),
		Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_SideScroll_SideScrollPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_SideScroll_SideScrollPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
