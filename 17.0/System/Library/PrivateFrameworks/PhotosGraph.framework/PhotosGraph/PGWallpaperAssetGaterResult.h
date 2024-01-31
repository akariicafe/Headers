@interface PGWallpaperAssetGaterResult : NSObject

@property (nonatomic) BOOL passesSegmentation;
@property (nonatomic) BOOL passesSettlingEffect;
@property (readonly, nonatomic) BOOL passesAnyGating;

- (unsigned long long)availableFeatures;

@end
