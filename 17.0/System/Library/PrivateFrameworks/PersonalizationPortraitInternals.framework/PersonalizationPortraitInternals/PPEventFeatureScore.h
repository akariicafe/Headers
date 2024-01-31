@class NSArray;

@interface PPEventFeatureScore : NSObject <NSCopying> {
    unsigned long long _ocnt_precomputedHash;
}

@property (readonly, nonatomic) NSArray *featureValues;
@property (readonly, nonatomic) double weightedScore;
@property (readonly, nonatomic) unsigned long long prominentFeature;

+ (id)eventFeatureScoreWithFeatureValues:(id)a0 weightedScore:(double)a1 prominentFeature:(unsigned long long)a2;

- (unsigned long long)_hash;
- (id)init;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithReplacementFeatureValues:(id)a0;
- (id)copyWithReplacementProminentFeature:(unsigned long long)a0;
- (id)copyWithReplacementWeightedScore:(double)a0;
- (id)initWithFeatureValues:(id)a0 weightedScore:(double)a1 prominentFeature:(unsigned long long)a2;
- (BOOL)isEqualToEventFeatureScore:(id)a0;

@end
