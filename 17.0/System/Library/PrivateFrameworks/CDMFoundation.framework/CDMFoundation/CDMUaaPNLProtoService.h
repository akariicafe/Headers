@class NSSet, UPModelBundle, _TtC13CDMFoundation23CDMUaaPNLOverridesProxy;

@interface CDMUaaPNLProtoService : CDMDAGBaseService {
    UPModelBundle *__coreModelBundle;
    NSSet *__appModelBundles;
    _TtC13CDMFoundation23CDMUaaPNLOverridesProxy *__overridesProxy;
    BOOL __useMemoryForOverrideStore;
}

+ (BOOL)isEnabled;
+ (BOOL)isAssetRequired;
+ (id)createErrorResponse:(id)a0;
+ (id)detectForegroundAppForLocale:(id)a0;
+ (id)getAssetFolderNamesByTrialFactorNames;
+ (id)loadAppModelBundles:(id)a0;
+ (id)loadModelBundle:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (void)addOverride:(id)a0;
- (id)handle:(id)a0;
- (id)setup:(id)a0;
- (void)cleanOverride;
- (int)getOverrideNamespace;
- (id)handleRequestCommandTypeNames;
- (void)loadOverrides:(id)a0;
- (id)match:(id)a0 requestId:(id)a1;

@end
