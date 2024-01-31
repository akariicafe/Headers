@class _DKKnowledgeStorage;

@interface _DKSyncLocalKnowledgeStorage : NSObject <_DKSyncLocalKnowledgeStorage> {
    _DKKnowledgeStorage *_storage;
}

- (void).cxx_destruct;
- (BOOL)saveEvents:(id)a0 error:(id *)a1;
- (id)sortedEventsFromSyncWindows:(id)a0 streamNames:(id)a1 limit:(unsigned long long)a2 fetchOrder:(long long)a3 error:(id *)a4;
- (BOOL)deleteEventsWithEventIDs:(id)a0 error:(id *)a1;
- (id)sortedSyncDownWindowsOverlappingBetweenDate:(id)a0 andDate:(id)a1 peer:(id)a2 error:(id *)a3;
- (id)additionsSyncHistoryForPeer:(id)a0 transportName:(id)a1 error:(id *)a2;
- (id)deletionsSyncHistoryForPeer:(id)a0 transportName:(id)a1 error:(id *)a2;
- (id)lastSyncDownDeletionDateForPeer:(id)a0 transportName:(id)a1 error:(id *)a2;
- (BOOL)saveSyncedDownWindows:(id)a0 peer:(id)a1 transportName:(id)a2 error:(id *)a3;
- (void)setLastSyncDownDeletionDate:(id)a0 previousDate:(id)a1 forPeer:(id)a2 transportName:(id)a3 error:(id *)a4;
- (id)sortedEventsFromSyncWindows:(id)a0 streamNames:(id)a1 compatibility:(id)a2 limit:(unsigned long long)a3 fetchOrder:(long long)a4 error:(id *)a5;
- (id)tombstonesSinceDate:(id)a0 streamNames:(id)a1 limit:(unsigned long long)a2 endDate:(id *)a3 error:(id *)a4;

@end
