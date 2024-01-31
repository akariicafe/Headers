@class NSString, HKHealthStore, HKTaskServerProxyProvider;

@interface HKHRAFibBurdenControl : NSObject <_HKXPCExportable, HKHRAFibBurdenControlClient> {
    HKHealthStore *_healthStore;
    HKTaskServerProxyProvider *_proxyProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)exportedInterface;
- (id)remoteInterface;
- (id)initWithHealthStore:(id)a0;
- (void)connectionInvalidated;
- (void).cxx_destruct;
- (void)queryEligibleTachogramsForStartDayIndex:(long long)a0 endDayIndex:(long long)a1 completion:(id /* block */)a2;
- (void)triggerAnalysis;
- (void)setLastAnalysisDate:(id)a0 completion:(id /* block */)a1;
- (void)addTachogramClassificationForSampleUUID:(id)a0 hasAFib:(BOOL)a1 completion:(id /* block */)a2;
- (void)addTachogramsForStartDayIndex:(long long)a0 endDayIndex:(long long)a1 chanceOfAFib:(id)a2 chanceOfWrite:(id)a3 minutesBetweenSamples:(id)a4 startingHour:(id)a5 endingHour:(id)a6 completion:(id /* block */)a7;
- (void)deleteAllTachogramClassificationsWithCompletion:(id /* block */)a0;
- (void)deleteTachogramClassificationForSampleUUID:(id)a0 completion:(id /* block */)a1;
- (id)determineIfAnalysisCanRunWithFeatureStatus:(id)a0 error:(id *)a1;
- (void)determineMajorityTimeZoneForStartDayIndex:(long long)a0 endDayIndex:(long long)a1 completion:(id /* block */)a2;
- (void)fetchLastAnalysisDateWithCompletion:(id /* block */)a0;
- (void)fetchSevenDayAnalysisBreadcrumbsWithCompletion:(id /* block */)a0;
- (id)fetchSevenDayAnalysisBreadcrumbsWithError:(id *)a0;
- (void)injectBurdenValues:(id)a0 completion:(id /* block */)a1;
- (id)performAnalysisForWeekContainingDayIndex:(long long)a0 error:(id *)a1;
- (void)queryAllTachogramClassificationsWithCompletion:(id /* block */)a0;
- (void)queryEligibleTachogramsForPreviousSixWeeksForTimeOfDayBucket:(long long)a0 completion:(id /* block */)a1;
- (void)queryEligibleTachogramsForPreviousSixWeeksForWeekday:(long long)a0 completion:(id /* block */)a1;
- (void)queryTachogramClassificationForSampleUUID:(id)a0 completion:(id /* block */)a1;
- (void)sendNotificationForCurrentValue:(id)a0 previousValue:(id)a1 shouldForwardToWatch:(BOOL)a2 completion:(id /* block */)a3;
- (void)sendNotificationWithMode:(id)a0 completion:(id /* block */)a1;

@end
