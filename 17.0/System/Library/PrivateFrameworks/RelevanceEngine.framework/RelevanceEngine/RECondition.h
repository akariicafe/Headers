@interface RECondition : NSObject <REAutomaticExportedInterface, NSCopying>

+ (id)falseCondition;
+ (id)trueCondition;
+ (id)andConditions:(id)a0;
+ (id)conditionForFeature:(id)a0 hasValue:(id)a1;
+ (id)conditionForFeature:(id)a0 relation:(long long)a1 floatValue:(float)a2;
+ (id)conditionForFeature:(id)a0 relation:(long long)a1 integerValue:(long long)a2;
+ (id)conditionHasValueForFeature:(id)a0;
+ (id)notCondition:(id)a0;
+ (id)conditionForFeature:(id)a0 hasBoolValue:(BOOL)a1;
+ (id)conditionForFeature:(id)a0 hasIntegerValue:(long long)a1;
+ (id)conditionForFeature:(id)a0 relation:(long long)a1 feature:(id)a2;
+ (id)conditionForProbabilityForInteraction:(id)a0 relation:(long long)a1 feature:(id)a2;
+ (id)conditionForProbabilityForInteraction:(id)a0 relation:(long long)a1 floatValue:(float)a2;
+ (id)conditionForProbabilityWithRelation:(long long)a0 floatValue:(float)a1;
+ (id)orConditions:(id)a0;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_acceptsFeatureMap:(id)a0 predictionSet:(id)a1 explanation:(id *)a2;
- (BOOL)_acceptsLeftFeatureMap:(id)a0 rightFeatureMap:(id)a1;
- (id)_dependentFeatures;
- (id)_inflectionFeatureValuePairs;
- (BOOL)_needsProbability;
- (id)_notCondition;
- (BOOL)_requiresTwoFeatures;
- (BOOL)_validForRanking;

@end
