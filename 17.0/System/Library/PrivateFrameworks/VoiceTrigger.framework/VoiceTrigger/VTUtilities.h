@interface VTUtilities : NSObject

+ (BOOL)isInternalInstall;
+ (BOOL)supportBargeIn;
+ (void)forceReload;
+ (BOOL)isAlwaysOn;
+ (id)getAssetHashFromConfigPath:(id)a0;
+ (BOOL)isNonUI;
+ (BOOL)supportExternalPhraseSpotter;
+ (BOOL)supportPremiumAssets;
+ (unsigned long long)deviceCategoryForDeviceProductType:(id)a0;
+ (BOOL)isNano;
+ (id)deviceProductType;
+ (double)_round:(double)a0 withPlaces:(int)a1;
+ (id)convertToShortLPCMBufFromFloatLPCMBuf:(id)a0;
+ (BOOL)supportRemoteDarwinVoiceTrigger;
+ (BOOL)supportTTS;
+ (id)deviceProductVersion;
+ (double)VTMachAbsoluteTimeGetTimeInterval:(unsigned long long)a0;
+ (BOOL)isIOS;
+ (double)systemUpTime;
+ (id)deviceSoftwareVersion;
+ (BOOL)VTIsHorseman;
+ (unsigned long long)horsemanDeviceType;
+ (BOOL)isTorpedo;
+ (id)sanitizeEventInfoForLogging:(id)a0;

@end
