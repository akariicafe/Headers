@interface UAFCommonUtilities : NSObject

+ (BOOL)isInternalInstall;
+ (id)rootDirectory;
+ (id)bundle;
+ (id)valueForEntitlement:(id)a0;
+ (void)getUID:(unsigned int *)a0 andEUID:(unsigned int *)a1;
+ (BOOL)resetAutoAssets;
+ (id)_eliminateAutoAssetType:(id)a0;
+ (id)_getAssetTypeFromConfig;
+ (id)_getInternalBaseConfigDir;
+ (id)_getInternalConfigFilePath;
+ (BOOL)_resetAutoAssetTypes:(id)a0;
+ (long long)_setPallasAudience:(id)a0 forType:(id)a1;
+ (long long)_setPallasURL:(id)a0 forType:(id)a1;
+ (BOOL)_setUAFPopulation:(id)a0 forAssetTypes:(id)a1;
+ (id)currentAssistantLanguage;
+ (BOOL)deviceSupportAndUseHybridASR;
+ (BOOL)deviceSupportFullUOD;
+ (id)getFreeDiskSpaceInBytes;
+ (unsigned long long)getFreeDiskSpaceNeededForDownloadSizeInBytes:(unsigned long long)a0;
+ (struct passwd { char *x0; char *x1; unsigned int x2; unsigned int x3; long long x4; char *x5; char *x6; char *x7; char *x8; long long x9; } *)getPWUID:(id)a0;
+ (BOOL)isFullUODSupportedForStatus:(id)a0 language:(id)a1;
+ (BOOL)isHybridUODSupportedForStatus:(id)a0 language:(id)a1;
+ (BOOL)isTop13Locale:(id)a0;
+ (BOOL)setEPRIfNeeded;
+ (BOOL)setUAFPopulation:(id)a0;
+ (id)simulatorResourcesDirectory;
+ (int)stat:(id)a0 withBuf:(struct stat { int x0; unsigned short x1; unsigned short x2; unsigned long long x3; unsigned int x4; unsigned int x5; int x6; struct timespec { long long x0; long long x1; } x7; struct timespec { long long x0; long long x1; } x8; struct timespec { long long x0; long long x1; } x9; struct timespec { long long x0; long long x1; } x10; long long x11; long long x12; int x13; unsigned int x14; unsigned int x15; int x16; long long x17[2]; } *)a1;

@end
