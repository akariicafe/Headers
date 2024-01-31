@class HKFeatureSettings, HDProfile, HKMCSettingsManager, HAMenstrualAlgorithmsAnalysis, NSObject, HKCalendarCache, HDMCDeviceScopedStorageManager, _HKDelayedOperation, NSString, HDMCDeviationInputManager, HKMCAnalysis, HDFeatureAvailabilityManager, NSArray, HKObserverSet, HKFeatureStatusManager;
@protocol OS_dispatch_queue;

@interface HDMCAnalysisManager : NSObject <HDDataObserver, HDDatabaseProtectedDataObserver, HKFeatureStatusProvidingObserver, HKMCSettingsManagerObserver, HDFeatureAvailabilityExtensionObserver> {
    HKObserverSet *_observers;
    HKObserverSet *_userInitiatedObservers;
    _HKDelayedOperation *_analyzeOperation;
    HKMCSettingsManager *_settingsManager;
    HDFeatureAvailabilityManager *_featureAvailabilityManager;
    HKFeatureStatusManager *_heartRateFeatureStatusManager;
    HKFeatureStatusManager *_wristTemperatureFeatureStatusManager;
    HKFeatureStatusManager *_deviationsFeatureStatusManager;
    HDMCDeviationInputManager *_deviationInputManager;
    HDMCDeviceScopedStorageManager *_deviceScopedStorageManager;
    HKCalendarCache *_calendarCache;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    HKMCAnalysis *_lock_currentAnalysis;
    HKFeatureSettings *_queue_lastFeatureSettings;
    BOOL _queue_needsMaintenanceAnalysis;
    BOOL _queue_maintenanceOperationQueued;
    HKMCAnalysis *_test_analysis;
    HAMenstrualAlgorithmsAnalysis *_test_algorithmsAnalysis;
    NSArray *_test_algorithmsCycles;
}

@property (weak, nonatomic) HDProfile *profile;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) id /* block */ _test_didNotUpgradeOnboardingRecord;
@property (readonly, copy, nonatomic) HKMCAnalysis *currentAnalysis;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)samplesAdded:(id)a0 anchor:(id)a1;
- (void)database:(id)a0 protectedDataDidBecomeAvailable:(BOOL)a1;
- (void)featureAvailabilityProvidingDidUpdateSettings:(id)a0;
- (void)_startObserving;
- (void)featureAvailabilityExtensionOnboardingCompletionDataDidBecomeAvailable:(id)a0;
- (id)_analysisWithAlgorithmsAnalysis:(id)a0 algorithmsCycles:(id)a1 recentSymptoms:(unsigned long long)a2 mostRecentBasalBodyTemperature:(id)a3 lastLoggedDayIndex:(id)a4 lastMenstrualFlowDayIndex:(id)a5 numberOfDailySleepHeartRateStatisticsForPast100Days:(long long)a6 numberOfDailyAwakeHeartRateStatisticsForPast100Days:(long long)a7 featureSettings:(id)a8 useHeartRateInput:(BOOL)a9 useWristTemperatureInput:(BOOL)a10 deviationsFeatureSettings:(id)a11;
- (void)featureAvailabilityExtensionDidUpdateRegionAvailability:(id)a0;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0 queue:(id)a1 userInitiated:(BOOL)a2;
- (void)_userCharacteristicsDidChange:(id)a0;
- (void)samplesOfTypesWereRemoved:(id)a0 anchor:(id)a1;
- (void)featureStatusProviding:(id)a0 didUpdateFeatureStatus:(id)a1;
- (void)_test_setAlgorithmsAnalysis:(id)a0;
- (id)_processorConfigurationForTodayIndex:(long long)a0 deviationsFeatureStatus:(id)a1 calendar:(id)a2;
- (id)_queue_analyzeNowWithForceIncludeCycles:(BOOL)a0 forceAnalyzeCompleteHistory:(BOOL)a1 error:(id *)a2;
- (void)_queue_analyzeIfNeeded;
- (void)_calendarDayDidChange:(id)a0;
- (void)_queue_enqueueMaintenanceOperationIfNeeded;
- (void)_test_setAnalysis:(id)a0;
- (BOOL)_hasHealthAppDevicesWithHigherAlgorithmVersions;
- (id)analyzeWithError:(id *)a0;
- (id)_analyzeWithForceIncludeCycles:(BOOL)a0 forceAnalyzeCompleteHistory:(BOOL)a1 error:(id *)a2;
- (void)_test_setAlgorithmsCycles:(id)a0;
- (void).cxx_destruct;
- (id)_takeAccessibilityAssertion;
- (void)_forceDisablePredictionsFromOngoingCycleFactors:(id)a0 menstruationProjectionsEnabled:(BOOL)a1 fertileWindowProjectionsEnabled:(BOOL)a2 useHeartRateInput:(BOOL)a3 useWristTemperatureInput:(BOOL)a4;
- (void)settingsManagerDidUpdateAnalysisSettings:(id)a0;
- (BOOL)initiateCycleFactorsAutomaticUpgradeWithDatabaseAccessibilityAssertion:(id)a0 error:(id *)a1;
- (void)_queue_runMaintenanceOperation;
- (id)initWithProfile:(id)a0 settingsManager:(id)a1 featureAvailabilityManager:(id)a2 heartRateAvailabilityManager:(id)a3 wristTemperatureAvailabilityManager:(id)a4 deviationsAvailabilityManager:(id)a5 deviceScopedStorageManager:(id)a6 calendarCache:(id)a7;
- (void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id)a0;
- (id)_queue_computeAnalysisWithDatabaseAccessibilityAssertion:(id)a0 forceIncludeCycles:(BOOL)a1 forceAnalyzeCompleteHistory:(BOOL)a2 error:(id *)a3;
- (void)settingsManagerDidUpdateAlgorithmVersionMismatchSettings:(id)a0;

@end
