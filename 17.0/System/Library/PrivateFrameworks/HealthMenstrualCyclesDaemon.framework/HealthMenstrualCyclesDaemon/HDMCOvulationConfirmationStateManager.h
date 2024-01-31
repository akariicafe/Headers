@class HKMCSettingsManager, NSString, HDPrimaryProfile, HDKeyValueDomain, NSObject, HKCalendarCache;
@protocol OS_dispatch_queue;

@interface HDMCOvulationConfirmationStateManager : NSObject <HDFeatureSettingsManagerObserver, HKMCSettingsManagerObserver> {
    HDPrimaryProfile *_profile;
    HDKeyValueDomain *_keyValueDomain;
    HKCalendarCache *_calendarCache;
    HKMCSettingsManager *_settingsManager;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProfile:(id)a0 settingsManager:(id)a1 queue:(id)a2;
- (id)_daysWithWristTemperatureSamplesInDayIndexRange:(struct { long long x0; long long x1; })a0 calendarCache:(id)a1 error:(id *)a2;
- (void)settingsManagerDidUpdateNotificationSettings:(id)a0;
- (BOOL)transitionToFiredNotificationStateWithRequest:(id)a0 settingsManager:(id)a1 error:(id *)a2;
- (id)scheduledNotificationDaysShiftedFromCalendarMethodWithEvent:(id)a0 error:(id *)a1;
- (void)_triggerImmediateSyncWithReason:(id)a0;
- (void)featureSettingsManager:(id)a0 didUpdateSettingsForFeatureIdentifier:(id)a1;
- (id)eventsToScheduleForAnalysis:(id)a0 settingsManager:(id)a1 scheduler:(id)a2 error:(id *)a3;
- (void).cxx_destruct;
- (id)scheduledNotificationFertileWindowEndDayIndexWithEvent:(id)a0 error:(id *)a1;
- (void)_queue_clearStateIfNecessary;

@end
