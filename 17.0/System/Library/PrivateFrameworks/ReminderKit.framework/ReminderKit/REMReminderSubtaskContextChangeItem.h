@class REMReminderChangeItem;

@interface REMReminderSubtaskContextChangeItem : NSObject

@property (retain, nonatomic) REMReminderChangeItem *reminderChangeItem;

- (void).cxx_destruct;
- (void)addReminderChangeItem:(id)a0;
- (void)insertReminderChangeItem:(id)a0 afterReminderChangeItem:(id)a1;
- (void)insertReminderChangeItem:(id)a0 beforeReminderChangeItem:(id)a1;
- (void)undeleteSubtaskWithID:(id)a0 usingUndo:(id)a1;
- (id)_listChangeItem;
- (id)initWithReminderChangeItem:(id)a0;

@end
