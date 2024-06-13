// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestLevel/TestLevelPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestLevelPawn() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	TESTPROJECT_API UClass* Z_Construct_UClass_ATestLevelPawn();
	TESTPROJECT_API UClass* Z_Construct_UClass_ATestLevelPawn_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TestProject();
// End Cross Module References
	void ATestLevelPawn::StaticRegisterNativesATestLevelPawn()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATestLevelPawn);
	UClass* Z_Construct_UClass_ATestLevelPawn_NoRegister()
	{
		return ATestLevelPawn::StaticClass();
	}
	struct Z_Construct_UClass_ATestLevelPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATestLevelPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_TestProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATestLevelPawn_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestLevelPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TestLevel/TestLevelPawn.h" },
		{ "ModuleRelativePath", "TestLevel/TestLevelPawn.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATestLevelPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestLevelPawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATestLevelPawn_Statics::ClassParams = {
		&ATestLevelPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestLevelPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_ATestLevelPawn_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ATestLevelPawn()
	{
		if (!Z_Registration_Info_UClass_ATestLevelPawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATestLevelPawn.OuterSingleton, Z_Construct_UClass_ATestLevelPawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATestLevelPawn.OuterSingleton;
	}
	template<> TESTPROJECT_API UClass* StaticClass<ATestLevelPawn>()
	{
		return ATestLevelPawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATestLevelPawn);
	ATestLevelPawn::~ATestLevelPawn() {}
	struct Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_TestLevel_TestLevelPawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_TestLevel_TestLevelPawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATestLevelPawn, ATestLevelPawn::StaticClass, TEXT("ATestLevelPawn"), &Z_Registration_Info_UClass_ATestLevelPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATestLevelPawn), 4179529040U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_TestLevel_TestLevelPawn_h_3762172512(TEXT("/Script/TestProject"),
		Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_TestLevel_TestLevelPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_TestLevel_TestLevelPawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
