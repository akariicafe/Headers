@class NSArray, NSIndexSet, _NSOrderedCollectionDifferenceMoves;

@interface NSOrderedCollectionDifference : NSObject <NSFastEnumeration> {
    NSIndexSet *_insertIndexes;
    NSArray *_insertObjects;
    NSIndexSet *_removeIndexes;
    NSArray *_removeObjects;
    _NSOrderedCollectionDifferenceMoves *_moves;
}

@property (readonly) NSArray *insertions;
@property (readonly) NSArray *removals;
@property (readonly) BOOL hasChanges;

- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithChanges:(id)a0;
- (id)description;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)_changeWithType:(long long)a0 index:(unsigned long long)a1 object:(id)a2;
- (void)_enumerateChangesInDiffOrderWithBlock:(id /* block */)a0;
- (id)differenceByTransformingChangesWithBlock:(id /* block */)a0;
- (id)initWithInsertIndexes:(id)a0 insertedObjects:(id)a1 removeIndexes:(id)a2 removedObjects:(id)a3;
- (id)initWithInsertIndexes:(id)a0 insertedObjects:(id)a1 removeIndexes:(id)a2 removedObjects:(id)a3 additionalChanges:(id)a4;
- (id)inverseDifference;
- (id)invertedDifference;

@end
