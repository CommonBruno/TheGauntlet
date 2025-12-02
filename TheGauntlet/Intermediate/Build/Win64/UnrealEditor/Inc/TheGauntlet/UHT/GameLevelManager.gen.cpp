// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheGauntlet/GameLevelManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameLevelManager() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
THEGAUNTLET_API UClass* Z_Construct_UClass_UGameLevelManager();
THEGAUNTLET_API UClass* Z_Construct_UClass_UGameLevelManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_TheGauntlet();
// End Cross Module References

// Begin Class UGameLevelManager
void UGameLevelManager::StaticRegisterNativesUGameLevelManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameLevelManager);
UClass* Z_Construct_UClass_UGameLevelManager_NoRegister()
{
	return UGameLevelManager::StaticClass();
}
struct Z_Construct_UClass_UGameLevelManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GameLevelManager.h" },
		{ "ModuleRelativePath", "GameLevelManager.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameLevelManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGameLevelManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_TheGauntlet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameLevelManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameLevelManager_Statics::ClassParams = {
	&UGameLevelManager::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameLevelManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameLevelManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameLevelManager()
{
	if (!Z_Registration_Info_UClass_UGameLevelManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameLevelManager.OuterSingleton, Z_Construct_UClass_UGameLevelManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameLevelManager.OuterSingleton;
}
template<> THEGAUNTLET_API UClass* StaticClass<UGameLevelManager>()
{
	return UGameLevelManager::StaticClass();
}
UGameLevelManager::UGameLevelManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameLevelManager);
UGameLevelManager::~UGameLevelManager() {}
// End Class UGameLevelManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_ricca_OneDrive_Documenti_Fork_TheGauntlet_TheGauntlet_Source_TheGauntlet_GameLevelManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameLevelManager, UGameLevelManager::StaticClass, TEXT("UGameLevelManager"), &Z_Registration_Info_UClass_UGameLevelManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameLevelManager), 2262597447U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ricca_OneDrive_Documenti_Fork_TheGauntlet_TheGauntlet_Source_TheGauntlet_GameLevelManager_h_23045269(TEXT("/Script/TheGauntlet"),
	Z_CompiledInDeferFile_FID_Users_ricca_OneDrive_Documenti_Fork_TheGauntlet_TheGauntlet_Source_TheGauntlet_GameLevelManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ricca_OneDrive_Documenti_Fork_TheGauntlet_TheGauntlet_Source_TheGauntlet_GameLevelManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
