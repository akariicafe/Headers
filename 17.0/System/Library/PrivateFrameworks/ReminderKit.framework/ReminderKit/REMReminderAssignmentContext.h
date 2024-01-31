@class NSSet, REMAssignment, REMReminder;

@interface REMReminderAssignmentContext : NSObject

@property (weak, nonatomic) REMReminder *reminder;
@property (readonly, nonatomic) REMAssignment *currentAssignment;
@property (readonly, nonatomic) NSSet *assignments;

- (void).cxx_destruct;
- (id)initWithReminder:(id)a0;

@end
