@class NSMapTable, NSString, HMETopicRouter, NSObject;
@protocol OS_os_log, HMESynchronousSubscriptionProviding, HMELastEventStoreReadHandle, HMEEventForwarder, OS_dispatch_queue;

@interface HMERouterServer : NSObject <HMEEventConsumer, HMETopicRouterDelegate, HMELastEventStoreWriter> {
    NSObject<OS_os_log> *_logger;
}

@property (readonly) NSMapTable *unregisterEvents;
@property (readonly) id<HMESynchronousSubscriptionProviding> subscriptionProvider;
@property (readonly) id<HMEEventForwarder> localEventForwarder;
@property (readonly) id<HMELastEventStoreReadHandle> eventStoreReadHandle;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) HMETopicRouter *topicRouter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)upstreamTopicsForTopic:(id)a0;
- (id)dumpStateDescription;
- (void)didReceiveEvent:(id)a0 topic:(id)a1;
- (void)didChangeRegistrationsWithTopicFilterAdditions:(id)a0 removals:(id)a1;
- (void)handleEvent:(id)a0 topic:(id)a1;
- (id)initWithQueue:(id)a0 provider:(id)a1 registrationEventRouter:(id)a2;
- (void)handleCachedEvent:(id)a0 topic:(id)a1;
- (void).cxx_destruct;
- (void)didReceiveCachedEvent:(id)a0 topic:(id)a1 source:(id)a2;
- (id)expandedTopicsForTopics:(id)a0;
- (id)cachedEventsForExpandedTopics:(id)a0;
- (void)didConnectConnection:(id)a0 connectEvent:(id)a1 unregisterEvent:(id)a2;
- (void)didRemoveConnection:(id)a0;
- (id)initWithQueue:(id)a0 provider:(id)a1 registrationEventRouter:(id)a2 storeReadHandle:(id)a3 logger:(id)a4;

@end
