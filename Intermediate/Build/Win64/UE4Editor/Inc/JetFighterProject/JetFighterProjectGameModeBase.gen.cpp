// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JetFighterProject/JetFighterProjectGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJetFighterProjectGameModeBase() {}
// Cross Module References
	JETFIGHTERPROJECT_API UClass* Z_Construct_UClass_AJetFighterProjectGameModeBase_NoRegister();
	JETFIGHTERPROJECT_API UClass* Z_Construct_UClass_AJetFighterProjectGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_JetFighterProject();
// End Cross Module References
	void AJetFighterProjectGameModeBase::StaticRegisterNativesAJetFighterProjectGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AJetFighterProjectGameModeBase_NoRegister()
	{
		return AJetFighterProjectGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AJetFighterProjectGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AJetFighterProjectGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_JetFighterProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJetFighterProjectGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "JetFighterProjectGameModeBase.h" },
		{ "ModuleRelativePath", "JetFighterProjectGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AJetFighterProjectGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AJetFighterProjectGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AJetFighterProjectGameModeBase_Statics::ClassParams = {
		&AJetFighterProjectGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AJetFighterProjectGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AJetFighterProjectGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AJetFighterProjectGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AJetFighterProjectGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AJetFighterProjectGameModeBase, 546280421);
	template<> JETFIGHTERPROJECT_API UClass* StaticClass<AJetFighterProjectGameModeBase>()
	{
		return AJetFighterProjectGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AJetFighterProjectGameModeBase(Z_Construct_UClass_AJetFighterProjectGameModeBase, &AJetFighterProjectGameModeBase::StaticClass, TEXT("/Script/JetFighterProject"), TEXT("AJetFighterProjectGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AJetFighterProjectGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
