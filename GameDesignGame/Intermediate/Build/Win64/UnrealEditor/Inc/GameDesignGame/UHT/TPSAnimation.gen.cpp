// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameDesignGame/TPSAnimation.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTPSAnimation() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	GAMEDESIGNGAME_API UClass* Z_Construct_UClass_UTPSAnimation();
	GAMEDESIGNGAME_API UClass* Z_Construct_UClass_UTPSAnimation_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameDesignGame();
// End Cross Module References
	void UTPSAnimation::StaticRegisterNativesUTPSAnimation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTPSAnimation);
	UClass* Z_Construct_UClass_UTPSAnimation_NoRegister()
	{
		return UTPSAnimation::StaticClass();
	}
	struct Z_Construct_UClass_UTPSAnimation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTPSAnimation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_GameDesignGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTPSAnimation_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTPSAnimation_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "TPSAnimation.h" },
		{ "ModuleRelativePath", "TPSAnimation.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTPSAnimation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTPSAnimation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTPSAnimation_Statics::ClassParams = {
		&UTPSAnimation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTPSAnimation_Statics::Class_MetaDataParams), Z_Construct_UClass_UTPSAnimation_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UTPSAnimation()
	{
		if (!Z_Registration_Info_UClass_UTPSAnimation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTPSAnimation.OuterSingleton, Z_Construct_UClass_UTPSAnimation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTPSAnimation.OuterSingleton;
	}
	template<> GAMEDESIGNGAME_API UClass* StaticClass<UTPSAnimation>()
	{
		return UTPSAnimation::StaticClass();
	}
	UTPSAnimation::UTPSAnimation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTPSAnimation);
	UTPSAnimation::~UTPSAnimation() {}
	struct Z_CompiledInDeferFile_FID_GameDesignGame_Source_GameDesignGame_TPSAnimation_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDesignGame_Source_GameDesignGame_TPSAnimation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTPSAnimation, UTPSAnimation::StaticClass, TEXT("UTPSAnimation"), &Z_Registration_Info_UClass_UTPSAnimation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTPSAnimation), 2503400352U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDesignGame_Source_GameDesignGame_TPSAnimation_h_1301809023(TEXT("/Script/GameDesignGame"),
		Z_CompiledInDeferFile_FID_GameDesignGame_Source_GameDesignGame_TPSAnimation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDesignGame_Source_GameDesignGame_TPSAnimation_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
