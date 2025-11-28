// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheGauntlet/TheGauntletGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTheGauntletGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
THEGAUNTLET_API UClass* Z_Construct_UClass_ATheGauntletGameMode();
THEGAUNTLET_API UClass* Z_Construct_UClass_ATheGauntletGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_TheGauntlet();
// End Cross Module References

// Begin Class ATheGauntletGameMode
void ATheGauntletGameMode::StaticRegisterNativesATheGauntletGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATheGauntletGameMode);
UClass* Z_Construct_UClass_ATheGauntletGameMode_NoRegister()
{
	return ATheGauntletGameMode::StaticClass();
}
struct Z_Construct_UClass_ATheGauntletGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TheGauntletGameMode.h" },
		{ "ModuleRelativePath", "TheGauntletGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATheGauntletGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATheGauntletGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_TheGauntlet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATheGauntletGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATheGauntletGameMode_Statics::ClassParams = {
	&ATheGauntletGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATheGauntletGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ATheGauntletGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATheGauntletGameMode()
{
	if (!Z_Registration_Info_UClass_ATheGauntletGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATheGauntletGameMode.OuterSingleton, Z_Construct_UClass_ATheGauntletGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATheGauntletGameMode.OuterSingleton;
}
template<> THEGAUNTLET_API UClass* StaticClass<ATheGauntletGameMode>()
{
	return ATheGauntletGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATheGauntletGameMode);
ATheGauntletGameMode::~ATheGauntletGameMode() {}
// End Class ATheGauntletGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_ricca_OneDrive_Documenti_Fork_TheGauntlet_TheGauntlet_Source_TheGauntlet_TheGauntletGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATheGauntletGameMode, ATheGauntletGameMode::StaticClass, TEXT("ATheGauntletGameMode"), &Z_Registration_Info_UClass_ATheGauntletGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATheGauntletGameMode), 514904085U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ricca_OneDrive_Documenti_Fork_TheGauntlet_TheGauntlet_Source_TheGauntlet_TheGauntletGameMode_h_3962185113(TEXT("/Script/TheGauntlet"),
	Z_CompiledInDeferFile_FID_Users_ricca_OneDrive_Documenti_Fork_TheGauntlet_TheGauntlet_Source_TheGauntlet_TheGauntletGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ricca_OneDrive_Documenti_Fork_TheGauntlet_TheGauntlet_Source_TheGauntlet_TheGauntletGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
