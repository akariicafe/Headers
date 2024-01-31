@interface PGSinglePersonWallpaperAssetSuggesterFilteringContext : NSObject <NSCopying>

@property (readonly, nonatomic) long long orientation;
@property (nonatomic) double timeIntervalForCandidateDeduping;
@property (nonatomic) BOOL requiresSmile;
@property (nonatomic) BOOL requiresNoBlink;
@property (nonatomic) double minimumFaceQuality;
@property (nonatomic) double minimumFaceSize;
@property (nonatomic) double maximumFaceSize;
@property (nonatomic) double maximumFaceRoll;
@property (nonatomic) double minimumWallpaperScore;
@property (nonatomic) double absoluteMinimumWallpaperScore;
@property (nonatomic) double minimumCropScore;
@property (nonatomic) double maximumLowLightScore;
@property (nonatomic) double maximumCropZoomRatio;
@property (nonatomic) BOOL bypassCropScoreCheck;

- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_commonInitInOrientation:(long long)a0;
- (id)initForAmbient;
- (id)initForPeopleInOrientation:(long long)a0;
- (id)initForTopPeople:(BOOL)a0 withDictionary:(id)a1 orientation:(long long)a2;
- (id)initForTopPeopleInOrientation:(long long)a0;
- (void)updateFilteringContextWithDictionary:(id)a0;

@end
