@interface FCPersonalizationTagScoringConfig : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double channelTopicMappingWeight;
@property (nonatomic) double democratizationFactor;
@property (nonatomic) double locationScoreDecayFactor;
@property (nonatomic) double locationWeight;
@property (nonatomic) double maxDistanceThreshold;
@property (nonatomic) long long maxLocationsToConsider;
@property (nonatomic) double popularityMultiplierBoost;
@property (nonatomic) double popularityMultiplierExponent;
@property (nonatomic) double topicTopicMappingWeight;
@property (nonatomic) double userMembershipWeight;

- (id)initWithConfigDictionary:(id)a0;
- (id)init;
- (id)initWithChannelTopicMappingWeight:(double)a0 democratizationFactor:(double)a1 locationScoreDecayFactor:(double)a2 locationWeight:(double)a3 maxDistanceThreshold:(double)a4 maxLocationsToConsider:(long long)a5 popularityMultiplierBoost:(double)a6 popularityMultiplierExponent:(double)a7 topicTopicMappingWeight:(double)a8 userMembershipWeight:(double)a9;
- (void)encodeWithCoder:(id)a0;
- (id)initWithConfigDictionary:(id)a0 defaultConfig:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
