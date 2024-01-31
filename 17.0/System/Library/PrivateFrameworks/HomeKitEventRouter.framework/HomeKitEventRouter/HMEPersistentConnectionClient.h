@class NSObject;
@protocol OS_os_log, HMEPersistentConnectionClientDelegate;

@interface HMEPersistentConnectionClient : HMERouterClient {
    NSObject<OS_os_log> *_logger;
}

@property (weak) id<HMEPersistentConnectionClientDelegate> delegate;

- (id)forwardingTopicsForTopics:(id)a0;
- (id)initWithQueue:(id)a0 storeReadHandle:(id)a1 storeWriteHandle:(id)a2 logger:(id)a3;
- (id)initWithQueue:(id)a0;
- (void)processReceivedEventsFromMessage:(id)a0;
- (unsigned long long)willWriteToStore;
- (void)didReconnect;
- (void)didInvalidateConnection;
- (void)processReceivedCachedEventsFromMessage:(id)a0;
- (BOOL)isActiveForSaving;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0 storeReadHandle:(id)a1 storeWriteHandle:(id)a2;
- (void)finishedWritingToStore:(unsigned long long)a0;

@end
