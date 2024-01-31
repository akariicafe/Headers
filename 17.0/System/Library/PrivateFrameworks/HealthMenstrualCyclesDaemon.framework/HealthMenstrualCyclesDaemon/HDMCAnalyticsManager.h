@class HDFeatureAvailabilityManager, NSString, HDProfile, HDMCAnalysisManager;

@interface HDMCAnalyticsManager : NSObject <HDAnalyticsSubmissionCoordinatorDelegate, HDProfileReadyObserver> {
    HDMCAnalysisManager *_analysisManager;
    HDProfile *_profile;
    HDFeatureAvailabilityManager *_heartRateFeatureAvailabilityManager;
    HDFeatureAvailabilityManager *_deviationDetectionFeatureAvailabilityManager;
    HDFeatureAvailabilityManager *_wristTemperatureInputFeatureAvailabilityManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)profileDidBecomeReady:(id)a0;
- (void)_submitAnalyticsWithCompletion:(id /* block */)a0;
- (void)reportDailyAnalyticsWithCoordinator:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithProfile:(id)a0 analysisManager:(id)a1 heartRateFeatureAvailabilityManager:(id)a2 deviationDetectionFeatureAvailabilityManager:(id)a3 wristTemperatureInputFeatureAvailabilityManager:(id)a4;

@end
