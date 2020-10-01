// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JetFighterProject/Public/JetFighterPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJetFighterPawn() {}
// Cross Module References
	JETFIGHTERPROJECT_API UClass* Z_Construct_UClass_AJetFighterPawn_NoRegister();
	JETFIGHTERPROJECT_API UClass* Z_Construct_UClass_AJetFighterPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_JetFighterProject();
// End Cross Module References
	void AJetFighterPawn::StaticRegisterNativesAJetFighterPawn()
	{
	}
	UClass* Z_Construct_UClass_AJetFighterPawn_NoRegister()
	{
		return AJetFighterPawn::StaticClass();
	}
	struct Z_Construct_UClass_AJetFighterPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AJetFighterPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_JetFighterProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJetFighterPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "JetFighterPawn.h" },
		{ "ModuleRelativePath", "Public/JetFighterPawn.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AJetFighterPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AJetFighterPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AJetFighterPawn_Statics::ClassParams = {
		&AJetFighterPawn::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AJetFighterPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AJetFighterPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AJetFighterPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AJetFighterPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AJetFighterPawn, 409906626);
	template<> JETFIGHTERPROJECT_API UClass* StaticClass<AJetFighterPawn>()
	{
		return AJetFighterPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AJetFighterPawn(Z_Construct_UClass_AJetFighterPawn, &AJetFighterPawn::StaticClass, TEXT("/Script/JetFighterProject"), TEXT("AJetFighterPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AJetFighterPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
