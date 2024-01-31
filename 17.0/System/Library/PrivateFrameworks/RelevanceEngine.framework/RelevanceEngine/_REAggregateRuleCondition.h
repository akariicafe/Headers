@class NSSet;

@interface _REAggregateRuleCondition : RECondition <REAutomaticExportedInterface>

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSSet *conditions;
@property (readonly, nonatomic) unsigned long long count;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_acceptsFeatureMap:(id)a0 predictionSet:(id)a1 explanation:(id *)a2;
- (BOOL)_acceptsLeftFeatureMap:(id)a0 rightFeatureMap:(id)a1;
- (id)_dependentFeatures;
- (id)_inflectionFeatureValuePairs;
- (BOOL)_needsProbability;
- (id)_notCondition;
- (BOOL)_requiresTwoFeatures;
- (BOOL)_validForRanking;
- (id)initWithConditions:(id)a0 type:(unsigned long long)a1;

@end
