@interface PGSettlingEffectWallpaperSuggesterFilteringContext : NSObject

@property (readonly, nonatomic) long long orientation;
@property (nonatomic) double minimumWallpaperScore;
@property (nonatomic) double minimumCropScore;
@property (nonatomic) BOOL ignoreClockOverlap;
@property (nonatomic) double timeIntervalForCandidateDeduping;
@property (nonatomic) double maximumLowLightScore;
@property (nonatomic) double maximumCropZoomRatio;

+ (double)minimumSettlingEffectScoreForSuggestionSubtype:(unsigned short)a0 mediaAnalysisVersion:(unsigned long long)a1;
+ (BOOL)shouldRunSettlingEffectForAsset:(id)a0 subtype:(unsigned short)a1;

- (void)_commonInitInOrientation:(long long)a0;
- (id)initInOrientation:(long long)a0;

@end
