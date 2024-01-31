@class SNLPSSUMatcher, SSUSystemState, NSObject;
@protocol OS_dispatch_queue;

@interface CDMSSUService : CDMDAGBaseService

@property (nonatomic) double _matcherRequestTimeoutSec;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_matcherRequestQueue;
@property (readonly, nonatomic) SSUSystemState *_systemState;
@property (readonly, nonatomic) SNLPSSUMatcher *_matcher;

+ (BOOL)isEnabled;
+ (BOOL)isAssetRequired;
+ (id)acquireOrBuildMatcher:(id)a0 systemState:(id)a1 error:(id *)a2;
+ (id)assetDirectoryURLForServiceAssetBundle:(id)a0;
+ (id)buildDeviceSystemStateLocale:(id)a0;
+ (id)buildMatcherRequestQueue;
+ (id)buildSystemStateForServiceStateDirectory:(id)a0 locale:(id)a1;
+ (id)buildSystemStateForSsuSandboxDirectories:(id)a0 locale:(id)a1;
+ (id)buildSystemStateForSystemEventWithLocale:(id)a0;
+ (void)dispatchAsyncWithTransaction:(id)a0 block:(id /* block */)a1;
+ (void)fetchVoiceShortcutsWithMatcher:(id)a0 assetCollection:(id)a1 block:(id /* block */)a2;
+ (id)getAssetFolderNamesByTrialFactorNames;
+ (id)getAssetsDirectory:(id)a0 factorName:(id)a1 error:(id *)a2;
+ (id)getMatcherWithAssetCollection:(id)a0 systemState:(id)a1;
+ (id)getSystemEventStreamQueue;
+ (void)handleMaintenanceMode:(id)a0;
+ (void)handlePostInstall:(id)a0;
+ (void)handleTrialAssetUpdate:(id)a0;
+ (void)handleVoiceShortcutsCompletion:(id)a0 voiceShortcuts:(id)a1 voiceShortcutsError:(id)a2 block:(id /* block */)a3;
+ (void)handleXPCActivity:(id)a0 withAssets:(id)a1 withSelfMetadata:(id)a2;
+ (void)handleXPCEvent:(id)a0 fromStream:(id)a1 withAssets:(id)a2 withSelfMetadata:(id)a3;
+ (void)handleXPCEventApplicationInner:(id)a0 assetCollection:(id)a1 block:(id /* block */)a2;
+ (void)handleXPCEventApplicationRegistered:(id)a0 assetCollection:(id)a1;
+ (void)handleXPCEventApplicationUnregistered:(id)a0 assetCollection:(id)a1;
+ (void)handleXPCEventShortcutsDatabaseChanged:(id)a0;
+ (id)lookupSSUSandboxDirectories:(id)a0;
+ (void)performFullCacheUpdate:(id)a0 assetCollection:(id)a1 systemState:(id)a2;
+ (id)xpcActivitySupported;
+ (id)xpcEventStreamsSupported;

- (void).cxx_destruct;
- (id)handle:(id)a0;
- (id)setup:(id)a0;
- (id)errorSetupWithErrorDescription:(id)a0;
- (id)abortHandleWithErrorCode:(long long)a0 description:(id)a1;
- (BOOL)executeMatcherRequestBlockWithTimeout:(id /* block */)a0;
- (id)failSetupWithErrorDescription:(id)a0;
- (void)forceAppsRescanIfEnabled;
- (void)forceFullCacheUpdateIfEnabled;
- (id)handleRequestCommandTypeNames;
- (void)performAppRescanForSandboxInstalledApps;

@end
