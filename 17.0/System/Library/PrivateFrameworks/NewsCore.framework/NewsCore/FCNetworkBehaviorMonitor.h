@class NSDate, NSString, NSArray, FCKeyValueStore, NSHashTable, NSObject, NSMutableArray, NSMutableIndexSet;
@protocol OS_dispatch_queue, FCOperationThrottler;

@interface FCNetworkBehaviorMonitor : NSObject <FCNetworkReachabilityObserving, FCOperationThrottlerDelegate> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableArray *_sessions;
    NSMutableIndexSet *_sessionIDsThisLaunch;
    NSMutableArray *_events;
    FCKeyValueStore *_localStore;
    id<FCOperationThrottler> _saveThrottler;
    NSHashTable *_observers;
}

@property (copy) NSDate *dateOfLastNetworkIssue;
@property (readonly, copy, nonatomic) NSArray *sessions;
@property (readonly, copy, nonatomic) NSArray *networkEvents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithCacheDirectory:(id)a0;
- (void)removeObserver:(id)a0;
- (void)wifiReachabilityDidChange:(id)a0;
- (void)logNetworkEvent:(id)a0;
- (void)populateTelemetry:(id)a0 withNetworkEventsFromDate:(id)a1 toDate:(id)a2;
- (id)initForLoggingOnly;
- (void).cxx_destruct;
- (void)operationThrottlerPerformOperation:(id)a0;
- (void)addObserver:(id)a0;

@end
