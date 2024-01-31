@class NSError, CDMDataDispatcherContext;

@interface CDMClientInterface : NSObject

@property (retain, nonatomic) CDMDataDispatcherContext *dataDispatcherContext;
@property (readonly, nonatomic) BOOL daemonKilled;
@property (readonly, nonatomic) BOOL successFromSetup;
@property (readonly, nonatomic) NSError *errorFromSetup;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)processCDMNluRequest:(id)a0;
- (BOOL)registerWithAssetsDelegate:(id)a0;
- (void)setup:(id)a0;
- (BOOL)areAssetsAvailable:(id)a0;
- (id)createNSError:(id)a0 errorCode:(long long)a1;
- (void)doHandleCommand:(id)a0 forCallback:(id /* block */)a1;
- (void)doServiceCenterInitWithConfig:(id)a0;
- (void)handleOverridesAssetUpdateEvent:(id)a0;
- (id)initWithCallingBundleId:(id)a0;
- (BOOL)isLighthouseAPIEnabled;
- (void)processCDMNluRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)setup:(id)a0 completionHandler:(id /* block */)a1;
- (void)warmupWithCompletionHandler:(id /* block */)a0;

@end
