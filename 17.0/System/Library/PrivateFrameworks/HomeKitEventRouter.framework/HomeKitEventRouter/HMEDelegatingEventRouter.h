@class NSUUID, NSString, HMETopicRouter, NSMutableSet, NSObject;
@protocol OS_os_log, HMELastEventStoreReadHandle, OS_dispatch_queue, HMEDelegatingEventRouterDataSource;

@interface HMEDelegatingEventRouter : NSObject <HMETopicRouterDelegate, HMEEventConsumer, HMESubscriptionProviding, HMESynchronousSubscriptionProviding> {
    NSObject<OS_os_log> *_logger;
    NSObject<OS_dispatch_queue> *_queue;
    HMETopicRouter *_topicRouter;
    NSMutableSet *_subRouters;
    id<HMEDelegatingEventRouterDataSource> _dataSource;
    id<HMELastEventStoreReadHandle> _eventStoreReadHandle;
}

@property (readonly) NSUUID *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)upstreamTopicsForTopic:(id)a0;
- (void)registerConsumer:(id)a0 topicFilters:(id)a1 completion:(id /* block */)a2;
- (void)changeRegistrationsForConsumer:(id)a0 topicFilterAdditions:(id)a1 topicFilterRemovals:(id)a2 completion:(id /* block */)a3;
- (void)didReceiveEvent:(id)a0 topic:(id)a1;
- (void)changeRegistrationsSyncForConsumer:(id)a0 topicFilterAdditions:(id)a1 topicFilterRemovals:(id)a2 completion:(id /* block */)a3;
- (void)unregisterConsumerSync:(id)a0 completion:(id /* block */)a1;
- (void)didChangeRegistrationsWithTopicFilterAdditions:(id)a0 removals:(id)a1;
- (void)unregisterConsumer:(id)a0 completion:(id /* block */)a1;
- (id)initWithQueue:(id)a0 dataSource:(id)a1;
- (void).cxx_destruct;
- (void)didReceiveCachedEvent:(id)a0 topic:(id)a1 source:(id)a2;
- (void)unregisterConsumer:(id)a0 topicFilters:(id)a1 completion:(id /* block */)a2;
- (id)initWithQueue:(id)a0 dataSource:(id)a1 logger:(id)a2;
- (id)initWithQueue:(id)a0 dataSource:(id)a1 storeReadHandle:(id)a2 logCategory:(const char *)a3 identifier:(id)a4;
- (id)initWithQueue:(id)a0 dataSource:(id)a1 storeReadHandle:(id)a2 logger:(id)a3 identifier:(id)a4;
- (void)registerSubRouter:(id)a0;
- (void)unregisterSubRouter:(id)a0;

@end
