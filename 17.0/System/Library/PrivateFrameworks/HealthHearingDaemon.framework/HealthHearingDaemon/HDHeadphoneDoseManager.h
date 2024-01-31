@class NSDate, NSString, HDDataCollectionAssertion, HDHeadphoneDoseMetadataStore, HDHeadphoneAudioExposureStatisticsCalculator, HDHeadphoneExposureNotificationCenter, HDHeadphoneExposureNotificationSyncManager, HDProfile, NSObject;
@protocol OS_dispatch_queue;

@interface HDHeadphoneDoseManager : NSObject <HDProfileReadyObserver, HDDatabaseProtectedDataObserver, HDDataObserver, HDQuantitySeriesObserver, HDHeadphoneExposureNotificationSyncObserver> {
    HDProfile *_profile;
    double _dose;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _enabled;
    HDHeadphoneDoseMetadataStore *_keyValueStore;
    HDHeadphoneExposureNotificationCenter *_notificationCenter;
    HDHeadphoneExposureNotificationSyncManager *_notificationSyncManager;
    HDHeadphoneAudioExposureStatisticsCalculator *_statisticsCalculator;
    HDDataCollectionAssertion *_collectionAssertion;
    BOOL _lastUpdateSuppressedUserNotification;
    NSDate *_lastLockDateForAnalytics;
}

@property (copy, nonatomic) id /* block */ unitTesting_profileDidBecomeReadyHandler;
@property (copy, nonatomic) id /* block */ unitTesting_didUpdateHandler;
@property (copy, nonatomic) id /* block */ unitTesting_didObserveProtectedDataHandler;
@property (copy, nonatomic) id /* block */ unitTesting_didNotifyUser;
@property (copy, nonatomic) id /* block */ unitTesting_protectedDataDidBecomeAvailable;
@property (copy, nonatomic) id /* block */ unitTesting_didFinishResetDosageToFireDate;
@property (copy, nonatomic) id /* block */ unitTesting_updateCurrentDoseNowDateProvider;
@property (readonly, nonatomic) HDHeadphoneAudioExposureStatisticsCalculator *unitTesting_calculator;
@property (readonly, nonatomic) HDHeadphoneDoseMetadataStore *unitTesting_keyValueStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)samplesAdded:(id)a0 anchor:(id)a1;
- (void)database:(id)a0 protectedDataDidBecomeAvailable:(BOOL)a1;
- (void)profileDidBecomeReady:(id)a0;
- (BOOL)_overrideDoseLimit:(id)a0 error:(id *)a1;
- (void)dealloc;
- (id)initWithProfile:(id)a0;
- (void)_lock_setCollectionAssertion:(id)a0;
- (void)_reportSyncedHeadphoneNotificationSamples:(id)a0 journaled:(BOOL)a1 nowDate:(id)a2;
- (BOOL)_lock_rebuildWithAssertion:(id)a0 resetSyncNotification:(BOOL)a1 error:(id *)a2;
- (void)_handleSignificantTimeChangeNotification:(id)a0;
- (void)samplesOfTypesWereRemoved:(id)a0 anchor:(id)a1;
- (void)profile:(id)a0 didDiscardSeriesOfType:(id)a1;
- (void)samplesJournaled:(id)a0 type:(id)a1;
- (id)_lock_pruneWithNowDate:(id)a0 limit:(unsigned long long)a1 error:(id *)a2;
- (void)_lock_updateIsEnabledForInitialSetup:(BOOL)a0 assertion:(id)a1;
- (void)unitTesting_didReceiveResetDosageToFireDate:(id)a0;
- (id)_pruneWithNowDate:(id)a0 limit:(unsigned long long)a1 error:(id *)a2;
- (id /* block */)transactionalQuantityInsertHandlerForProfile:(id)a0 journaled:(BOOL)a1 count:(long long)a2;
- (void)_registerForSignificantTimeChangeNotification;
- (void)_unregisterForSignificantTimeChangeNotification;
- (id)_initWithProfile:(id)a0 keyValueStore:(id)a1 calculator:(id)a2 unitTesting_didUpdateHandler:(id /* block */)a3;
- (void).cxx_destruct;
- (id)_takeAccessibilityAssertion;
- (void)_updateWithRemoteNotificationDismissalDate:(id)a0 assertion:(id)a1;
- (void)_updateCurrentDoseFromResult:(id)a0 context:(id)a1 sampleCount:(unsigned long long)a2 assertion:(id)a3;
- (BOOL)_rebuildWithError:(id *)a0;
- (BOOL)_lock_rebuildWithAssertion:(id)a0 error:(id *)a1;
- (id)_infoWithError:(id *)a0;
- (id)_fetchDoseLimitInfoWithError:(id *)a0;
- (void)_lock_updateCollectionAssertionForDoseAccumulated:(double)a0;
- (id)_initWithProfile:(id)a0 keyValueStore:(id)a1 calculator:(id)a2;
- (id)_initWithProfile:(id)a0 keyValueStore:(id)a1 calculator:(id)a2 unitTesting_profileDidBecomeReadyHandler:(id /* block */)a3 unitTesting_didObserveProtectedDataHandler:(id /* block */)a4 unitTesting_didUpdateHandler:(id /* block */)a5;
- (void)_lock_updateWithRemoteNotificationDismissalDate:(id)a0 assertion:(id)a1;
- (void)_headphoneExposureNotificationsEnabledDidChange:(id)a0;
- (void)_lock_updateWithNotifications:(id)a0 journaled:(BOOL)a1 assertion:(id)a2;
- (BOOL)_lock_updateCurrentDoseUsingStatisticsResult:(id)a0 assertion:(id)a1 error:(id *)a2;
- (void)didReceiveResetDosageToFireDate:(id)a0;

@end
