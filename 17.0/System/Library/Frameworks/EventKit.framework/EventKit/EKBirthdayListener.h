@class CalAccumulatingQueue, NSObject;
@protocol EKEventStoreProvider, OS_dispatch_queue;

@interface EKBirthdayListener : NSObject <CalContactsProviderDelegate> {
    id<EKEventStoreProvider> _eventStoreProvider;
    CalAccumulatingQueue *_updateQueue;
    NSObject<OS_dispatch_queue> *_updateJobQueue;
    BOOL _needsReset;
    BOOL _shutdown;
}

+ (BOOL)areBirthdaysEnabled;
+ (id)sharedListener;

- (void)_localeChanged;
- (id)initSingleton;
- (void)_start;
- (void)reset;
- (void)insertEventWithContact:(id)a0 forDateComponents:(id)a1 intoCalendar:(id)a2 inStore:(id)a3;
- (void)_performUpdateWithContext:(id)a0;
- (void)start;
- (void)disableBirthdayCalendarsInStore:(id)a0;
- (void)incrementalUpdateWithContext:(id)a0;
- (id)birthdayCalendarsInStore:(id)a0;
- (id)eventStore;
- (id)allContactsWithBirthdays;
- (void)stop;
- (void)addBirthdayCalendars;
- (id)eventStoreProviderWithReset:(BOOL)a0;
- (void).cxx_destruct;
- (id)eventStoreProvider;
- (id)birthdayCalendarsCreateIfNeeded:(BOOL)a0 inStore:(id)a1 originalIdentifier:(id)a2 originalAlarms:(id)a3 ignoreAlarms:(BOOL)a4;
- (void)contactsReset;
- (void)_insertEventsForContact:(id)a0 intoCalendar:(id)a1 inStore:(id)a2;
- (void)disableBirthdayCalendars;
- (void)contactsInserted:(id)a0 updated:(id)a1 deleted:(id)a2;
- (void)resetAllBirthdaysInStore:(id)a0;
- (void)checkForFailures;
- (id)eventStoreWithReset:(BOOL)a0;

@end
