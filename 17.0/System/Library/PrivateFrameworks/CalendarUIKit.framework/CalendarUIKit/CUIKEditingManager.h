@class NSMutableDictionary, EKEventStore, NSMutableSet, EKChangeListener, NSObject;
@protocol OS_dispatch_queue;

@interface CUIKEditingManager : NSObject

@property (weak) EKEventStore *eventStore;
@property (retain) NSMutableSet *editingContextGroups;
@property (retain) EKChangeListener *changeListener;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSMutableDictionary *changeHistory;
@property (retain) NSMutableDictionary *changedObjectMap;

- (id)changedObjectsCopy;
- (BOOL)_closeEditingContext:(id)a0 forceCommit:(BOOL)a1 forceDontCommit:(BOOL)a2 shouldClose:(BOOL *)a3;
- (void)partialSaveObject:(id)a0;
- (BOOL)closeEditingContextWithoutCommittingChanges:(id)a0;
- (BOOL)_changesExistForObject:(id)a0;
- (id)_liveEditedObjectsMatchingPredicate:(id)a0 notInSet:(id)a1;
- (void)_addContextToNewOrExistingGroup:(id)a0;
- (void)fetchEventsMatchingPredicate:(id)a0 completion:(id /* block */)a1;
- (id)remindersMatchingPredicate:(id)a0;
- (BOOL)closeEditingContextAndCommitChanges:(id)a0;
- (BOOL)_commitChangesForContext:(id)a0 forceCommit:(BOOL)a1 shouldClose:(BOOL *)a2;
- (void)applyLiveChangesToObject:(id)a0;
- (id)eventsWithExternalIdentifier:(id)a0;
- (id)_allOpenEditingContexts;
- (BOOL)closeEditingContext:(id)a0;
- (BOOL)_objectsSupportEditingContexts:(id)a0;
- (id)openEditingContextWithObject:(id)a0 interfaceType:(unsigned long long)a1 observer:(id)a2;
- (void).cxx_destruct;
- (id)remindersWithExternalIdentifier:(id)a0;
- (id)eventsMatchingPredicate:(id)a0;
- (void)applyLiveChangesToObjects:(id)a0;
- (id)eventWithIdentifier:(id)a0;
- (id)eventsWithIdentifiers:(id)a0;
- (id)_objectsWithLiveEdits:(id)a0 matchingPredicate:(id)a1;
- (void)fetchRemindersMatchingPredicate:(id)a0 completion:(id /* block */)a1;
- (id)openEditingContextWithObject:(id)a0 interfaceType:(unsigned long long)a1;
- (void)clearAllLiveChanges;
- (id)initWithEventStore:(id)a0;
- (BOOL)commitChangesFromEditingContextWithoutClosing:(id)a0;
- (id)_openEditingContextWithObjects:(id)a0 interfaceType:(unsigned long long)a1 observer:(id)a2;
- (id)openEditingContextWithObjects:(id)a0 interfaceType:(unsigned long long)a1;
- (id)openEditingContextWithObjects:(id)a0 interfaceType:(unsigned long long)a1 observer:(id)a2;
- (void)clearLiveChangesForObjects:(id)a0;
- (BOOL)closeEditingContext:(id)a0 shouldClose:(BOOL *)a1;

@end
