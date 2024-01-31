@class NSDate, NSString, HDPrimaryProfile, HDRestorableAlarm, HKMHSettingsManager, NSObject;
@protocol HDMHTypicalDayProviding, OS_dispatch_queue;

@interface HDMHNotificationManager : NSObject <HKMHSettingsManagerObserver, HDProfileReadyObserver, HDMHTypicalDayProviderObserver> {
    HDPrimaryProfile *_profile;
    HKMHSettingsManager *_settingsManager;
    NSObject<OS_dispatch_queue> *_queue;
    int _significantTimeChangeToken;
    NSDate *_currentDateOverride;
}

@property (readonly, nonatomic) HDRestorableAlarm *scheduler;
@property (retain, nonatomic) id<HDMHTypicalDayProviding> typicalDayProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_queue_start;
- (void)profileDidBecomeReady:(id)a0;
- (void)settingsManagerDidUpdateNotificationSettings:(id)a0;
- (void)invalidate;
- (id)scheduledNotificationsWithError:(id *)a0;
- (id)_currentDate;
- (void).cxx_destruct;
- (id)initWithProfile:(id)a0 settingsManager:(id)a1;
- (void)_significantTimeChangeOccurred;
- (void)_queue_removeAllScheduledNotificationsIfNotEnabled;
- (void)didReceiveDayChangeNotification:(id)a0;
- (void)_queue_alarm:(id)a0 didReceiveDueEvents:(id)a1;
- (id)_requestFromAlarmEvent:(id)a0;
- (void)_setCurrentDate:(id)a0;
- (id)_endOfCalendarDayForDate:(id)a0;
- (id)_notificationDateComponentsByCategory;
- (void)_queue_registerForSignificantTimeChanges;
- (void)_queue_rescheduleNotifications;
- (void)_removeAllDeliveredHDMHNotifications;
- (void)_rescheduleNotifications;
- (BOOL)_shouldEndOfDayBeShiftedToMidnightForDate:(id)a0;
- (id)_timeOfDayBasedNotifications;
- (id)initWithProfile:(id)a0 settingsManager:(id)a1 typicalDayProvider:(id)a2;
- (void)typicalDayDidUpdate:(id)a0;

@end
