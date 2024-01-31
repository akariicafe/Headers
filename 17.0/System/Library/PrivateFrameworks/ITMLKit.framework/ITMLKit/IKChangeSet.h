@class NSIndexSet, NSDictionary;

@interface IKChangeSet : NSObject

@property (readonly, nonatomic, getter=isReducing) BOOL reducing;
@property (readonly, copy, nonatomic) NSIndexSet *addedIndexes;
@property (readonly, copy, nonatomic) NSIndexSet *removedIndexes;
@property (readonly, copy, nonatomic) NSDictionary *movedIndexesByNewIndex;
@property (readonly, copy, nonatomic) NSDictionary *updatedIndexesByNewIndex;

- (void).cxx_destruct;
- (id)changeSetByConcatenatingChangeSet:(id)a0;
- (id)changeSetByConvertingOldIndexesUsingChangeSet:(id)a0 andNewIndexesUsingChangeSet:(id)a1;
- (id)changeSetBySubtractingChangeSet:(id)a0;
- (id)initWithAddedIndexes:(id)a0 removedIndexes:(id)a1 movedIndexesByNewIndex:(id)a2 updatedIndexesByNewIndex:(id)a3;
- (id)inverseChangeSet;
- (long long)newIndexByShiftingOldIndex:(long long)a0 grouped:(BOOL)a1;
- (long long)newIndexForOldIndex:(long long)a0;
- (long long)oldIndexForNewIndex:(long long)a0;

@end
