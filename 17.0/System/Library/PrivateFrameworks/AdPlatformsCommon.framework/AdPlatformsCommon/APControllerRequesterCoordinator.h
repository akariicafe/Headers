@class NSMutableDictionary, APUnfairRecursiveLock;

@interface APControllerRequesterCoordinator : APXPCActionRequester <APPCControllerClientInterface>

@property (retain, nonatomic) NSMutableDictionary *requestDelegates;
@property (retain, nonatomic) APUnfairRecursiveLock *lock;

+ (id)machService;
+ (BOOL)canShareConnection;
+ (id)requestCoordinator;

- (id)exportedInterface;
- (id)remoteObjectInterface;
- (void)connectionInterrupted;
- (id)init;
- (void)proxyURLForRequester:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)contentResponses:(id)a0 requester:(id)a1;
- (void)preWarm:(id)a0 forRequester:(id)a1;
- (id)exportedObject;
- (id)proxyURLForRequester:(id)a0;
- (void)connectionInvalidated;
- (void)requestPromotedContentOfTypes:(id)a0 forRequester:(id)a1 forContext:(id)a2 completionHandler:(id /* block */)a3;
- (void)finishedWithRequestsForID:(id)a0;
- (void).cxx_destruct;
- (void)extendCollectionClassesForRemoteInterface:(id)a0;
- (void)_addDelegate:(id)a0 withID:(id)a1;
- (void)sendAndRankContent:(id)a0 forContext:(id)a1 placement:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (void)extendCollectionClassesForExportedInterface:(id)a0;

@end
