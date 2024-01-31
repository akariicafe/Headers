@class NSArray, REMDueDateDeltaAlert, REMReminder;

@interface REMReminderDueDateDeltaAlertContext : NSObject

@property (retain, nonatomic) REMReminder *reminder;
@property (readonly, nonatomic) NSArray *dueDateDeltaAlerts;
@property (readonly, nonatomic) REMDueDateDeltaAlert *fetchedCurrentDueDateDeltaAlert;

- (void).cxx_destruct;
- (id)initWithReminder:(id)a0;

@end
