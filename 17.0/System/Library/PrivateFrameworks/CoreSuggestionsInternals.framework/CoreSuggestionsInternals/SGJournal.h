@class NSMutableArray;

@interface SGJournal : NSObject {
    NSMutableArray *_calendarObservers;
    NSMutableArray *_contactsObservers;
    NSMutableArray *_remindersObservers;
    NSMutableArray *_queuedOperations;
    BOOL _observersFrozen;
}

- (id)init;
- (void)addEntry:(id)a0;
- (void).cxx_destruct;
- (void)addEntries:(id)a0;
- (BOOL)hasObserver:(id)a0;
- (void)freezeObservers;
- (void)_callCalendarObservers:(id)a0 contactsObservers:(id)a1 remindersObservers:(id)a2 withEntry:(id)a3;
- (unsigned long long)_eventBatchOperationSupportedForEntries:(id)a0;
- (void)addCalendarObserver:(id)a0;
- (void)addContactsObserver:(id)a0;
- (void)addRemindersObserver:(id)a0;
- (void)thawObserversForTesting;

@end
