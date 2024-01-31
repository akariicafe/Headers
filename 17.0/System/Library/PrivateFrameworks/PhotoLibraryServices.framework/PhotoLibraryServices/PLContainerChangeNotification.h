@class NSString, NSArray, PLObjectSnapshot, PLManagedObject, NSIndexSet;

@interface PLContainerChangeNotification : PLChangeNotification {
    id _object;
    PLObjectSnapshot *_snapshot;
    NSArray *_changedObjects;
    BOOL _didCalculateDiffs;
    BOOL _shouldReload;
    NSIndexSet *_deletedIndexes;
    NSIndexSet *_insertedIndexes;
    NSIndexSet *_changedIndexes;
    BOOL _countDidChange;
}

@property (nonatomic, setter=_setDidCalculateDiffs:) BOOL _didCalculateDiffs;
@property (readonly, retain, nonatomic) PLManagedObject *_managedObject;
@property (readonly, retain, nonatomic) NSString *_contentRelationshipName;
@property (readonly, retain, nonatomic) NSArray *_changedObjects;
@property (readonly, retain, nonatomic) PLObjectSnapshot *snapshot;
@property (readonly, retain, nonatomic) NSString *_diffDescription;
@property (readonly, nonatomic) BOOL countDidChange;
@property (readonly, nonatomic) NSIndexSet *movedIndexes;
@property (readonly, retain, nonatomic) struct __CFArray { } *movedFromIndexes;
@property (readonly, nonatomic) BOOL shouldReload;
@property (readonly, nonatomic) NSIndexSet *deletedIndexes;
@property (readonly, nonatomic) NSIndexSet *insertedIndexes;
@property (readonly, nonatomic) BOOL hasMoves;
@property (readonly, nonatomic) NSIndexSet *changedIndexes;
@property (readonly, nonatomic) NSIndexSet *changedIndexesRelativeToSnapshot;
@property (readonly, nonatomic) NSArray *deletedObjects;
@property (readonly, nonatomic) NSArray *insertedObjects;
@property (readonly, nonatomic) NSArray *changedObjects;

- (id)init;
- (void)enumerateMovesWithBlock:(id /* block */)a0;
- (void)dealloc;
- (id)_init;
- (id)object;
- (unsigned long long)snapshotIndexForContainedObject:(id)a0;
- (void).cxx_destruct;
- (id)name;
- (void)_calculateDiffs;
- (void)_calculateDiffsIfNecessary;
- (BOOL)_getOldSet:(id *)a0 newSet:(id *)a1;
- (id)_initWithObject:(id)a0 snapshot:(id)a1 changedObjects:(id)a2;

@end
