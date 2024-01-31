@class NSMutableDictionary;

@interface _UICollectionCompositionalLayoutSolverResolveResult : NSObject {
    NSMutableDictionary *_insertedSupplementaryElementKindIndexPathsDict;
    NSMutableDictionary *_insertedDecorationElementKindIndexPathsDict;
    NSMutableDictionary *_deletedSupplementaryElementKindIndexPathsDict;
    NSMutableDictionary *_deletedDecorationElementKindIndexPathsDict;
}

@property (nonatomic) struct CGPoint { double x; double y; } contentOffsetAdjustment;
@property (nonatomic) BOOL sectionsWereRequeried;

- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
