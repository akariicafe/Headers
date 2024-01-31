@class NSString, NSDate;

@interface PGSinglePersonWallpaperAssetCandidate : NSObject

@property (readonly) NSString *assetUUID;
@property (readonly) BOOL isFavorite;
@property (readonly) double score;
@property (readonly) double wallpaperScore;
@property (readonly) double aestheticScore;
@property (readonly) NSDate *creationDate;

- (void).cxx_destruct;
- (id)initWithFace:(id)a0 inAsset:(id)a1;

@end
