@class NSString, NEExtensionProviderContext, NWPath, NWPathEvaluator;

@interface NEProvider : NSObject <NSExtensionRequestHandling> {
    NWPathEvaluator *_defaultPathEvaluator;
}

@property (retain) NWPath *defaultPath;
@property (retain) NEExtensionProviderContext *context;
@property (retain) NSString *appName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isNEProviderBundle:(id)a0 forExtensionPoint:(id)a1;
+ (BOOL)isRunningInProvider;
+ (void)startSystemExtensionMode;

- (id)init;
- (void)dealloc;
- (void)wake;
- (void).cxx_destruct;
- (void)sleepWithCompletionHandler:(id /* block */)a0;
- (void)beginRequestWithExtensionContext:(id)a0;
- (id)createTCPConnectionToEndpoint:(id)a0 enableTLS:(BOOL)a1 TLSParameters:(id)a2 delegate:(id)a3;
- (id)createUDPSessionToEndpoint:(id)a0 fromEndpoint:(id)a1;
- (void)displayMessage:(id)a0 completionHandler:(id /* block */)a1;
- (id)initAllowUnentitled:(BOOL)a0;
- (void)observerHelperHandler:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)setdefaultPathObserver:(id)a0;

@end
