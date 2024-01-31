@class REMReminderChangeItem;

@interface REMReminderDueDateDeltaAlertContextChangeItem : NSObject

@property (retain, nonatomic) REMReminderChangeItem *reminderChangeItem;

- (void).cxx_destruct;
- (id)addDueDateDeltaAlertWithDueDateDelta:(id)a0 identifier:(id)a1 creationDate:(id)a2;
- (id)updateDueDateDeltaAlert:(id)a0;
- (id)addDueDateDeltaAlertWithDueDateDelta:(id)a0;
- (void)removeDueDateDeltaAlertsWithIdentifiers:(id)a0;
- (void)_addOrUpdateDueDateDeltaAlert:(id)a0;
- (id)addDueDateDeltaAlertWithDueDateDeltaAlert:(id)a0;
- (id)initWithReminderChangeItem:(id)a0;
- (void)removeAllFetchedDueDateDeltaAlerts;

@end
