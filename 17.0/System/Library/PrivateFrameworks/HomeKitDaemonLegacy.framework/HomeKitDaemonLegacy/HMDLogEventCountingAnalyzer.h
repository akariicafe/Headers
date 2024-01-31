@class HMDEventCountersManager, NSMutableDictionary, NSString, HMDEventCounterGroup, HMMDateProvider, NSObject;
@protocol OS_dispatch_queue;

@interface HMDLogEventCountingAnalyzer : HMDLogEventAnalyzer <HMDLogEventDailyTaskRunner> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSMutableDictionary *currentPeriodCounters;
@property (readonly, nonatomic) HMMDateProvider *dateProvider;
@property (readonly, nonatomic) id /* block */ tickSecondsProviderBlock;
@property (readonly, nonatomic) id /* block */ periodicCountersSnapshotBlock;
@property (readonly) unsigned long long loggingPeriodicitySeconds;
@property (nonatomic) unsigned long long tickSecondsLastLogged;
@property (readonly, nonatomic) NSString *serialNumber;
@property (readonly, nonatomic) HMDEventCountersManager *countersManager;
@property (retain, nonatomic) HMDEventCounterGroup *currentDayCountersGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)deleteCountersAfterDate:(id)a0;
- (void)deleteCountersBeforeDate:(id)a0;
- (void)didReceiveEventFromDispatcher:(id)a0;
- (void)didReceiveEventFromDispatcher:(id)a0 withCurrentTickSeconds:(unsigned long long)a1;
- (void)incrementDailyCountersForEventName:(id)a0;
- (void)incrementPeriodicCountersForEventName:(id)a0;
- (id)initWithEventCountersManager:(id)a0 dailyScheduler:(id)a1 dateProvider:(id)a2 systemInfo:(id)a3 queue:(id)a4;
- (id)initWithEventCountersManager:(id)a0 dailyScheduler:(id)a1 dateProvider:(id)a2 systemInfo:(id)a3 queue:(id)a4 loggingPeriodicitySeconds:(unsigned long long)a5 tickSecondsProviderBlock:(id /* block */)a6 periodicCountersLoggingBlock:(id /* block */)a7;
- (id)periodicSnapshotAtCurrentTickSeconds:(unsigned long long)a0;
- (void)runDailyTask;

@end
