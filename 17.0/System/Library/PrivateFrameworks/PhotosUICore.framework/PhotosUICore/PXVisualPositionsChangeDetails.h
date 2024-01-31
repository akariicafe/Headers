@class NSIndexSet;

@interface PXVisualPositionsChangeDetails : NSObject

@property (readonly, nonatomic) long long anchorBodyIndexBeforeChanges;
@property (readonly, nonatomic) long long anchorBodyIndexAfterChanges;
@property (readonly, nonatomic) long long countBeforeChanges;
@property (readonly, nonatomic) long long anchorIndexBeforeChanges;
@property (readonly, nonatomic) NSIndexSet *headerIndexesBeforeChanges;
@property (readonly, nonatomic) long long countAfterChanges;
@property (readonly, nonatomic) long long anchorIndexAfterChanges;
@property (readonly, nonatomic) NSIndexSet *headerIndexesAfterChanges;

+ (id)changeDetailsWithCountBeforeChanges:(long long)a0 anchorIndexBeforeChanges:(long long)a1 countAfterChanges:(long long)a2 anchorIndexAfterChanges:(long long)a3 anchorFan:(long long)a4;
+ (id)changeDetailsWithCountBeforeChanges:(long long)a0 anchorIndexBeforeChanges:(long long)a1 countAfterChanges:(long long)a2 anchorIndexAfterChanges:(long long)a3 anchorFan:(long long)a4 anchorReload:(long long)a5;
+ (id)changeDetailsWithCountBeforeChanges:(long long)a0 anchorIndexBeforeChanges:(long long)a1 countAfterChanges:(long long)a2 anchorRemoved:(long long)a3 indexAfterChanges:(long long)a4;
+ (id)changeDetailsWithCountBeforeChanges:(long long)a0 anchorIndexBeforeChanges:(long long)a1 headerIndexesBeforeChanges:(id)a2 countAfterChanges:(long long)a3 anchorIndexAfterChanges:(long long)a4 headerIndexesAfterChanges:(id)a5 anchorFan:(long long)a6 anchorReload:(long long)a7;
+ (id)changeDetailsWithCountBeforeChanges:(long long)a0 anchorIndexBeforeChanges:(long long)a1 headerIndexesBeforeChanges:(id)a2 countAfterChanges:(long long)a3 anchorIndexAfterChanges:(long long)a4 headerIndexesAfterChanges:(id)a5 reloadAllIncludingAnchor:(BOOL)a6;
+ (id)changeDetailsWithCountBeforeChanges:(long long)a0 anchorIndexBeforeChanges:(long long)a1 headerIndexesBeforeChanges:(id)a2 countAfterChanges:(long long)a3 anchorRemoved:(long long)a4 indexAfterChanges:(long long)a5 headerIndexesAfterChanges:(id)a6;
+ (id)changeDetailsWithCountBeforeChanges:(long long)a0 anchorInserted:(long long)a1 indexBeforeChanges:(long long)a2 countAfterChanges:(long long)a3 anchorIndexAfterChanges:(long long)a4;
+ (id)changeDetailsWithCountBeforeChanges:(long long)a0 anchorInserted:(long long)a1 indexBeforeChanges:(long long)a2 headerIndexesBeforeChanges:(id)a3 countAfterChanges:(long long)a4 anchorIndexAfterChanges:(long long)a5 headerIndexesAfterChanges:(id)a6;

- (id)init;
- (void).cxx_destruct;
- (id)arrayChangeDetailsWithItemsChanged:(BOOL)a0;
- (struct { long long x0; long long x1; BOOL x2; })bodyVisualPositionAfterApplyingChangesToBodyIndex:(long long)a0;
- (struct { long long x0; long long x1; BOOL x2; })bodyVisualPositionAfterRevertingChangesFromBodyIndex:(long long)a0;
- (id)initWithCountBeforeChanges:(long long)a0 anchorIndexBeforeChanges:(long long)a1 headerIndexesBeforeChanges:(id)a2 countAfterChanges:(long long)a3 anchorIndexAfterChanges:(long long)a4 headerIndexesAfterChanges:(id)a5;
- (struct { long long x0; long long x1; BOOL x2; })visualPositionAfterApplyingChangesToIndex:(long long)a0;
- (struct { long long x0; long long x1; BOOL x2; })visualPositionAfterRevertingChangesFromIndex:(long long)a0;

@end
