@class NSMutableDictionary, NSString, NSNotificationCenter, NSDate, HMMDateProvider, HMDEventCountersManager;
@protocol HMDCurrentResidentDeviceDataSource, HMMLogEventDispatching;

@interface HMDThreadNetworkObserver : NSObject <HMMLogEventObserver, HMDLogEventDailyTaskRunner>

@property (readonly, weak, nonatomic) id<HMMLogEventDispatching> logEventDispatcher;
@property (readonly, weak, nonatomic) HMDEventCountersManager *countersManager;
@property (readonly, weak, nonatomic) NSNotificationCenter *notificationCenter;
@property (readonly, weak, nonatomic) id<HMDCurrentResidentDeviceDataSource> currentHomeDataSource;
@property (readonly, weak, nonatomic) HMMDateProvider *dateProvider;
@property (nonatomic) unsigned long long curReport_numAdvertisedBRs;
@property (nonatomic) unsigned long long curReport_numAppleBRs;
@property (nonatomic) unsigned long long curReport_numThirdPartyBRs;
@property (nonatomic) unsigned long long curReport_numThreadNetworks;
@property (nonatomic) unsigned long long curReport_maxSimuIPPrefixes;
@property (nonatomic) unsigned long long curReport_txTotal;
@property (nonatomic) unsigned long long curReport_txSuccess;
@property (nonatomic) unsigned long long curReport_txDelayAvg;
@property (nonatomic) unsigned long long curReport_rxTotal;
@property (nonatomic) unsigned long long curReport_rxSuccess;
@property (nonatomic) unsigned long long curReport_reportDuration;
@property (nonatomic) BOOL curReport_threadNetworkUp;
@property (nonatomic) double curReport_threadNetworkUpDuration;
@property (nonatomic) double curReport_threadNetworkDownDuration;
@property (retain, nonatomic) NSDate *curReport_threadNetworkLastUpTime;
@property (retain, nonatomic) NSDate *curReport_threadNetworkLastDownTime;
@property (nonatomic) unsigned long long curReport_readWritesCount;
@property (nonatomic) unsigned long long curReport_readErrorCount;
@property (nonatomic) unsigned long long curReport_writeErrorCount;
@property (readonly, nonatomic) NSMutableDictionary *curReport_topReadWriteErrors;
@property (readonly, nonatomic) NSMutableDictionary *curReport_topSessionErrors;
@property (readonly, nonatomic) BOOL started;
@property (readonly, nonatomic) BOOL dailyReportingRegistered;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportedEventClasses;

- (void)start;
- (void)stop;
- (void).cxx_destruct;
- (void)deleteCountersAfterDate:(id)a0;
- (void)deleteCountersBeforeDate:(id)a0;
- (void)didReceiveEventFromDispatcher:(id)a0;
- (void)_handleAccessorySessionEvent:(id)a0;
- (void)_handleReadWriteLogEvent:(id)a0;
- (void)_incrementError:(id)a0 forHistogram:(id)a1 byValue:(unsigned long long)a2;
- (void)_injectThreadNetworkStateForTestingWithNumAdvertisedBRs:(unsigned long long)a0 numAppleBRs:(unsigned long long)a1 numThirdPartyBRs:(unsigned long long)a2 numThreadNetworks:(unsigned long long)a3 maxSimuIPPrefixesDetected:(unsigned long long)a4 txTotal:(unsigned long long)a5 txSuccess:(unsigned long long)a6 txDelayAvg:(unsigned long long)a7 rxTotal:(unsigned long long)a8 rxSuccess:(unsigned long long)a9 reportDuration:(unsigned long long)a10 reportDate:(id)a11 reportDailySummary:(BOOL)a12;
- (id)_keyOfLargestCountInHistogram:(id)a0;
- (void)_runLoggingForDate:(id)a0 isDailySummary:(BOOL)a1;
- (void)_setDailyScheduler:(id)a0;
- (void)_updateDailyCountersAndResetCurrentReportStatsForHomeWithUUID:(id)a0 associatedWithDate:(id)a1;
- (id)counterGroupForName:(id)a0 homeUUID:(id)a1 date:(id)a2;
- (void)generateLogForPeriodicReport:(id)a0;
- (id)initWithLogEventDispatcher:(id)a0 countersManager:(id)a1 dailyScheduler:(id)a2 currentHomeDataSource:(id)a3 dateProvider:(id)a4;
- (id)initWithLogEventDispatcher:(id)a0 countersManager:(id)a1 dailyScheduler:(id)a2 currentHomeDataSource:(id)a3 dateProvider:(id)a4 notificationCenter:(id)a5;
- (id)logEventForHomeWithUUID:(id)a0 associatedWithDate:(id)a1 isDailySummary:(BOOL)a2;
- (void)requestThreadNetworkStateCaptureForAccessory:(id)a0 failingScenario:(int)a1;
- (void)runDailyTask;

@end
