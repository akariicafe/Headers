@class HKFeatureStatus, NSString, HKFeatureStatusManager, NSObject, _HKDelayedOperation;
@protocol OS_dispatch_queue;

@interface HDHRHeartbeatSeriesFeatureExclusivityManager : NSObject <HKFeatureStatusProvidingObserver> {
    HKFeatureStatusManager *_irregularRhythmNotificationsStatusManager;
    HKFeatureStatusManager *_aFibHistoryStatusManager;
    NSObject<OS_dispatch_queue> *_queue;
    _HKDelayedOperation *_disableIrregularRhythmNotificationsIfAFibHistoryIsEnabledOperation;
    HKFeatureStatus *_irregularRhythmNotificationsStatus;
    HKFeatureStatus *_aFibHistoryStatus;
}

@property (copy, nonatomic) id /* block */ __unitTesting_postNotificationHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)_fireSystemAlertBecauseIrregularRhythmNotificationsWereTurnedOff;
- (void)featureStatusProviding:(id)a0 didUpdateFeatureStatus:(id)a1;
- (BOOL)_isFeatureStatusAvailableForUsageOrBlockedOnlyByMutualExclusivityRequirement:(id)a0;
- (void)_scheduleInitialMaintenanceOperationWithProfile:(id)a0;
- (void).cxx_destruct;
- (id)initWithIrregularRhythmNotificationsStatusManager:(id)a0 aFibHistoryStatusManager:(id)a1 profile:(id)a2;
- (void)_queue_disableIrregularRhythmNotificationsIfAFibHistoryIsEnabled;

@end
