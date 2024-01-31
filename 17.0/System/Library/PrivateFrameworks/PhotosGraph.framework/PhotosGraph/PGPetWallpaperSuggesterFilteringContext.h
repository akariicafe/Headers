@interface PGPetWallpaperSuggesterFilteringContext : NSObject <NSCopying>

@property (readonly, nonatomic) long long orientation;
@property (nonatomic) double minimumWallpaperScore;
@property (nonatomic) double minimumCropScore;
@property (nonatomic) BOOL ignoreClockOverlap;
@property (nonatomic) double timeIntervalForCandidateDeduping;
@property (nonatomic) double minimumFaceSize;
@property (nonatomic) double maximumFaceSize;
@property (nonatomic) double maximumLowLightScore;
@property (nonatomic) double maximumCropZoomRatio;
@property (nonatomic) BOOL bypassCropScoreCheck;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_commonInitWithOrientation:(long long)a0;
- (id)initForAmbient;
- (id)initForPetsInOrientation:(long long)a0;
- (id)initForTopPets:(BOOL)a0 withDictionary:(id)a1 orientation:(long long)a2;
- (id)initForTopPetsInOrientation:(long long)a0;

@end
