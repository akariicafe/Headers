@class CDMClientInterface;

@interface CDMClient : CDMClientInterface <CDMEmbeddingClient, CDMSsuInferenceClient> {
    CDMClientInterface *_client;
}

+ (BOOL)useXPC;
+ (id)graphNameForEmbedding;
+ (id)graphNameForSsuInference;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (id)initWithXPC:(BOOL)a0;
- (BOOL)daemonKilled;
- (id)errorFromSetup;
- (void)processCDMNluRequest:(id)a0;
- (BOOL)registerWithAssetsDelegate:(id)a0;
- (void)setup:(id)a0;
- (BOOL)successFromSetup;
- (void)sharedInitTasks;
- (void)waitForDataDispatcherCompletion;
- (BOOL)areAssetsAvailable:(id)a0;
- (void)doHandleCommand:(id)a0 forCallback:(id /* block */)a1;
- (void)doServiceCenterInitWithConfig:(id)a0;
- (void)handleOverridesAssetUpdateEvent:(id)a0;
- (void)initProxyObject:(BOOL)a0 delegate:(id)a1;
- (id)initWithXPCDelegate:(BOOL)a0 withDelegate:(id)a1;
- (BOOL)isLighthouseAPIEnabled;
- (void)processCDMNluRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)processEmbeddingRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)processEmbeddingRequest:(id)a0 requestId:(id)a1 completionHandler:(id /* block */)a2;
- (void)processNLUPreprocessRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)processSsuInferenceRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)setDataDispatcherContext:(id)a0;
- (void)setup:(id)a0 completionHandler:(id /* block */)a1;
- (void)setupKVOForwarding;
- (void)setupSsuInference:(id)a0 serviceStateDirectory:(id)a1 completionHandler:(id /* block */)a2;
- (void)setupWithLocale:(id)a0 embeddingVersion:(id)a1 completionHandler:(id /* block */)a2;
- (void)warmupWithCompletionHandler:(id /* block */)a0;

@end
