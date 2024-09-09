// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PS4Projectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef PS4_PS4Projectile_generated_h
#error "PS4Projectile.generated.h already included, missing '#pragma once' in PS4Projectile.h"
#endif
#define PS4_PS4Projectile_generated_h

#define FID_Users_saave_Documents_Unreal_Projects_PS4_Source_PS4_PS4Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


#define FID_Users_saave_Documents_Unreal_Projects_PS4_Source_PS4_PS4Projectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPS4Projectile(); \
	friend struct Z_Construct_UClass_APS4Projectile_Statics; \
public: \
	DECLARE_CLASS(APS4Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PS4"), NO_API) \
	DECLARE_SERIALIZER(APS4Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Users_saave_Documents_Unreal_Projects_PS4_Source_PS4_PS4Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APS4Projectile(APS4Projectile&&); \
	APS4Projectile(const APS4Projectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APS4Projectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APS4Projectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APS4Projectile) \
	NO_API virtual ~APS4Projectile();


#define FID_Users_saave_Documents_Unreal_Projects_PS4_Source_PS4_PS4Projectile_h_12_PROLOG
#define FID_Users_saave_Documents_Unreal_Projects_PS4_Source_PS4_PS4Projectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_saave_Documents_Unreal_Projects_PS4_Source_PS4_PS4Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_saave_Documents_Unreal_Projects_PS4_Source_PS4_PS4Projectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_saave_Documents_Unreal_Projects_PS4_Source_PS4_PS4Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PS4_API UClass* StaticClass<class APS4Projectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_saave_Documents_Unreal_Projects_PS4_Source_PS4_PS4Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
