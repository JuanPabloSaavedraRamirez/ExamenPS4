// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PS4/PS4GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePS4GameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
PS4_API UClass* Z_Construct_UClass_APS4GameMode();
PS4_API UClass* Z_Construct_UClass_APS4GameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_PS4();
// End Cross Module References

// Begin Class APS4GameMode
void APS4GameMode::StaticRegisterNativesAPS4GameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APS4GameMode);
UClass* Z_Construct_UClass_APS4GameMode_NoRegister()
{
	return APS4GameMode::StaticClass();
}
struct Z_Construct_UClass_APS4GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PS4GameMode.h" },
		{ "ModuleRelativePath", "PS4GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APS4GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APS4GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_PS4,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APS4GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APS4GameMode_Statics::ClassParams = {
	&APS4GameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APS4GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_APS4GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APS4GameMode()
{
	if (!Z_Registration_Info_UClass_APS4GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APS4GameMode.OuterSingleton, Z_Construct_UClass_APS4GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APS4GameMode.OuterSingleton;
}
template<> PS4_API UClass* StaticClass<APS4GameMode>()
{
	return APS4GameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APS4GameMode);
APS4GameMode::~APS4GameMode() {}
// End Class APS4GameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_saave_Documents_Unreal_Projects_PS4_Source_PS4_PS4GameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APS4GameMode, APS4GameMode::StaticClass, TEXT("APS4GameMode"), &Z_Registration_Info_UClass_APS4GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APS4GameMode), 690544978U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_saave_Documents_Unreal_Projects_PS4_Source_PS4_PS4GameMode_h_1755774268(TEXT("/Script/PS4"),
	Z_CompiledInDeferFile_FID_Users_saave_Documents_Unreal_Projects_PS4_Source_PS4_PS4GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_saave_Documents_Unreal_Projects_PS4_Source_PS4_PS4GameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
