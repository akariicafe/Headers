@class SiriNLUOverrideProxy;

@interface CDMOverridesProtoService : CDMDAGBaseService

@property (readonly, nonatomic) SiriNLUOverrideProxy *store;

+ (BOOL)isEnabled;
+ (BOOL)isAssetRequired;
+ (id)getAssetFolderNamesByTrialFactorNames;
+ (void)handleXPCEvent:(id)a0 fromStream:(id)a1 withAssets:(id)a2 withSelfMetadata:(id)a3;
+ (id)pathToOverridesFileWithLanguageCode:(id)a0 bundle:(id)a1;
+ (id)xpcEventStreamsSupported;

- (void)dealloc;
- (void).cxx_destruct;
- (id)handle:(id)a0;
- (id)setup:(id)a0;
- (id)setupFailedFor:(id)a0;
- (id)createSetupErrorCmd:(id)a0;
- (id)handleRequestCommandTypeNames;
- (id)matchOverride:(id)a0 shouldAppend:(BOOL *)a1;
- (id)setupSucceeded;

@end
