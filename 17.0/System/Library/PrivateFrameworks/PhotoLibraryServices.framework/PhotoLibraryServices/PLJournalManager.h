@class NSPersistentHistoryToken;

@interface PLJournalManager : PLJournalManagerCore {
    NSPersistentHistoryToken *_currentHistoryToken;
    _Atomic BOOL _ignoreHistoryDuringSnapshot;
}

+ (id)journalManagerWithClass:(Class)a0 libraryServiceManager:(id)a1;

- (id)currentHistoryToken;
- (BOOL)needsSnapshot;
- (void).cxx_destruct;
- (BOOL)_enumerateJournalEntriesFromHistoryToken:(id)a0 latestHistoryToken:(id *)a1 withManagedObjectContext:(id)a2 journalEntryBlock:(id /* block */)a3 shouldStopBlock:(id /* block */)a4 error:(id *)a5;
- (id)_existingObjectWithID:(id)a0 managedObjectContext:(id)a1;
- (void)_loadHistoryTokenIfNecessary;
- (BOOL)_needsFullSnapshot;
- (BOOL)_needsPartialSnapshot:(id)a0;
- (void)clearHistoryToken;
- (void)clearIgnoreHistoryDuringSnapshot;
- (BOOL)coalesceJournalsForPayloadClassIDs:(id)a0 withChangeJournalOverThreshold:(float)a1 error:(id *)a2;
- (BOOL)performFullSnapshotAppend:(BOOL)a0 createOnlyIfNecessary:(BOOL)a1 withManagedObjectContext:(id)a2 error:(id *)a3;
- (BOOL)performPartialSnapshotForPayloadClassIDs:(id)a0 append:(BOOL)a1 createOnlyIfNecessary:(BOOL)a2 withManagedObjectContext:(id)a3 error:(id *)a4;
- (BOOL)performSnapshotIfNecessaryAppend:(BOOL)a0 withManagedObjectContext:(id)a1 error:(id *)a2;
- (BOOL)replayFromCurrentHistoryTokenWithManagedObjectContext:(id)a0 updatedPayloadClassIDs:(id)a1 error:(id *)a2;
- (void)setIgnoreHistoryDuringSnapshot;

@end
