@class NSUUID, NSString, HMFMessageDispatcher, NSNotificationCenter, NSObject, HMEPersistentConnectionServer;
@protocol OS_dispatch_queue, HMDXPCEventRouterServerDataSource;

@interface HMDXPCEventRouterServer : NSObject <HMFMessageReceiver, HMEPersistentConnectionServerDelegate, HMEPersistentConnectionServerDataSource, HMFLogging>

@property (readonly) HMEPersistentConnectionServer *persistentConnectionServer;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, copy) NSUUID *messageUUID;
@property (readonly, copy) NSString *changeRegistrationsMessageName;
@property (readonly, copy) NSString *updateEventsMessageName;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly, weak) id<HMDXPCEventRouterServerDataSource> dataSource;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)configure;
- (id)dumpStateDescription;
- (id)logIdentifier;
- (void).cxx_destruct;
- (void)registerForMessages;
- (void)sendUpdatedEvents:(id)a0 toConnection:(id)a1;
- (id)server:(id)a0 expandedTopicsForTopics:(id)a1;
- (void)sendUpdatedCachedEvents:(id)a0 toConnection:(id)a1;
- (id)server:(id)a0 upstreamTopicsForTopic:(id)a1;
- (BOOL)shouldAllowEvent:(id)a0 topic:(id)a1 connection:(id)a2;
- (void)handleXPCConnectionInvalidated:(id)a0;
- (void)_handleChangeRegistrationsRequest:(id)a0;
- (unsigned long long)debounceTimeForConnection:(id)a0;
- (void)handleConnectionActiveStateChange:(id)a0;
- (id)initWithMessageUUID:(id)a0 dataSource:(id)a1 changeRegistrationsMessageName:(id)a2 updateEventsMessageName:(id)a3 messageDispatcher:(id)a4 queue:(id)a5 notificationCenter:(id)a6 persistentConnectionServerFactory:(id /* block */)a7;
- (id)initWithMessageUUID:(id)a0 dataSource:(id)a1 changeRegistrationsMessageName:(id)a2 updateEventsMessageName:(id)a3 messageDispatcher:(id)a4 queue:(id)a5 notificationCenter:(id)a6 subscriptionProvider:(id)a7 registrationEventRouter:(id)a8 storeReadHandle:(id)a9;

@end
