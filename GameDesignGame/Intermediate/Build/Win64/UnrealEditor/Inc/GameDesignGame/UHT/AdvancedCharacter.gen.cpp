// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameDesignGame/AdvancedCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvancedCharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	GAMEDESIGNGAME_API UClass* Z_Construct_UClass_AAdvancedCharacter();
	GAMEDESIGNGAME_API UClass* Z_Construct_UClass_AAdvancedCharacter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameDesignGame();
// End Cross Module References
	void AAdvancedCharacter::StaticRegisterNativesAAdvancedCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAdvancedCharacter);
	UClass* Z_Construct_UClass_AAdvancedCharacter_NoRegister()
	{
		return AAdvancedCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AAdvancedCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAdvancedCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_GameDesignGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAdvancedCharacter_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvancedCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AdvancedCharacter.h" },
		{ "ModuleRelativePath", "AdvancedCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAdvancedCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAdvancedCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAdvancedCharacter_Statics::ClassParams = {
		&AAdvancedCharacter::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAdvancedCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AAdvancedCharacter_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AAdvancedCharacter()
	{
		if (!Z_Registration_Info_UClass_AAdvancedCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAdvancedCharacter.OuterSingleton, Z_Construct_UClass_AAdvancedCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAdvancedCharacter.OuterSingleton;
	}
	template<> GAMEDESIGNGAME_API UClass* StaticClass<AAdvancedCharacter>()
	{
		return AAdvancedCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAdvancedCharacter);
	AAdvancedCharacter::~AAdvancedCharacter() {}
	struct Z_CompiledInDeferFile_FID_GameDesignGame_Source_GameDesignGame_AdvancedCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDesignGame_Source_GameDesignGame_AdvancedCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAdvancedCharacter, AAdvancedCharacter::StaticClass, TEXT("AAdvancedCharacter"), &Z_Registration_Info_UClass_AAdvancedCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAdvancedCharacter), 1891534005U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDesignGame_Source_GameDesignGame_AdvancedCharacter_h_1026318690(TEXT("/Script/GameDesignGame"),
		Z_CompiledInDeferFile_FID_GameDesignGame_Source_GameDesignGame_AdvancedCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDesignGame_Source_GameDesignGame_AdvancedCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
