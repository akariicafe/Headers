@class HDProfile, HKHRAFibBurdenSevenDayAnalysisManager, HKFeatureStatusManager, HDKeyValueDomain;
@protocol HKHRAFibBurdenSevenDayAnalysisSchedulerDelegate, HKHRDatabaseAnalysisScheduler, HDHRAFibBurdenSevenDayAnalysisBreadcrumbManaging, HKHRAFibBurdenSevenDayAnalysisFeatureStatusInspecting, HKHRAFibBurdenSevenDayAnalysisSchedulerAlarm;

@interface HKHRAFibBurdenSevenDayAnalysisScheduler : NSObject <HKHRAFibBurdenSevenDayAnalysisSchedulerAlarmDelegate, HKHRDatabaseAnalysisSchedulerDelegate, HKHRAFibBurdenSevenDayAnalysisScheduling> {
    HDProfile *_profile;
    HKHRAFibBurdenSevenDayAnalysisManager *_analysisManager;
    HKFeatureStatusManager *_featureStatusManager;
    id<HKHRAFibBurdenSevenDayAnalysisFeatureStatusInspecting> _featureStatusInspector;
    id<HKHRAFibBurdenSevenDayAnalysisSchedulerAlarm> _alarm;
    id<HKHRDatabaseAnalysisScheduler> _scheduler;
    id<HDHRAFibBurdenSevenDayAnalysisBreadcrumbManaging> _breadcrumbManager;
    HDKeyValueDomain *_syncedKeyValueDomain;
}

@property (weak, nonatomic) id<HKHRAFibBurdenSevenDayAnalysisSchedulerDelegate> delegate;

- (id)_performAnalysisWithFeatureStatus:(id)a0 error:(id *)a1;
- (void)initialAnalysisAlarmDidFireWithAlarm:(id)a0;
- (void)_saveLastAnalysisCompletedDateForResult:(id)a0;
- (void)_logAnalysisResult:(long long)a0 error:(id)a1;
- (id)initWithProfile:(id)a0 analysisManager:(id)a1 featureStatusManager:(id)a2 featureStatusInspector:(id)a3 alarm:(id)a4 scheduler:(id)a5 breadcrumbManager:(id)a6 syncedKeyValueDomain:(id)a7;
- (BOOL)_shouldAllowFeatureStatus:(id)a0;
- (void)analysisSchedulerDidFire:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithProfile:(id)a0 featureStatusManager:(id)a1 onboardingEligibilityDeterminer:(id)a2 analyzer:(id)a3;
- (void)_reportAnalysisResultsToDelegate:(id)a0 featureStatus:(id)a1;
- (void)_forceAnalysis;
- (BOOL)_determineIfAnotherAnalysisRunIsNecessaryWithAnalysisResult:(long long)a0;

@end
