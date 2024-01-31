@class NSString, CORapportTransport, COBrowserObserverSet, NSObject;
@protocol OS_dispatch_queue, COCompanionLinkClientFactoryProtocol, COCompanionLinkClientProtocol;

@interface CORapportBrowser : NSObject <COBrowserProtocol> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _started;
    BOOL _activated;
}

@property (weak, nonatomic) CORapportTransport *sourceTransport;
@property (readonly, nonatomic) id<COCompanionLinkClientProtocol> listener;
@property (readonly, nonatomic) unsigned short listeningPort;
@property (copy, nonatomic) id /* block */ startCallback;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) id<COCompanionLinkClientFactoryProtocol> companionLinkClientFactory;
@property (readonly, nonatomic) COBrowserObserverSet *observerSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)removeObserver:(id)a0;
- (void)startWithCompletionHandler:(id /* block */)a0;
- (void)stop;
- (void).cxx_destruct;
- (void)_withLock:(id /* block */)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_onqueue_handleActivation:(id)a0;
- (void)_onqueue_handleFoundDevice:(id)a0;
- (void)_onqueue_handleLostDevice:(id)a0;
- (void)_onqueue_informObserversOfDiscoveredRecord:(id)a0;
- (void)_onqueue_informObserversOfLostRecord:(id)a0;
- (void)_onqueue_updateListeningPort:(id)a0;
- (id)_rapportDeviceWithCompanionLinkDevice:(id)a0;
- (id)addObserverUsingBlock:(id /* block */)a0;
- (id)registeredObservers;

@end
