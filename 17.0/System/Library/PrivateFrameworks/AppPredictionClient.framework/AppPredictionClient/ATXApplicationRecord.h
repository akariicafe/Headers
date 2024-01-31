@interface ATXApplicationRecord : NSObject

+ (BOOL)isDeviceManagementPolicyOkForBundleId:(id)a0;
+ (BOOL)isInstalledAndNotRestrictedForBundle:(id)a0;
+ (BOOL)isSwiftPlaygroundsBundle:(id)a0;
+ (BOOL)isAppClipForBundleId:(id)a0;
+ (BOOL)isLaunchProhibitedForBundle:(id)a0;
+ (BOOL)isSystemAppForBundleId:(id)a0;
+ (BOOL)isHiddenFromSpringBoardWithBundleId:(id)a0;
+ (BOOL)isRestoreInstallTypeForBundle:(id)a0;
+ (BOOL)isWebClipInstalledWithBundleId:(id)a0;
+ (id)schemaWithoutFallbackForBundle:(id)a0;
+ (id)parentAppBundleIdForClipBundleID:(id)a0;
+ (BOOL)isUPPValidatedForBundle:(id)a0;
+ (BOOL)isInstalledForBundle:(id)a0;
+ (void)getDeviceManagementPolicyForBundle:(id)a0 completionHandler:(id /* block */)a1;
+ (BOOL)isInternalAppForBundleId:(id)a0;
+ (id)recordForAdamId:(unsigned long long)a0;
+ (BOOL)isArcadeAppForBundle:(id)a0;
+ (BOOL)isEnterpriseAppForBundle:(id)a0;
+ (unsigned long long)genreIdForBundle:(id)a0;
+ (id)genreForBundle:(id)a0;
+ (id)companionBundleIdForBundleId:(id)a0;
+ (id)localizedShortnameForBundle:(id)a0;
+ (BOOL)isInternalOrSystemAppForBundleId:(id)a0;
+ (id)appInfoForBundle:(id)a0;
+ (id)bundleIdForAdamIdIfInstalled:(unsigned long long)a0;
+ (BOOL)isBackgroundAudioSupportedForBundle:(id)a0;
+ (id)registrationDateForBundle:(id)a0;
+ (BOOL)isInstalledOrIsPlaceholderForBundle:(id)a0;
+ (BOOL)isAppClipGivenAppRecord:(id)a0;
+ (id)localizedNameForBundle:(id)a0;
+ (BOOL)isAppClipWebClipBundleId:(id)a0;
+ (BOOL)isInstallingForBundle:(id)a0;
+ (id)recordForBundleId:(id)a0;
+ (BOOL)isOffloadedForBundle:(id)a0;
+ (BOOL)isBetaAppForBundle:(id)a0;

@end
