// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FRotator;
#ifdef GAME_PROTOTYPE_1_Spawner_generated_h
#error "Spawner.generated.h already included, missing '#pragma once' in Spawner.h"
#endif
#define GAME_PROTOTYPE_1_Spawner_generated_h

#define Game_Prototype_1_Source_Game_Prototype_1_Spawner_h_12_SPARSE_DATA
#define Game_Prototype_1_Source_Game_Prototype_1_Spawner_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSpawnBall); \
	DECLARE_FUNCTION(execSpawn);


#define Game_Prototype_1_Source_Game_Prototype_1_Spawner_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSpawnBall); \
	DECLARE_FUNCTION(execSpawn);


#define Game_Prototype_1_Source_Game_Prototype_1_Spawner_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpawner(); \
	friend struct Z_Construct_UClass_ASpawner_Statics; \
public: \
	DECLARE_CLASS(ASpawner, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Game_Prototype_1"), NO_API) \
	DECLARE_SERIALIZER(ASpawner)


#define Game_Prototype_1_Source_Game_Prototype_1_Spawner_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASpawner(); \
	friend struct Z_Construct_UClass_ASpawner_Statics; \
public: \
	DECLARE_CLASS(ASpawner, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Game_Prototype_1"), NO_API) \
	DECLARE_SERIALIZER(ASpawner)


#define Game_Prototype_1_Source_Game_Prototype_1_Spawner_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpawner(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpawner) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpawner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpawner); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpawner(ASpawner&&); \
	NO_API ASpawner(const ASpawner&); \
public:


#define Game_Prototype_1_Source_Game_Prototype_1_Spawner_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpawner(ASpawner&&); \
	NO_API ASpawner(const ASpawner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpawner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpawner); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpawner)


#define Game_Prototype_1_Source_Game_Prototype_1_Spawner_h_12_PRIVATE_PROPERTY_OFFSET
#define Game_Prototype_1_Source_Game_Prototype_1_Spawner_h_9_PROLOG
#define Game_Prototype_1_Source_Game_Prototype_1_Spawner_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game_Prototype_1_Source_Game_Prototype_1_Spawner_h_12_PRIVATE_PROPERTY_OFFSET \
	Game_Prototype_1_Source_Game_Prototype_1_Spawner_h_12_SPARSE_DATA \
	Game_Prototype_1_Source_Game_Prototype_1_Spawner_h_12_RPC_WRAPPERS \
	Game_Prototype_1_Source_Game_Prototype_1_Spawner_h_12_INCLASS \
	Game_Prototype_1_Source_Game_Prototype_1_Spawner_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Game_Prototype_1_Source_Game_Prototype_1_Spawner_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game_Prototype_1_Source_Game_Prototype_1_Spawner_h_12_PRIVATE_PROPERTY_OFFSET \
	Game_Prototype_1_Source_Game_Prototype_1_Spawner_h_12_SPARSE_DATA \
	Game_Prototype_1_Source_Game_Prototype_1_Spawner_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Game_Prototype_1_Source_Game_Prototype_1_Spawner_h_12_INCLASS_NO_PURE_DECLS \
	Game_Prototype_1_Source_Game_Prototype_1_Spawner_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAME_PROTOTYPE_1_API UClass* StaticClass<class ASpawner>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Game_Prototype_1_Source_Game_Prototype_1_Spawner_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
