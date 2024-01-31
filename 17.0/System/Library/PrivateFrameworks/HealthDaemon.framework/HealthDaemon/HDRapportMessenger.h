@class NSMutableDictionary, RPCompanionLinkClient;

@interface HDRapportMessenger : NSObject {
    RPCompanionLinkClient *_rapportClient;
    NSMutableDictionary *_observersBySchemaIdentifier;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (void)_handleIncomingRequest:(id)a0 responseHandler:(id /* block */)a1;
- (void)addObserver:(id)a0 forSchemaIdentifier:(long long)a1;
- (id)initForCompanionDevice;
- (id)newRapportClient;
- (void)removeObserver:(id)a0 forSchemaIdentifier:(long long)a1;
- (void)sendRequest:(id)a0 data:(id)a1 completion:(id /* block */)a2;

@end
