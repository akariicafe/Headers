@interface CAMUserPreferencesMigrator : NSObject

+ (long long)_HDRModeForLegacyHDRMode:(long long)a0;
+ (long long)_captureModeForLegacyCameraMode:(long long)a0;
+ (long long)_flashModeForLegacyFlashMode:(long long)a0;
+ (long long)_previewViewAspectModeForLegacyAspectMode:(long long)a0;
+ (void)migrateLegacyPreferences;

@end
