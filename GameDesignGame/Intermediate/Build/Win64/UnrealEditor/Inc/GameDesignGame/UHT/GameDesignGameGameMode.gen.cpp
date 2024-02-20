// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameDesignGame/GameDesignGameGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameDesignGameGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	GAMEDESIGNGAME_API UClass* Z_Construct_UClass_AGameDesignGameGameMode();
	GAMEDESIGNGAME_API UClass* Z_Construct_UClass_AGameDesignGameGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameDesignGame();
// End Cross Module References
	void AGameDesignGameGameMode::StaticRegisterNativesAGameDesignGameGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGameDesignGameGameMode);
	UClass* Z_Construct_UClass_AGameDesignGameGameMode_NoRegister()
	{
		return AGameDesignGameGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AGameDesignGameGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameDesignGameGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GameDesignGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameDesignGameGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameDesignGameGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameDesignGameGameMode.h" },
		{ "ModuleRelativePath", "GameDesignGameGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameDesignGameGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameDesignGameGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameDesignGameGameMode_Statics::ClassParams = {
		&AGameDesignGameGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameDesignGameGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AGameDesignGameGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AGameDesignGameGameMode()
	{
		if (!Z_Registration_Info_UClass_AGameDesignGameGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameDesignGameGameMode.OuterSingleton, Z_Construct_UClass_AGameDesignGameGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGameDesignGameGameMode.OuterSingleton;
	}
	template<> GAMEDESIGNGAME_API UClass* StaticClass<AGameDesignGameGameMode>()
	{
		return AGameDesignGameGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameDesignGameGameMode);
	AGameDesignGameGameMode::~AGameDesignGameGameMode() {}
	struct Z_CompiledInDeferFile_FID_GameDesignGame_Source_GameDesignGame_GameDesignGameGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDesignGame_Source_GameDesignGame_GameDesignGameGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGameDesignGameGameMode, AGameDesignGameGameMode::StaticClass, TEXT("AGameDesignGameGameMode"), &Z_Registration_Info_UClass_AGameDesignGameGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameDesignGameGameMode), 3413138255U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDesignGame_Source_GameDesignGame_GameDesignGameGameMode_h_2637272565(TEXT("/Script/GameDesignGame"),
		Z_CompiledInDeferFile_FID_GameDesignGame_Source_GameDesignGame_GameDesignGameGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDesignGame_Source_GameDesignGame_GameDesignGameGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
