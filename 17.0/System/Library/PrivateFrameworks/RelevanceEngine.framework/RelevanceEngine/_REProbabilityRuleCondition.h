@class NSString, REFeature;

@interface _REProbabilityRuleCondition : RECondition <REAutomaticExportedInterface>

@property (readonly, nonatomic) NSString *interaction;
@property (readonly, nonatomic) REFeature *feature;
@property (readonly, nonatomic) long long relation;
@property (readonly, nonatomic) float threshold;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_acceptsFeatureMap:(id)a0 predictionSet:(id)a1 explanation:(id *)a2;
- (id)_dependentFeatures;
- (id)_inflectionFeatureValuePairs;
- (BOOL)_needsProbability;
- (id)_notCondition;
- (id)initWithProbability:(id)a0 relation:(long long)a1 feature:(id)a2 threshold:(float)a3;

@end
