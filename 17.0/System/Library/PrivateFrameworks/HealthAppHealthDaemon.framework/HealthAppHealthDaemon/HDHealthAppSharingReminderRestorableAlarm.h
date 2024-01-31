@class UNUserNotificationCenter, NSString, _TtC21HealthAppHealthDaemon30HDHealthAppNotificationManager, NSDate, HDKeyValueDomain, HDDaemon;

@interface HDHealthAppSharingReminderRestorableAlarm : NSObject <HDHealthAppRestorableAlarmHandler> {
    HDKeyValueDomain *_sharingKeyValueDomain;
    _TtC21HealthAppHealthDaemon30HDHealthAppNotificationManager *_notificationManager;
}

@property (retain, nonatomic) HDDaemon *daemon;
@property (readonly, copy, nonatomic) NSString *eventIdentifier;
@property (retain, nonatomic) UNUserNotificationCenter *unitTest_userNotificationCenter;
@property (retain, nonatomic) NSDate *unitTest_currentDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDaemon:(id)a0;
- (void).cxx_destruct;
- (id)currentDate;
- (void)_handleCompletionWithAlarmEvent:(id)a0 success:(BOOL)a1 error:(id)a2 restorableAlarmManager:(id)a3 completion:(id /* block */)a4;
- (void)handleAlarmEvent:(id)a0 restorableAlarmManager:(id)a1 completion:(id /* block */)a2;
- (id)nextSharingReminderDateFromDate:(id)a0;
- (void)removeScheduledAlarmWithRestorableAlarmManager:(id)a0;
- (void)scheduleAlarmWithFallbackDate:(id)a0 restorableAlarmManager:(id)a1;
- (BOOL)setSharingReminderDate:(id)a0 error:(id *)a1;
- (id)sharingReminderDate;
- (id)sharingReminderFallbackNotificationDate:(id)a0;
- (id)sharingReminderRefreshIntervalDateComponents;

@end
