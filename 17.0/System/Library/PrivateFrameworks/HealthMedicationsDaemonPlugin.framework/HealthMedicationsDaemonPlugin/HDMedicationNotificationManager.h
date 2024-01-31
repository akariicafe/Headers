@class HKCalendarCache, HDProfile, HDRestorableAlarm, NSObject, NSDate;
@protocol OS_dispatch_queue;

@interface HDMedicationNotificationManager : NSObject {
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    HDRestorableAlarm *_restorableAlarm;
    HDRestorableAlarm *_expirationAlarm;
    NSDate *_dateAnchor;
    HKCalendarCache *_calendarCache;
}

@property (readonly, nonatomic) BOOL areDoseRemindersEnabled;
@property (nonatomic) NSObject<OS_dispatch_queue> *unitTesting_restorableAlarmQueue;
@property (nonatomic) NSObject<OS_dispatch_queue> *unitTesting_expirationAlarmQueue;
@property (retain, nonatomic) HDRestorableAlarm *unitTesting_restorableAlarm;
@property (retain, nonatomic) HDRestorableAlarm *unitTesting_expirationAlarm;

- (id)init;
- (id)initWithProfile:(id)a0;
- (void)_addNotificationObserver:(id)a0;
- (BOOL)_rescheduleMedicationsFromDate:(id)a0 error:(id *)a1;
- (id)unitTesting_activeSchedulesFromDate:(id)a0 transaction:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (BOOL)_scheduleMedicationsFromDate:(id)a0 clearNotSentItems:(BOOL)a1 error:(id *)a2;
- (id)pruneAllScheduleItemsBeforeDate:(id)a0 createDoseEvents:(BOOL)a1 error:(id *)a2;
- (BOOL)rescheduleMedicationsWithError:(id *)a0;
- (id)_upcomingOrphanedFollowUpEventsAtDate:(id)a0 withError:(id *)a1;
- (id)_notInteractedDoseEventsForScheduleItems:(id)a0 transaction:(id)a1;
- (void)_queue_alarm:(id)a0 didReceiveDueEvents:(id)a1;

@end
