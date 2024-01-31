@class NSString;
@protocol HDHRAFibBurdenNotificationManaging, HKHRAFibBurdenSevenDayAnalysisScheduling;

@interface HDHRAFibBurdenControlServer : HDStandardTaskServer <HKHRAFibBurdenControlServer> {
    id<HKHRAFibBurdenSevenDayAnalysisScheduling> _scheduler;
    id<HDHRAFibBurdenNotificationManaging> _notificationManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskIdentifier;
+ (Class)configurationClass;
+ (BOOL)validateConfiguration:(id)a0 client:(id)a1 error:(id *)a2;
+ (id)createTaskServerWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3 error:(id *)a4;

- (id)exportedInterface;
- (id)remoteInterface;
- (id)_clientRemoteObjectProxy;
- (void).cxx_destruct;
- (void)_addTachogramsForStartDayIndex:(long long)a0 endDayIndex:(long long)a1 chanceOfAFib:(double)a2 chanceOfWrite:(double)a3 minutesBetweenSamples:(long long)a4 startingHour:(long long)a5 endingHour:(long long)a6 completion:(id /* block */)a7;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3 scheduler:(id)a4 notificationManager:(id)a5;
- (void)remote_addTachogramClassificationForSampleUUID:(id)a0 hasAFib:(BOOL)a1 completion:(id /* block */)a2;
- (void)remote_addTachogramsForStartDayIndex:(long long)a0 endDayIndex:(long long)a1 chanceOfAFib:(id)a2 chanceOfWrite:(id)a3 minutesBetweenSamples:(id)a4 startingHour:(id)a5 endingHour:(id)a6 completion:(id /* block */)a7;
- (void)remote_deleteAllTachogramClassificationsWithCompletion:(id /* block */)a0;
- (void)remote_deleteTachogramClassificationForSampleUUID:(id)a0 completion:(id /* block */)a1;
- (void)remote_determineIfAnalysisCanRunWithFeatureStatus:(id)a0 completion:(id /* block */)a1;
- (void)remote_determineMajorityTimeZoneForStartDayIndex:(long long)a0 endDayIndex:(long long)a1 completion:(id /* block */)a2;
- (void)remote_fetchSevenDayAnalysisBreadcrumbsWithCompletion:(id /* block */)a0;
- (void)remote_injectBurdenValues:(id)a0 completion:(id /* block */)a1;
- (void)remote_performAnalysisForWeekContainingDayIndex:(long long)a0 completion:(id /* block */)a1;
- (void)remote_queryAllTachogramClassificationsWithCompletion:(id /* block */)a0;
- (void)remote_queryEligibleTachogramsForPreviousSixWeeksForTimeOfDayBucket:(long long)a0 completion:(id /* block */)a1;
- (void)remote_queryEligibleTachogramsForPreviousSixWeeksForWeekday:(long long)a0 completion:(id /* block */)a1;
- (void)remote_queryEligibleTachogramsForStartDayIndex:(long long)a0 endDayIndex:(long long)a1 completion:(id /* block */)a2;
- (void)remote_queryTachogramClassificationForSampleUUID:(id)a0 completion:(id /* block */)a1;
- (void)remote_sendNotificationWithMode:(id)a0 completion:(id /* block */)a1;
- (void)remote_triggerAnalysis;

@end
