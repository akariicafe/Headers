@class NSArray, NSString, HDSPEnvironment;
@protocol HDSPSleepEventDelegate;

@interface HDSPSleepNotificationManager : NSObject <HDSPGoodMorningAlertObserver, HDSPEnvironmentAware, HDSPSleepEventHandler, HDSPSleepEventProvider, HDSPSleepScheduleModelObserver, HDSPSleepActionObserver, HDSPSleepNotificationPublisher, HDSPSleepScheduleStateObserver, HDSPTimeChangeObserver>

@property (readonly, nonatomic) NSArray *notificationPublishers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment;
@property (readonly, copy, nonatomic) NSString *providerIdentifier;
@property (weak, nonatomic) id<HDSPSleepEventDelegate> sleepEventDelegate;

- (id)eventIdentifiers;
- (void)publishNotificationForEvent:(id)a0 userInfo:(id)a1;
- (void)dismissAlertForGoodMorning;
- (void)presentAlertForGoodMorning;
- (id)upcomingEventsDueAfterDate:(id)a0;
- (id)_sleepScheduleModel;
- (void)wakeNotificationWasConfirmed;
- (void)significantTimeChangeDetected:(id)a0;
- (void)environmentWillBecomeReady:(id)a0;
- (void)sleepEventIsDue:(id)a0;
- (void)bedtimeReminderWasDismissed;
- (id)_bedtimeNotificationEventAfterDate:(id)a0;
- (id)initWithEnvironment:(id)a0;
- (void)wakeNotificationWasDismissed;
- (void)sleepScheduleStateDidChange:(unsigned long long)a0 previousState:(unsigned long long)a1 reason:(unsigned long long)a2;
- (void)_tearDownWindDownReminder;
- (void)_rescheduleEvents;
- (void)environmentDidBecomeReady:(id)a0;
- (void)goodMorningWasDismissed;
- (void)tearDownNotificationForEventIdentifier:(id)a0;
- (id)initWithEnvironment:(id)a0 notificationPublishers:(id)a1;
- (void)tearDownNotifications;
- (void)bedtimeReminderWasConfirmed;
- (void)_tearDownChargingReminder;
- (void)_tearDownWakeDetectionNotification;
- (void).cxx_destruct;
- (void)sleepScheduleModelManager:(id)a0 didUpdateSleepSchedule:(id)a1;
- (BOOL)_bedtimeOrWindDownNotificationsEnabled;
- (void)_tearDownMorningNotification;
- (id)_windDownNotificationEventAfterDate:(id)a0;
- (void)_tearDownBedtimeReminder;
- (void)_bedtimeOrWindDownNotificationEventIsDue:(id)a0;

@end
