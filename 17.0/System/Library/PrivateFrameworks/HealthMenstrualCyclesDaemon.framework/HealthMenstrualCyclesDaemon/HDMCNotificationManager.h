@class HKMCSettingsManager, NSDate, NSObject, HDMCDeviceScopedStorageManager, HDKeyValueDomain, HDMCNotificationSyncManager, NSString, HDMCAnalysisManager, HDRestorableAlarm, HKMCAnalysis, HDPrimaryProfile, NSNumber, HDMCOvulationConfirmationStateManager;
@protocol OS_dispatch_queue;

@interface HDMCNotificationManager : NSObject <HDMCAnalysisManagerObserver, HDFeatureSettingsManagerObserver, HKMCSettingsManagerObserver> {
    HDPrimaryProfile *_profile;
    HDMCAnalysisManager *_analysisManager;
    HDMCDeviceScopedStorageManager *_deviceScopedStorageManager;
    HDMCNotificationSyncManager *_notificationSyncManager;
    HKMCSettingsManager *_settingsManager;
    NSObject<OS_dispatch_queue> *_queue;
    HDKeyValueDomain *_fertileWindowNotificationStateKeyValueDomain;
    HDMCOvulationConfirmationStateManager *_ovulationConfirmationStateManager;
    HDKeyValueDomain *_unconfirmedDeviationStateKeyValueDomain;
    HDKeyValueDomain *_deviationDismissalKeyValueDomain;
    NSNumber *_lastDismissalDayIndex;
    HKMCAnalysis *_lastAnalysis;
}

@property (readonly, nonatomic) HDRestorableAlarm *scheduler;
@property (retain, nonatomic) NSDate *unitTest_currentDateOverride;
@property (copy, nonatomic) id /* block */ unitTest_didSkipNotificationForDueEventHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_unitTest_didSkipNotificationForDueEvent:(id)a0 reason:(long long)a1;
- (id)_periodEventFromNotificationCategory:(id)a0 notificationFireDayIndex:(long long)a1;
- (void)start;
- (void)analysisManager:(id)a0 didUpdateAnalysis:(id)a1;
- (void)settingsManagerDidUpdateNotificationSettings:(id)a0;
- (void)invalidate;
- (id)scheduledNotificationsWithError:(id *)a0;
- (void)_triggerImmediateSyncWithReason:(id)a0;
- (void)featureSettingsManager:(id)a0 didUpdateSettingsForFeatureIdentifier:(id)a1;
- (id)_currentDate;
- (id)_notificationCategoriesWithBasicAnalytics;
- (void).cxx_destruct;
- (id)initWithProfile:(id)a0 analysisManager:(id)a1 settingsManager:(id)a2 deviceScopedStorageManager:(id)a3 notificationSyncManager:(id)a4;
- (void)_queue_notificationOrSensorInputSettingsDidChange;
- (void)_queue_removeAllScheduledNotificationsIfNotEnabled;
- (void)_queue_rescheduleNotificationsForAnalysis:(id)a0;
- (void)_queue_alarm:(id)a0 didReceiveDueEvents:(id)a1;
- (id)_requestFromAlarmEvent:(id)a0;

@end
