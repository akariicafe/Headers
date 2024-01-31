@class NSString, NSXPCConnection, CDMDataDispatcherContext, CDMServiceCenter;
@protocol CDMClientDelegate;

@interface CDMXPCClient : CDMClientInterface {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id<CDMClientDelegate> _delegate;
    NSXPCConnection *_connection;
    NSString *_localeIdentifier;
    CDMServiceCenter *_serviceCenter;
    BOOL _wakeOnInit;
    CDMDataDispatcherContext *_dataDispatcherContext;
}

- (id)init;
- (void)dealloc;
- (void)wake;
- (id)connection;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)invalidateConnection;
- (void)processCDMNluRequest:(id)a0;
- (BOOL)registerWithAssetsDelegate:(id)a0;
- (void)setup:(id)a0;
- (void)sharedInitTasks;
- (void)waitForDataDispatcherCompletion;
- (BOOL)areAssetsAvailable:(id)a0;
- (void)doHandleCommand:(id)a0 forCallback:(id /* block */)a1;
- (void)handleOverridesAssetUpdateEvent:(id)a0;
- (id)initWithCallingBundleId:(id)a0;
- (id)initWithConnection:(id)a0 delegate:(id)a1 wakeOnInit:(BOOL)a2;
- (id)initWithDelegate:(id)a0 withCallingBundleId:(id)a1;
- (void)processCDMNluRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)processCDMNluRequest:(id)a0 nullableCompletionHandler:(id /* block */)a1;
- (void)setDataDispatcherContext:(id)a0;
- (void)setup:(id)a0 completionHandler:(id /* block */)a1;
- (void)setup:(id)a0 nullableCompletionHandler:(id /* block */)a1;
- (void)warmupWithCompletionHandler:(id /* block */)a0;

@end
