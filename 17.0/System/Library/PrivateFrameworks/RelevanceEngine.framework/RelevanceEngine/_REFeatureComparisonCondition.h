@class REFeature;

@interface _REFeatureComparisonCondition : REComparisonCondition <REAutomaticExportedInterface>

@property (readonly, nonatomic) REFeature *leftFeature;
@property (readonly, nonatomic) long long relation;
@property (readonly, nonatomic) REFeature *rightFeature;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_acceptsLeftFeatureMap:(id)a0 rightFeatureMap:(id)a1;
- (id)_dependentFeatures;
- (id)_inflectionFeatureValuePairs;
- (id)_notCondition;
- (BOOL)_requiresTwoFeatures;
- (BOOL)_validForRanking;
- (id)initWithLeftFeature:(id)a0 relation:(long long)a1 rightFeature:(id)a2;

@end
