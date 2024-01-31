@class REFeature;

@interface _REHasFeatureRuleCondition : RECondition <REAutomaticExportedInterface>

@property (readonly, nonatomic) REFeature *feature;
@property (readonly, nonatomic) BOOL contains;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_acceptsFeatureMap:(id)a0 predictionSet:(id)a1 explanation:(id *)a2;
- (id)_dependentFeatures;
- (id)_inflectionFeatureValuePairs;
- (id)_notCondition;
- (id)initWithFeature:(id)a0 contains:(BOOL)a1;

@end
