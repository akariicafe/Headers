@class NPSManager;

@interface FIMindfulnessCustomReminderProvider : NSObject {
    NPSManager *_syncManager;
}

- (id)init;
- (void).cxx_destruct;
- (id)reminders;
- (void)updateReminders:(id)a0;

@end
