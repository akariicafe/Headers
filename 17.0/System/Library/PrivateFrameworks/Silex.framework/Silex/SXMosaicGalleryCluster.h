@class NSArray;

@interface SXMosaicGalleryCluster : NSObject

@property (readonly, nonatomic) NSArray *items;

- (unsigned long long)hash;
- (id)initWithItems:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)clusterIsEqualToTileTypes:(id)a0;
- (BOOL)isClusterOfType:(int)a0;

@end
