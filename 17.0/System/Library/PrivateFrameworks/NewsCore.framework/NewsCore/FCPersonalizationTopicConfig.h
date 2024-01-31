@class NSString;

@interface FCPersonalizationTopicConfig : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *topicID;
@property (nonatomic) double scoreMultiplier;
@property (nonatomic) double tagWeight;
@property (nonatomic) BOOL capAtBaseline;
@property (nonatomic) long long limitInGroup;
@property (nonatomic) BOOL shouldLimitInGroup;
@property (nonatomic) double publisherTopicWeight;
@property (nonatomic) BOOL useHalfLifeCoefficientOverride;
@property (nonatomic) double halfLifeCoefficientOverride;

- (id)initWithConfigDictionary:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithConfigDictionary:(id)a0 defaultConfig:(id)a1;
- (void).cxx_destruct;
- (id)initWithTopicID:(id)a0 scoreMultiplier:(double)a1 tagWeight:(double)a2 capAtBaseline:(BOOL)a3 limitInGroup:(long long)a4 shouldLimitInGroup:(BOOL)a5 publisherTopicWeight:(double)a6 useHalfLifeCoefficientOverride:(BOOL)a7 halfLifeCoefficientOverride:(double)a8;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
