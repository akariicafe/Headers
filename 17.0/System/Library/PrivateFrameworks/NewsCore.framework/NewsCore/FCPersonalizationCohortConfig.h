@interface FCPersonalizationCohortConfig : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL considerPublisherTopicAggregates;
@property (nonatomic) double dilutionFactor;
@property (nonatomic) BOOL enableUndampening;
@property (nonatomic) double favoritedBoost;
@property (nonatomic) double exponentialFavoritedBoost;
@property (nonatomic) double globalWeight;
@property (nonatomic) double globalWeightHalfLife;
@property (nonatomic) double globalWeightInitialMultiplier;
@property (nonatomic) double paddingFactor;
@property (nonatomic) double preBaselineCurvature;
@property (nonatomic) double postBaselineCurvature;
@property (nonatomic) BOOL undampenOnlyAboveBaselineMembership;
@property (nonatomic) double userBaseline;
@property (nonatomic) BOOL useRelativePersonalizationValue;
@property (nonatomic) BOOL useExponentialFavoritedBoost;

- (id)initWithConfigDictionary:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithConsiderPublisherTopicAggregates:(BOOL)a0 dilutionFactor:(double)a1 enableUndampening:(BOOL)a2 favoritedBoost:(double)a3 exponentialFavoritedBoost:(double)a4 globalWeight:(double)a5 globalWeightHalfLife:(double)a6 globalWeightInitialMultiplier:(double)a7 paddingFactor:(double)a8 preBaselineCurvature:(double)a9 postBaselineCurvature:(double)a10 undampenOnlyAboveBaselineMembership:(BOOL)a11 userBaseline:(double)a12 useRelativePersonalizationValue:(BOOL)a13 useExponentialFavoritedBoost:(BOOL)a14;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
