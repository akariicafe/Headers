@class COIDSPresence, COIDSServiceDirector, NSString, COBrowserObserverSet, NSObject;
@protocol OS_dispatch_queue, NSObject;

@interface COIDSBrowser : NSObject <COIDSPresenceObserver, COIDSServiceDirectorOnDemandDiscoveryDelegate, COBrowserProtocol> {
    BOOL _started;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) id<NSObject> idsRegistryObserver;
@property (copy, nonatomic) id /* block */ idsPresenceProvider;
@property (retain, nonatomic) COIDSPresence *presence;
@property (retain, nonatomic) COIDSServiceDirector *serviceDirector;
@property (copy, nonatomic) id /* block */ idsServiceProvider;
@property (readonly, copy, nonatomic) NSString *meshName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) COBrowserObserverSet *observerSet;

- (void)removeObserver:(id)a0;
- (void)startWithCompletionHandler:(id /* block */)a0;
- (void)stop;
- (void).cxx_destruct;
- (void)didAddDevice:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)didRemoveDevice:(id)a0;
- (id)addObserverUsingBlock:(id /* block */)a0;
- (id)initWithMeshName:(id)a0 idsServiceName:(id)a1;
- (void)onDemandDiscoveryForRequest:(id)a0;
- (id)registeredObservers;

@end
