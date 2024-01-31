@class NSMutableDictionary, NSMutableSet;

@interface PUTilingLayoutInvalidationContext : NSObject

@property (readonly, nonatomic) NSMutableDictionary *_invalidatedIndexPathsByTileKind;
@property (nonatomic) BOOL invalidatedAllTiles;
@property (nonatomic) BOOL invalidatedAnyTile;
@property (readonly, nonatomic) NSMutableSet *invalidatedTileKinds;
@property (readonly, nonatomic) BOOL invalidatedContentBounds;

- (id)init;
- (void).cxx_destruct;
- (void)invalidateAllTiles;
- (void)invalidateContentBounds;
- (void)enumerateInvalidatedTilesUsingBlock:(id /* block */)a0;
- (void)invalidateAllTilesWithKind:(id)a0;
- (void)invalidateTileWithIndexPath:(id)a0 kind:(id)a1;

@end
