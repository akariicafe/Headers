@class NSOrderedSet, NSIndexSet, NSSet, NSString, NSOrderedCollectionDifference;

@interface _UIIdentifierDiffer : NSObject <_UIIdentifierDiffer> {
    NSOrderedSet *_beforeIdentifiers;
    NSOrderedSet *_afterIdentifiers;
    NSIndexSet *_insertedIndexes;
    NSIndexSet *_deletedIndexes;
    NSSet *_movePairs;
    BOOL _identifiersAreUnique;
    NSOrderedCollectionDifference *_collectionDifference;
}

@property (readonly, nonatomic) NSOrderedSet *beforeIdentifiers;
@property (readonly, nonatomic) NSOrderedSet *afterIdentifiers;
@property (readonly, nonatomic) NSOrderedCollectionDifference *collectionDifference;
@property (readonly, nonatomic) NSIndexSet *insertedIndexes;
@property (readonly, nonatomic) NSIndexSet *deletedIndexes;
@property (readonly, nonatomic) NSSet *movePairs;
@property (readonly, nonatomic) BOOL hasChanges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_performFoundationDiffWithOptions:(long long)a0;
- (id)initWithBeforeIdentifiers:(id)a0 afterIdentifiers:(id)a1 collectionDifference:(id)a2;
- (void)performDiff;
- (void)performDiffWithOptions:(long long)a0;
- (void)_prepareDiffResultsFromCollectionDifference:(id)a0;
- (void).cxx_destruct;
- (id)initWithBeforeIdentifiers:(id)a0 afterIdentifiers:(id)a1;
- (void)_performDiffWithOptions:(long long)a0;

@end
