@class NSMapTable, NSString, NSHashTable, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface COCompanionLinkClientFactory : NSObject <COCompanionLinkClientFactoryProtocol> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_activeDevices;
}

@property (retain, nonatomic) NSHashTable *locals;
@property (readonly, nonatomic) NSMapTable *clients;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didInterrupt:(id)a0;
- (id)init;
- (void)removeClient:(id)a0;
- (BOOL)_isKnownDevice:(id)a0;
- (void).cxx_destruct;
- (id)initWithDispatchQueue:(id)a0;
- (void)_withLock:(id /* block */)a0;
- (id)activeDevices;
- (void)didInvalidate:(id)a0;
- (void)didLoseDevice:(id)a0;
- (void)didUpdateState:(id)a0;
- (id)_clientsForRapportClient_unsafe:(id)a0;
- (id)_reuseableRapportClientInClientsList:(id)a0;
- (void)activateCompanionLinkClient:(id)a0;
- (Class)companionLinkClientClass;
- (id)companionLinkClientForCurrentDevice;
- (id)companionLinkClientForDevice:(id)a0 withIDSIdentifier:(id)a1;
- (void)didActivate:(id)a0 error:(id)a1;
- (void)didChangeDevice:(id)a0 flags:(unsigned int)a1;
- (void)didChangeErrorFlags:(id)a0;
- (void)didDisconnect:(id)a0;
- (void)didFindDevice:(id)a0;
- (void)didRegisterEventID:(id)a0 client:(id)a1;
- (void)didRegisterRequestID:(id)a0 client:(id)a1;
- (void)didUpdateLocalDevice:(id)a0;
- (void)invalidateCompanionLinkClient:(id)a0;

@end
