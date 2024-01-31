@class REMDueDateDeltaAlert, REMReminderDueDateDeltaAlertContextChangeItem;

@interface REMDueDateDeltaAlertChangeItem : NSObject

@property (retain, nonatomic) REMReminderDueDateDeltaAlertContextChangeItem *reminderDueDateDeltaAlertContextChangeItem;
@property (retain, nonatomic) REMDueDateDeltaAlert *dueDateDeltaAlert;

- (void).cxx_destruct;
- (id)setAcknowledgedDate:(id)a0;
- (id)_setMinimumSupportedAppVersion:(long long)a0;
- (id)setDueDateDelta:(id)a0;
- (id)initWithReminderDueDateDeltaAlertContextChangeItem:(id)a0 dueDateDeltaAlert:(id)a1;

@end
