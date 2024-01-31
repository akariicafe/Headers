@class NSXPCListenerEndpoint, NSMutableDictionary, NSXPCConnection, NSString, NSObject, BMComputeXPCPublisherClientDomainConfiguration;
@protocol OS_dispatch_queue, BMComputePublisher;

@interface BMComputeXPCPublisherClient : NSObject <BMComputePublishing, BMComputePublisher> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSXPCConnection *_connection;
    int _token;
    NSXPCListenerEndpoint *_listenerEndpoint;
    BMComputeXPCPublisherClientDomainConfiguration *_configuration;
    id<BMComputePublisher> _localComputePublisher;
}

@property (readonly, nonatomic) NSMutableDictionary *subscriptions;
@property (readonly, nonatomic) NSMutableDictionary *pendingEvents;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSXPCConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;
+ (void)_setQueue:(id)a0 domain:(unsigned long long)a1;
+ (id)new;
+ (void)initializeSharedClientWithQueue:(id)a0 domain:(unsigned long long)a1;
+ (id)sharedWithQueue:(id)a0 domain:(unsigned long long)a1;

- (id)init;
- (void)dealloc;
- (void)receiveInputForIdentifier:(id)a0 streamIdentifier:(id)a1 storeEvent:(id)a2;
- (void)unsubscribeWithIdentifier:(id)a0;
- (void)subscribeViaNSXPC:(id)a0;
- (id)initWithQueue:(id)a0 domain:(unsigned long long)a1 listenerEndpoint:(id)a2 localComputePublisher:(id)a3;
- (void)subscribe:(id)a0;
- (void)registerBiomeLaunchNotification;
- (id)computePublisherObjectWithErrorHandler:(id /* block */)a0;
- (void)_handleEventWithPayload:(id)a0;
- (void).cxx_destruct;
- (void)handleBiomeRelaunch;
- (void)_setXPCEvent:(id)a0 identifier:(id)a1;
- (void)subscribeViaXPCEvent:(id)a0;
- (unsigned long long)numberOfExistingNonWakingSubscriptions;
- (id)initWithQueue:(id)a0 configuration:(id)a1 listenerEndpoint:(id)a2 localComputePublisher:(id)a3;
- (void)unregisterBiomeLaunchNotification;
- (BOOL)isRegisteredForRelaunchNotification;

@end
