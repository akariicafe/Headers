@class HDFeatureAvailabilityOnboardingEligibilityDeterminer;
@protocol HDHRAFibBurdenSevenDayAnalysisBreadcrumbManaging;

@interface HKHRAFibBurdenSevenDayAnalysisFeatureStatusInspector : NSObject <HKHRAFibBurdenSevenDayAnalysisFeatureStatusInspecting> {
    HDFeatureAvailabilityOnboardingEligibilityDeterminer *_onboardingEligibilityDeterminer;
    id<HDHRAFibBurdenSevenDayAnalysisBreadcrumbManaging> _breadcrumbManager;
}

- (id)pairedDevices;
- (id)initWithOnboardingEligibilityDeterminer:(id)a0 breadcrumbManager:(id)a1;
- (void).cxx_destruct;
- (BOOL)shouldAllowAnalysisWithFeatureStatus:(id)a0;

@end
