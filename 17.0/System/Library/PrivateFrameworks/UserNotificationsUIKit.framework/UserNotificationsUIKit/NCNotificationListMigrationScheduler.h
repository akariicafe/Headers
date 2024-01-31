@class PCPersistentTimer, NSDateFormatter, NSMutableDictionary, NSDate, NSObject;
@protocol NCNotificationListMigrationSchedulerDelegate, OS_dispatch_queue;

@interface NCNotificationListMigrationScheduler : NSObject

@property (weak, nonatomic) id<NCNotificationListMigrationSchedulerDelegate> delegate;
@property (retain, nonatomic) NSDateFormatter *dateFormatter;
@property (retain, nonatomic) NSMutableDictionary *migrationDatesForNotificationRequests;
@property (retain, nonatomic) NSDate *currentlyScheduledDate;
@property (retain, nonatomic) PCPersistentTimer *scheduleTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *scheduleTimerQueue;
@property (copy, nonatomic) NSDate *migrationDateForNotificationDigest;
@property (readonly, copy, nonatomic) NSDate *upcomingScheduledMigrationDate;

- (void)_sendNotificationRequestMigrationSignalIfNecessary;
- (void)removeMigrationForNotificationRequest:(id)a0;
- (void)_scheduleMigrationTimerForDate:(id)a0;
- (id)_notificationRequestMatchingRequest:(id)a0;
- (id)_nextScheduleDateForMigration;
- (void)_migrationTimerFiredForTimer:(id)a0;
- (void)addMigrationForNotificationRequests:(id)a0 forDate:(id)a1;
- (void).cxx_destruct;
- (void)_handleTimeOrLocaleChange:(id)a0;
- (id)initWithDelegate:(id)a0;
- (void)_sendDigestMigrationSignalIfNecessary;
- (void)_updateMigrationScheduleTimer;

@end
