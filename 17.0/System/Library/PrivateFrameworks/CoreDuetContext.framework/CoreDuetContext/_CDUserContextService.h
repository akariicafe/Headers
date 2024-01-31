@class _CDInMemoryUserContext, NSXPCListener, NSMutableDictionary, NSMutableSet, _CDXPCEventPublisher, NSObject, NSString;
@protocol OS_dispatch_queue, _CDContextPersisting;

@interface _CDUserContextService : NSObject <NSXPCListenerDelegate, _CDXPCEventPublisherDelegate>

@property (retain, nonatomic) _CDInMemoryUserContext *userContext;
@property (retain, nonatomic) NSMutableSet *clients;
@property (retain, nonatomic) NSXPCListener *listener;
@property (retain, nonatomic) id<_CDContextPersisting> persistence;
@property (retain, nonatomic) NSMutableSet *openRegistrations;
@property (retain, nonatomic) NSMutableSet *firedRegistrations;
@property (retain, nonatomic) NSMutableDictionary *firedRegistrationInfos;
@property (retain, nonatomic) _CDXPCEventPublisher *mdcsEventPublisher;
@property (retain, nonatomic) _CDXPCEventPublisher *notificationEventPublisher;
@property (retain, nonatomic) NSMutableDictionary *mdcsEventSubscribersByToken;
@property (retain, nonatomic) NSMutableDictionary *notificationEventSubscribersByToken;
@property (retain, nonatomic) NSMutableDictionary *notificationEventSubscribersByClientIdentifier;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic) BOOL remoteDevicesHaveBeenActivated;
@property (readonly, nonatomic) NSMutableDictionary *remoteDevicesByDeviceID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstanceWithPersistence:(id)a0;
+ (id)sharedInstanceWithSharedMemoryStore:(id)a0;

- (void)clientWasInterrupted:(id)a0;
- (void)requestActivateDevicesFromSubscriber:(id)a0 withHandler:(id /* block */)a1;
- (unsigned long long)tokenForSourceDeviceUUID:(id)a0;
- (void)removeOpenRegistration:(id)a0;
- (void)start;
- (void)regenerateState;
- (void)addProxyWithSourceDeviceUUID:(id)a0;
- (id)subscriberForSourceDeviceUUID:(id)a0;
- (id)subscribersForClientIdentifier:(id)a0;
- (void)removeTokenForUserID:(unsigned int)a0;
- (void)informClientOfFiredRegistration:(id)a0 info:(id)a1;
- (id)initWithListener:(id)a0 withPersistence:(id)a1 withStorage:(id)a2 withStore:(id)a3;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)removeSubscriberWithToken:(unsigned long long)a0 streamName:(id)a1;
- (void)requestActivateDevicesFromAllSubscribersWithHandler:(id /* block */)a0;
- (void)setToken:(unsigned long long)a0 forUserID:(unsigned int)a1;
- (id)initWithListener:(id)a0 withStorage:(id)a1 withStore:(id)a2;
- (void)sendEvent:(id)a0 toProxy:(id)a1 handler:(id /* block */)a2;
- (void)deleteSavedData;
- (void).cxx_destruct;
- (id)obtainFiredRegistrationMatchingRegistration:(id)a0 info:(id *)a1;
- (void)sendEvent:(id)a0 toProxy:(id)a1 replyHandler:(id /* block */)a2;
- (void)fetchProxySourceDeviceUUIDFromSubscriber:(id)a0;
- (void)addSubscriber:(id)a0;
- (void)sendEvent:(id)a0 toClient:(id)a1 handler:(id /* block */)a2;
- (id)proxySourceDeviceUUIDForUserID:(unsigned int)a0;
- (BOOL)setMappingObject:(id)a0 forContextualKeyPath:(id)a1;
- (void)setProxySourceDeviceUUID:(id)a0 forUserID:(unsigned int)a1;
- (void)sendEvent:(id)a0 toClient:(id)a1 replyHandler:(id /* block */)a2;
- (void)addOpenRegistration:(id)a0;

@end
