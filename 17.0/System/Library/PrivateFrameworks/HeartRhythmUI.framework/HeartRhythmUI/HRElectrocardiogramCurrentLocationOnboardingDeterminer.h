@class HKHealthStore, HKAnalyticsEventSubmissionManager;
@protocol HKRegulatoryDomainProvider;

@interface HRElectrocardiogramCurrentLocationOnboardingDeterminer : NSObject {
    HKHealthStore *_healthStore;
    id<HKRegulatoryDomainProvider> _mobileCountryCodeManager;
    HKAnalyticsEventSubmissionManager *_analyticsEventSubmissionManager;
}

- (id)initWithHealthStore:(id)a0;
- (void).cxx_destruct;
- (void)isElectrocardiogramOnboardingAvailableInCurrentLocationForActiveWatch:(id /* block */)a0;

@end
