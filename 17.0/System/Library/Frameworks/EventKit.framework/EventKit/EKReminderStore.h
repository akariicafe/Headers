@class NSString, NSArray, NSMutableDictionary, REMStore, NSMutableSet, EKEventStore, NSObject, NSMutableArray;
@protocol OS_os_log, OS_dispatch_queue;

@interface EKReminderStore : NSObject <EKUpdatedReminderBackingObjectProvider> {
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_sources;
    NSMutableDictionary *_cachedConstraints;
    NSArray *_lists;
    NSMutableSet *_newObjectsIDs;
    NSMutableDictionary *_updatedObjects;
    NSMutableSet *_objectIDsToCommit;
    NSMutableDictionary *_deletedObjects;
    NSMutableArray *_objectsToReset;
    NSMutableArray *_remindersNeedingMove;
    NSMutableDictionary *_movedRemindersIDMap;
    NSObject<OS_dispatch_queue> *_queryQueue;
    NSMutableDictionary *queryCompletionHandlers;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) REMStore *remStore;
@property (readonly, weak) EKEventStore *eventStore;
@property (readonly) NSArray *sources;
@property (readonly) NSArray *calendars;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)frozenClassForReminderClass:(Class)a0;
+ (BOOL)isNotFoundError:(id)a0;
+ (id)uniqueIdentifierForREMObject:(id)a0;

- (id)predicateForIncompleteRemindersWithDueDateStarting:(id)a0 ending:(id)a1 calendars:(id)a2;
- (BOOL)saveCalendar:(id)a0 error:(id *)a1;
- (id)newFrozenObjectForReminderObject:(id)a0 withChanges:(id)a1;
- (void)reset;
- (void)_loadAccounts;
- (BOOL)removeReminder:(id)a0 error:(id *)a1;
- (id)_moveRemindersToNewLists:(id)a0 error:(id *)a1;
- (id)reminderWithIdentifier:(id)a0;
- (BOOL)saveObject:(id)a0 withFrozenObject:(id)a1 error:(id *)a2;
- (void)_loadAccountsIfNeeded;
- (id)predicateForCalendarStoreForRemindersInCalendars:(id)a0;
- (id)remindersMatchingPredicate:(id)a0;
- (BOOL)isSourceManaged:(id)a0;
- (id)resetBackingLocationWithBackingLocation:(id)a0;
- (id)calendarWithIdentifier:(id)a0;
- (id)backingCalendarWithIdentifier:(id)a0;
- (id)predicateForRemindersInCalendars:(id)a0;
- (id)cachedConstraintsForSource:(id)a0;
- (id)sourceWithIdentifier:(id)a0;
- (BOOL)saveReminder:(id)a0 error:(id *)a1;
- (id)defaultCalendarForNewReminders;
- (id)_allLists;
- (void)fillInPath:(id)a0 usingParents:(id)a1;
- (id)createNewReminderCalendar;
- (id)frozenObjectForReminderObject:(id)a0;
- (id)resetBackingAlarmWithBackingAlarm:(id)a0;
- (void)remindersChanged;
- (id)predicateForCompletedRemindersWithCompletionDateStarting:(id)a0 ending:(id)a1 calendars:(id)a2;
- (id)reminderWithUniqueId:(id)a0;
- (void).cxx_destruct;
- (id)remindersWithExternalIdentifier:(id)a0;
- (void)_loadLists;
- (BOOL)_commit:(id *)a0 error:(id *)a1;
- (id /* block */)completionBlockForFetchRequestToken:(id)a0 remove:(BOOL)a1;
- (id)fetchRemindersMatchingPredicate:(id)a0 completion:(id /* block */)a1;
- (void)_reminderCopiedToNewList:(id)a0;
- (id)backingReminderWithIdentifier:(id)a0;
- (id)frozenCalendarFromCalendar:(id)a0 error:(id *)a1;
- (BOOL)commit:(id *)a0;
- (void)_loadListsIfNeeded;
- (BOOL)removeCalendar:(id)a0 error:(id *)a1;
- (id)initWithEventStore:(id)a0 token:(id)a1;
- (id)frozenAlarmForREMAlarms:(id)a0;
- (id)createNewReminder;
- (id)_fetchAndCacheConstraintsForFrozenSource:(id)a0;
- (id)existingUpdatedObject:(id)a0;
- (void)_checkPredicate:(id)a0;

@end
