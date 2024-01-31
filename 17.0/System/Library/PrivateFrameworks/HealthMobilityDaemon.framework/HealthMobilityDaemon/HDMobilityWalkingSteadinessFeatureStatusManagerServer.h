@class NSString, HDDataCollectionManager, NSObject, NSUserDefaults;
@protocol HDMobilityIsAgePresentProvider, HDMobilityHealthAppNotificationAuthorizationStatusProvider, HDMobilityIsHeightPresentProvider, OS_dispatch_queue, HDMobilityRegionSupportedDeterminer, HDFeatureAvailabilityExtension;

@interface HDMobilityWalkingSteadinessFeatureStatusManagerServer : HDStandardTaskServer <HDFeatureAvailabilityExtensionObserver, HKMobilityWalkingSteadinessFeatureStatusManagerServerInterface> {
    id<HDMobilityRegionSupportedDeterminer> _regionSupportedDeterminer;
    id<HDFeatureAvailabilityExtension> _classificationsFeatureAvailabilityExtension;
    id<HDFeatureAvailabilityExtension> _notificationsFeatureAvailabilityExtension;
    id<HDMobilityIsHeightPresentProvider> _isHeightPresentProvider;
    id<HDMobilityIsAgePresentProvider> _isAgePresentProvider;
    id<HDMobilityHealthAppNotificationAuthorizationStatusProvider> _healthAppNotificationAuthorizationStatusProvider;
    NSObject<OS_dispatch_queue> *_queue;
    NSUserDefaults *_ageGatingDefaults;
    NSUserDefaults *_mobilitySettingsDefaults;
    HDDataCollectionManager *_dataCollectionManager;
    BOOL _observing;
    int _userCharacteristicsNotificationToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requiredEntitlements;
+ (id)taskIdentifier;
+ (Class)configurationClass;
+ (BOOL)validateConfiguration:(id)a0 client:(id)a1 error:(id *)a2;
+ (id)createTaskServerWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3 error:(id *)a4;
+ (BOOL)_hasWriteEntitlement:(id)a0 withError:(id *)a1;

- (id)exportedInterface;
- (void)featureAvailabilityExtensionOnboardingCompletionDataDidBecomeAvailable:(id)a0;
- (void)remote_fitnessTrackingEnabledWithCompletion:(id /* block */)a0;
- (id)remoteInterface;
- (void)featureAvailabilityExtensionDidUpdateRegionAvailability:(id)a0;
- (void)dealloc;
- (id)_isHeightPresentWithError:(id *)a0;
- (void)remote_notificationStatusWithCompletion:(id /* block */)a0;
- (BOOL)_isWalkingSteadinessClassificationAvailableWithError:(id *)a0;
- (void)remote_resetOnboardingWithCompletion:(id /* block */)a0;
- (id)_getOnboardingStatusWithError:(id *)a0;
- (void)remote_setNotificationsEnabled:(BOOL)a0 withCompletion:(id /* block */)a1;
- (BOOL)doesLocaleMatchAllowedCountryCodeForLocalDevice:(id)a0;
- (id)_clientRemoteObjectProxy;
- (BOOL)_isFitnessTrackingEnabled;
- (void)_fitnessTrackingEnabledChanged;
- (BOOL)_isDeviceSupported;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3 classificationsFeatureAvailabilityExtension:(id)a4 notificationsFeatureAvailabilityExtension:(id)a5 regionSupportedDeterminer:(id)a6 ageGatingDefaults:(id)a7 mobilitySettingsDefaults:(id)a8 isHeightPresentProvider:(id)a9 isAgePresentProvider:(id)a10 healthAppNotificationAuthorizationStatusProvider:(id)a11;
- (void)remote_onboardingStatusWithCompletion:(id /* block */)a0;
- (id)_isAgePresentWithError:(id *)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)_getNotificationStatusWithError:(id *)a0;
- (void)_userCharacteristicsChanged;
- (void)_notifyClientChangesToOnboardingStatus:(BOOL)a0 changesToNotificationStatus:(BOOL)a1;
- (BOOL)_isAgeGated;
- (BOOL)_isOnboardedFeatureSupported;
- (void)remote_startObservingChangesWithCompletion:(id /* block */)a0;
- (void)_stopObservingChangesAndExpectToBeObserving:(BOOL)a0;
- (void)featureAvailabilityProvidingDidUpdatePairedDeviceCapability:(id)a0;
- (void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id)a0;
- (BOOL)_isHealthAppHidden;
- (void)remote_stopObservingChanges;

@end
