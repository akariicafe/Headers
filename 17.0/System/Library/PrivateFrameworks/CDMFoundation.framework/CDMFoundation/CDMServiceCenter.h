@class CDMAssetsManager, NSString, NSArray, CDMComposerService, NSMutableDictionary, CDMServiceGraphRunner, CDMDynamicConfig, NSObject, CDMConfig;
@protocol OS_dispatch_queue, OS_os_transaction;

@interface CDMServiceCenter : NSObject <CDMServiceObserver> {
    CDMConfig *_config;
    NSArray *_services;
    NSArray *_dagServices;
    NSArray *_enabledDAGServiceNames;
    NSArray *_foundationServices;
    CDMComposerService *_composerService;
    NSMutableDictionary *_commandServicesDict;
    id /* block */ _defaultCallback;
    CDMServiceGraphRunner *_serviceGraphRunner;
    CDMAssetsManager *_cdmAssetsManager;
    NSObject<OS_dispatch_queue> *_cdmServiceCenterQueue;
    CDMDynamicConfig *_currentConfig;
    BOOL _enableSetAssetsProvisionalAndPromote;
    NSObject<OS_os_transaction> *transaction;
}

@property (readonly, nonatomic) long long systemState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getDynamicConfigWithAssetCollectionForServices:(id)a0 inGraph:(id)a1 withLocale:(id)a2 withError:(id *)a3 withSelfMetadata:(id)a4;

- (void)setSystemState:(long long)a0;
- (void)initWithConfig:(id)a0;
- (void)dealloc;
- (void)cleanup;
- (void).cxx_destruct;
- (id)getServices;
- (BOOL)registerWithAssetsDelegate:(id)a0;
- (void)setupEmbeddingConfigsWithError:(id *)a0;
- (BOOL)areAssetsAvailable:(id)a0;
- (id)extractEnabledServiceNames:(id)a0;
- (id)extractEnabledServices:(id)a0;
- (id)getAssetPaths;
- (id)getEnabledDAGServiceNames;
- (id)getEnabledDAGServiceNamesForGraph:(id)a0;
- (id)getFoundationServices;
- (void)handleCommand:(id)a0 forCallback:(id /* block */)a1;
- (BOOL)handleOverridesAssetUpdateEvent:(id)a0;
- (void)handleSetup:(id)a0 forCallback:(id /* block */)a1;
- (BOOL)handleXPCActivity:(id)a0 fromIdentifier:(id)a1 withRegister:(id)a2;
- (BOOL)handleXPCEvent:(id)a0 fromStream:(id)a1 withRegister:(id)a2;
- (BOOL)isServiceNotReady:(id)a0 withServiceStateMap:(id)a1;
- (void)mergeConfig:(id)a0;
- (BOOL)promoteAssetsForServices:(id)a0 withServiceState:(id)a1 withSelfContextId:(id)a2 withSelfMetadata:(id)a3 withDataDispatcherContext:(id)a4;
- (BOOL)setAssetsProvisionalForServices:(id)a0 withSelfContextId:(id)a1 withSelfMetadata:(id)a2 withDataDispatcherContext:(id)a3;
- (void)setupAssetsForServices:(id)a0 withError:(id *)a1;
- (void)setupAssetsForServices:(id)a0 withError:(id *)a1 andSelfMetadata:(id)a2 dataDispatcherContext:(id)a3;
- (void)setupCDMAssetManagerWithError:(id *)a0;
- (BOOL)shouldCDMAssetManagerReSetup;
- (void)smService:(id)a0 didPublishCommand:(id)a1;
- (void)smService:(id)a0 didPublishRequest:(id)a1 withResponseCallback:(id /* block */)a2;

@end
