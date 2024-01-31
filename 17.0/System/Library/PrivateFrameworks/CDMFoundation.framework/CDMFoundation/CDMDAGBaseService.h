@class NSString, CDMDynamicConfig;

@interface CDMDAGBaseService : CDMBaseService {
    NSString *_setupLanguageCode;
    CDMDynamicConfig *_currentConfig;
}

+ (BOOL)isEnabled;
+ (BOOL)isAssetRequired;
+ (id)getAssetConfig;
+ (id)getAssetFolderNamesByTrialFactorNames;
+ (void)handleXPCActivity:(id)a0 withAssets:(id)a1 withSelfMetadata:(id)a2;
+ (void)handleXPCEvent:(id)a0 fromStream:(id)a1 withAssets:(id)a2 withSelfMetadata:(id)a3;
+ (id)xpcActivitySupported;
+ (id)xpcEventStreamsSupported;

- (id)supportedCommands;
- (id)initWithConfig:(id)a0;
- (void).cxx_destruct;
- (id)handle:(id)a0;
- (id)setup:(id)a0;
- (void)_handleSetupRequest:(id)a0 withCallback:(id /* block */)a1;
- (void)_handleWarmupRequest:(id)a0 withCallback:(id /* block */)a1;
- (void)handleCommand:(id)a0 withCallback:(id /* block */)a1;
- (id)handleRequestCommandTypeNames;
- (BOOL)isSetupRerunNeededForRequest:(id)a0;

@end
