// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Game_Prototype_1/Game_Prototype_1GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGame_Prototype_1GameModeBase() {}
// Cross Module References
	GAME_PROTOTYPE_1_API UClass* Z_Construct_UClass_AGame_Prototype_1GameModeBase_NoRegister();
	GAME_PROTOTYPE_1_API UClass* Z_Construct_UClass_AGame_Prototype_1GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Game_Prototype_1();
// End Cross Module References
	void AGame_Prototype_1GameModeBase::StaticRegisterNativesAGame_Prototype_1GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AGame_Prototype_1GameModeBase_NoRegister()
	{
		return AGame_Prototype_1GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AGame_Prototype_1GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGame_Prototype_1GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Game_Prototype_1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGame_Prototype_1GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Game_Prototype_1GameModeBase.h" },
		{ "ModuleRelativePath", "Game_Prototype_1GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGame_Prototype_1GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGame_Prototype_1GameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGame_Prototype_1GameModeBase_Statics::ClassParams = {
		&AGame_Prototype_1GameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AGame_Prototype_1GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGame_Prototype_1GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGame_Prototype_1GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGame_Prototype_1GameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGame_Prototype_1GameModeBase, 635611144);
	template<> GAME_PROTOTYPE_1_API UClass* StaticClass<AGame_Prototype_1GameModeBase>()
	{
		return AGame_Prototype_1GameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGame_Prototype_1GameModeBase(Z_Construct_UClass_AGame_Prototype_1GameModeBase, &AGame_Prototype_1GameModeBase::StaticClass, TEXT("/Script/Game_Prototype_1"), TEXT("AGame_Prototype_1GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGame_Prototype_1GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
