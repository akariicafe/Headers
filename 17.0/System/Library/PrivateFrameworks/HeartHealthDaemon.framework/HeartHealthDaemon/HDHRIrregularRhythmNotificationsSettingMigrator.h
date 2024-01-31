@class NSString, NSObject;
@protocol OS_dispatch_queue, HDFeatureAvailabilityExtension;

@interface HDHRIrregularRhythmNotificationsSettingMigrator : NSObject <HDFeatureAvailabilityExtensionObserver>

@property (readonly, nonatomic) id<HDFeatureAvailabilityExtension> v1FeatureAvailabilityManager;
@property (readonly, nonatomic) id<HDFeatureAvailabilityExtension> v2FeatureAvailabilityManager;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)featureAvailabilityProvidingDidUpdateSettings:(id)a0;
- (void)featureAvailabilityExtensionOnboardingCompletionDataDidBecomeAvailable:(id)a0;
- (void)featureAvailabilityExtensionDidUpdateRegionAvailability:(id)a0;
- (void)_syncSettingIfPossibleFromManager:(id)a0 toManager:(id)a1;
- (id)initWithV1FeatureAvailabilityManager:(id)a0 v2FeatureAvailabilityManager:(id)a1;
- (void).cxx_destruct;
- (void)_syncSettingIfPossibleFromSource:(id)a0;
- (void)_startObservingSettingChanges;
- (void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id)a0;

@end
