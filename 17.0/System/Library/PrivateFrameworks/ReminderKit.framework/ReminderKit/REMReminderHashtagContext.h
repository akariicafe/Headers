@class NSSet, REMReminder;

@interface REMReminderHashtagContext : NSObject

@property (weak, nonatomic) REMReminder *reminder;
@property (readonly, nonatomic) NSSet *hashtags;

- (void).cxx_destruct;
- (id)initWithReminder:(id)a0;

@end
