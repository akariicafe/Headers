@class UNUserNotificationCenter, NSString, HDSPEnvironment;

@interface HDSPUserNotificationCenter : NSObject <HDSPSleepNotificationPublisher, HDSPEnvironmentAware>

@property (readonly, nonatomic) UNUserNotificationCenter *notificationCenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment;

+ (id)_generateUniqueIdentifierForNotificationIdentifierPrefix:(id)a0 eventDate:(id)a1;
+ (id)_stringForEventDate:(id)a0;

- (void)publishNotificationForEvent:(id)a0 userInfo:(id)a1;
- (id)_windDownReminderContent;
- (id)_windDownReminderBodyContent;
- (id)initWithEnvironment:(id)a0;
- (void)environmentDidBecomeReady:(id)a0;
- (id)_chargingReminderContentWithUserInfo:(id)a0;
- (void)_publishNotificationRequest:(id)a0;
- (id)_contentByAddingCommonUserInfoTo:(id)a0;
- (id)initWithEnvironment:(id)a0 notificationCenter:(id)a1;
- (void)tearDownNotificationForEventIdentifier:(id)a0;
- (id)_notificationRequestForEvent:(id)a0 userInfo:(id)a1;
- (void)tearDownNotifications;
- (id)_notificationContentForEventIdentifier:(id)a0 userInfo:(id)a1;
- (void).cxx_destruct;
- (id)_wakeUpResultsContentWithUserInfo:(id)a0;
- (id)_bedtimeReminderContent;
- (id)_wakeDetectionContentWithUserInfo:(id)a0;
- (id)_chargingReminderBodyForAlarmEnabled:(BOOL)a0 sleepTrackingEnabled:(BOOL)a1;
- (id)_notificationRequestIdentifierForEvent:(id)a0;
- (id)_wakeDetectionAlertTitleForAlarmEnabled:(BOOL)a0 sleepModeOn:(BOOL)a1;
- (id)_notificationIdentifierPrefixForEventIdentifier:(id)a0;
- (id)_wakeDetectionAlertBodyForAlarmEnabled:(BOOL)a0 sleepModeOn:(BOOL)a1;
- (id)_localizedBedtimeOrWindDownReminderBodyWithKey:(id)a0 embeddingTimeForEvent:(id)a1;

@end
