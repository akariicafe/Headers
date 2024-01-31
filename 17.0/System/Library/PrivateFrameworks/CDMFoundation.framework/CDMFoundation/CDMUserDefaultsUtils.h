@interface CDMUserDefaultsUtils : NSObject

+ (id)getDefaultCustomAssetsRootPath;
+ (id)getDefaultCustomLogPath;
+ (BOOL)isInsertEmbeddingOutputsToFeatureStoreEnabled;
+ (BOOL)isSSURequestTimeoutDisabled;
+ (BOOL)isSkipNodeEnabled;
+ (BOOL)isTapToRadarDisabled;
+ (BOOL)isWriteDebugToDiskEnabled;
+ (BOOL)prewarmModels;
+ (unsigned int)readAsrAlternativeCount:(id)a0;
+ (id)readCustomAssetsRootPath;
+ (id)readCustomLogPath;
+ (unsigned int)readGraphRunnerMaxConcurrentCount;
+ (unsigned long long)readNLv4MaxNumParses;
+ (unsigned int)readNonSiriSelfSampleRate;
+ (id)readUaaPNLAppModelPaths;
+ (id)readUaaPNLCoreModelPath;
+ (unsigned long long)readUaaPNLMaxNumParses;
+ (id)readUaaPNLSystemConfigPath;
+ (id)readUserDefaultLVCOverride;
+ (id)readUserDefaultPscOverride;
+ (id)readUserDefaultSnlcOverride;
+ (unsigned long long)readUserDefaultsValueForKeyUint64:(id)a0 defaultValue:(long long)a1;
+ (unsigned int)readXPCCallbackDefaultTimeout;

@end
