@class NSArray, NSDictionary, NSMutableSet;

@interface SFFluidCollectionViewLayoutInvalidationContext : NSObject {
    NSMutableSet *_invalidatedElementIdentifiers;
    NSArray *_cachedInvalidatedIndexPaths;
    NSDictionary *_cachedInvalidatedSupplementaryIndexPaths;
}

@property (nonatomic) BOOL invalidateEverything;
@property (nonatomic) BOOL invalidateDataSourceCounts;
@property (readonly, nonatomic) NSArray *invalidatedElementIdentifiers;
@property (readonly, nonatomic) NSArray *invalidatedItemIndexPaths;
@property (readonly, nonatomic) NSDictionary *invalidatedSupplementaryIndexPaths;

- (id)init;
- (void).cxx_destruct;
- (void)invalidateItemsAtIndexPaths:(id)a0;
- (void)invalidateSupplementaryElementsOfKind:(id)a0 atIndexPaths:(id)a1;

@end
