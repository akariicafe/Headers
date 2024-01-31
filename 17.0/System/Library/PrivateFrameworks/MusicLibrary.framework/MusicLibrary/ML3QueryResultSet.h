@class ML3Query, NSObject, NSMutableArray, ML3QueryResultSet_BackingStore;
@protocol OS_dispatch_queue;

@interface ML3QueryResultSet : NSObject <NSCopying> {
    ML3QueryResultSet_BackingStore *_backingStore;
    BOOL _supportsIncrementalUpdate;
    NSMutableArray *_updateToLibraryCurrentRevisionCompletionBlocks;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_fixedPriorityQueue;
}

@property (readonly, nonatomic) ML3Query *query;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) long long revision;
@property (readonly, nonatomic) long long localRevision;

- (id)initWithQuery:(id)a0;
- (unsigned long long)entityLimit;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)enumerateSectionsUsingBlock:(id /* block */)a0;
- (void)enumeratePersistentIDsUsingBlock:(id /* block */)a0;
- (long long)persistentIDAtIndex:(unsigned long long)a0;
- (BOOL)updateToLibraryCurrentRevision;
- (BOOL)_updateToLibraryCurrentRevision;
- (void)_onQueueAddUpdateFinishedBlock:(id /* block */)a0;
- (id)_initWithQuery:(id)a0 supportsIncrementalUpdate:(BOOL)a1;
- (void)_loadCurrentFullResults;
- (void)_mergeChangesWithFromNewPIDs:(const void *)a0 changedPIDs:(void *)a1;
- (void)_onQueueInvokeAndClearUpdateFinishedBlocksWithDidUpdateResult:(BOOL)a0;

@end
