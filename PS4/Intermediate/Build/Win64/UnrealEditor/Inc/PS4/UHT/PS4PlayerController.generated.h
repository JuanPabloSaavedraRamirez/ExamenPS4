// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PS4PlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PS4_PS4PlayerController_generated_h
#error "PS4PlayerController.generated.h already included, missing '#pragma once' in PS4PlayerController.h"
#endif
#define PS4_PS4PlayerController_generated_h

#define FID_Users_saave_Documents_Unreal_Projects_PS4_Source_PS4_PS4PlayerController_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPS4PlayerController(); \
	friend struct Z_Construct_UClass_APS4PlayerController_Statics; \
public: \
	DECLARE_CLASS(APS4PlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PS4"), NO_API) \
	DECLARE_SERIALIZER(APS4PlayerController)


#define FID_Users_saave_Documents_Unreal_Projects_PS4_Source_PS4_PS4PlayerController_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APS4PlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APS4PlayerController(APS4PlayerController&&); \
	APS4PlayerController(const APS4PlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APS4PlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APS4PlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APS4PlayerController) \
	NO_API virtual ~APS4PlayerController();


#define FID_Users_saave_Documents_Unreal_Projects_PS4_Source_PS4_PS4PlayerController_h_14_PROLOG
#define FID_Users_saave_Documents_Unreal_Projects_PS4_Source_PS4_PS4PlayerController_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_saave_Documents_Unreal_Projects_PS4_Source_PS4_PS4PlayerController_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_saave_Documents_Unreal_Projects_PS4_Source_PS4_PS4PlayerController_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PS4_API UClass* StaticClass<class APS4PlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_saave_Documents_Unreal_Projects_PS4_Source_PS4_PS4PlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
