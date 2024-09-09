// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePS4_init() {}
	PS4_API UFunction* Z_Construct_UDelegateFunction_PS4_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_PS4;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_PS4()
	{
		if (!Z_Registration_Info_UPackage__Script_PS4.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_PS4_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/PS4",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x4998DD84,
				0x4B2F0AC7,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_PS4.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_PS4.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_PS4(Z_Construct_UPackage__Script_PS4, TEXT("/Script/PS4"), Z_Registration_Info_UPackage__Script_PS4, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x4998DD84, 0x4B2F0AC7));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
