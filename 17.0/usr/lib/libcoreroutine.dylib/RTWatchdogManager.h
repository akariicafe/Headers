@class RTPlatform, RTTimer, RTLifeCycleManager, RTHangsMetrics, RTDefaultsManager, NSObject, NSMutableArray, RTTimerManager;
@protocol OS_dispatch_queue;

@interface RTWatchdogManager : NSObject

@property (retain, nonatomic) RTTimer *watchdogHeartbeatTimer;
@property (retain, nonatomic) RTTimerManager *timerManager;
@property (retain, nonatomic) RTLifeCycleManager *lifecycleManager;
@property (retain, nonatomic) NSMutableArray *records;
@property (retain, nonatomic) RTHangsMetrics *metrics;
@property (retain, nonatomic) RTDefaultsManager *defaultsManager;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) RTPlatform *platform;
@property (nonatomic) double fireInterval;
@property (nonatomic) double timeout;

- (void)setTimeoutAndFireInterval;
- (void)_onTimerExpiry;
- (void)_removeObject:(id)a0;
- (id)init;
- (void)_shutdownWithHandler:(id /* block */)a0;
- (void)_timeoutExceeded:(id)a0;
- (void)shutdownWithHandler:(id /* block */)a0;
- (id)initWithLifeCycleManager:(id)a0 defaultsManager:(id)a1 platform:(id)a2;
- (id)_getRecordsWithCriteria:(BOOL)a0;
- (void)_checkInAllStartedRecords:(id)a0;
- (void)_addObject:(id)a0;
- (void)_checkInAllRecords;
- (void).cxx_destruct;
- (void)removeObject:(id)a0;
- (void)addObject:(id)a0;
- (void)_checkInAllStoppedRecords:(id)a0;
- (id)initWithTimerManager:(id)a0 lifeCycleManager:(id)a1 defaultsManager:(id)a2 platform:(id)a3;

@end
