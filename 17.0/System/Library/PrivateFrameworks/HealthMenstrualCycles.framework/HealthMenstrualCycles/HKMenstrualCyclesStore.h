@class NSString, HKHealthStore, HKCloudSyncControl, NSDate, NSNumber, HKTaskServerProxyProvider;

@interface HKMenstrualCyclesStore : NSObject <HKMenstrualCyclesStoreInterface, _HKXPCExportable> {
    HKTaskServerProxyProvider *_proxyProvider;
}

@property (readonly, nonatomic) HKCloudSyncControl *cloudSyncControl;
@property (readonly, nonatomic) HKHealthStore *healthStore;
@property (retain, nonatomic) NSNumber *lastMenstrualPeriodDismissalDay;
@property (retain, nonatomic) NSDate *cycleFactorsLastReviewedDate;
@property (retain, nonatomic) NSNumber *unconfirmedDeviationDismissalDay;
@property (retain, nonatomic) NSNumber *unconfirmedDeviationSubmissionDay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)exportedInterface;
- (id)remoteInterface;
- (id)initWithHealthStore:(id)a0;
- (void)connectionInvalidated;
- (void)_triggerImmediateSyncWithReason:(id)a0;
- (void).cxx_destruct;
- (id)_appProtectedSyncedKeyValueDomain;
- (id)_deviationDetectionAnalyticsDomain;
- (id)_syncedProtectedKeyValueDomain;
- (void)confirmAndSaveDeviationWithMenstrualFlowByDayIndex:(id)a0 intermenstrualBleedingByDayIndex:(id)a1 addedCycleFactors:(id)a2 initialAnalysisWindow:(struct { long long x0; long long x1; })a3 completion:(id /* block */)a4;
- (id)deviationDetectedIndicesForDeviationType:(long long)a0 error:(id *)a1;
- (void)fetchScheduledNotificationsWithCompletion:(id /* block */)a0;
- (void)saveDaySummaries:(id)a0 canOverrideCreationDate:(BOOL)a1 completion:(id /* block */)a2;
- (void)saveDaySummaries:(id)a0 completion:(id /* block */)a1;
- (void)saveDaySummary:(id)a0 completion:(id /* block */)a1;
- (void)saveLastMenstrualPeriodWithDayIndexRange:(struct { long long x0; long long x1; })a0 completion:(id /* block */)a1;
- (void)saveMenstrualFlow:(long long)a0 dayIndex:(long long)a1 updateAdjacentDays:(BOOL)a2 completion:(id /* block */)a3;
- (void)saveMenstrualFlowByDayIndex:(id)a0 completion:(id /* block */)a1;
- (void)savePeriodEndedOnDayIndex:(long long)a0 completion:(id /* block */)a1;
- (void)savePeriodNotYetEndedWithCompletion:(id /* block */)a0;
- (void)savePeriodNotYetStartedWithCompletion:(id /* block */)a0;
- (void)savePeriodStartedOnDayIndex:(long long)a0 completion:(id /* block */)a1;
- (void)savePeriodStartedOnDayIndex:(long long)a0 endedOnDayIndex:(long long)a1 completion:(id /* block */)a2;
- (BOOL)setDeviationDetectedIfNeededForDeviations:(id)a0;
- (void)setIsEligibleForCycleFactorsReminder:(BOOL)a0;
- (void)triggerAnalysisForDebugReason:(id)a0 completion:(id /* block */)a1;

@end
