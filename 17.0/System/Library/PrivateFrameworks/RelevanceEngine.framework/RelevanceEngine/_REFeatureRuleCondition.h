@class REFeature;

@interface _REFeatureRuleCondition : RECondition <REAutomaticExportedInterface>

@property (readonly, nonatomic) REFeature *firstFeature;
@property (readonly, nonatomic) long long relation;
@property (readonly, nonatomic) REFeature *secondFeature;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_acceptsFeatureMap:(id)a0 predictionSet:(id)a1 explanation:(id *)a2;
- (id)_dependentFeatures;
- (id)_inflectionFeatureValuePairs;
- (id)_notCondition;
- (BOOL)_requiresTwoFeatures;
- (id)initWithFeature:(id)a0 relation:(long long)a1 feature:(id)a2;

@end
