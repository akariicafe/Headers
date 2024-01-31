@class NSMutableArray, NSObject;
@protocol HMETimer, OS_os_log, HMEMessageDatagramServerDataSource, HMEMessageDatagramServerDelegate;

@interface HMEMessageDatagramServer : HMERouterServer {
    NSObject<OS_os_log> *_logger;
}

@property (readonly, nonatomic) NSMutableArray *connectionInfoItems;
@property (retain) id<HMETimer> connectionExpiryTimer;
@property (retain) id<HMETimer> connectionDebounceTimer;
@property (weak) id<HMEMessageDatagramServerDelegate> delegate;
@property (weak) id<HMEMessageDatagramServerDataSource> dataSource;

- (id)upstreamTopicsForTopic:(id)a0;
- (id)dumpStateDescription;
- (void)changeRegistrationsForConnection:(id)a0 topicFilterAdditions:(id)a1 topicFilterRemovals:(id)a2 completion:(id /* block */)a3;
- (void)reset;
- (void)handleEvent:(id)a0 topic:(id)a1;
- (id)initWithQueue:(id)a0 provider:(id)a1 registrationEventRouter:(id)a2;
- (id)initWithQueue:(id)a0 provider:(id)a1 registrationEventRouter:(id)a2 storeReadHandle:(id)a3 logCategory:(const char *)a4;
- (void)handleCachedEvent:(id)a0 topic:(id)a1;
- (void)disconnectConnection:(id)a0;
- (void).cxx_destruct;
- (id)expandedTopicsForTopics:(id)a0;
- (void)keepAliveConnection:(id)a0 completion:(id /* block */)a1;
- (void)connectWithConnection:(id)a0 connectEvent:(id)a1 unregisterEvent:(id)a2 topicFilterAdditions:(id)a3 completion:(id /* block */)a4;
- (void)fetchCachedEventsForTopics:(id)a0 completion:(id /* block */)a1;
- (void)refreshConnection:(id)a0;
- (void)resetExistingEvents;

@end
