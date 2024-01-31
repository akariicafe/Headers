@class NSString, HDProtectedDataOperation, HKAnalyticsEventSubmissionManager;
@protocol HDFeatureAvailabilityExtension;

@interface HDHRElectrocardiogramRecordingV2UpgradeManager : NSObject <HDProtectedDataOperationDelegate> {
    HDProtectedDataOperation *_protectedDataOperation;
    id<HDFeatureAvailabilityExtension> _v1FeatureAvailabilityManager;
    id<HDFeatureAvailabilityExtension> _v2FeatureAvailabilityManager;
    HKAnalyticsEventSubmissionManager *_analyticsSubmissionManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)performWorkForOperation:(id)a0 profile:(id)a1 databaseAccessibilityAssertion:(id)a2 completion:(id /* block */)a3;
- (id)initWithProfile:(id)a0 v1FeatureAvailabilityManager:(id)a1 v2FeatureAvailabilityManager:(id)a2 analyticsSubmissionManager:(id)a3;

@end
