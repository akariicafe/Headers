@interface PGCityscapeWallpaperSuggesterFilteringContext : NSObject <NSCopying>

@property (readonly, nonatomic) long long orientation;
@property (nonatomic) double minimumWallpaperScore;
@property (nonatomic) double absoluteMinimumWallpaperScore;
@property (nonatomic) double minimumCropScore;
@property (nonatomic) BOOL ignoreClockOverlap;
@property (nonatomic) double timeIntervalForCandidateDeduping;
@property (nonatomic) double maximumLowLightScore;
@property (nonatomic) double maximumCropZoomRatio;
@property (nonatomic) BOOL bypassCropScoreCheck;

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initForCityscapesInOrientation:(long long)a0;
- (void)_commonInitInOrientation:(long long)a0;
- (id)initForAmbient;
- (id)initForTopCityscapes:(BOOL)a0 withDictionary:(id)a1 orientation:(long long)a2;
- (id)initForTopCityscapesInOrientation:(long long)a0;

@end
