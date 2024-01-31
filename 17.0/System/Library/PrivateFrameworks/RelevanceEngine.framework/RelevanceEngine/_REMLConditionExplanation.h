@class RECondition;

@interface _REMLConditionExplanation : REMLExplanation {
    RECondition *_condition;
    unsigned long long _type;
}

- (id)initWithCondition:(id)a0;
- (void).cxx_destruct;
- (id)_constantConditionExplanationWithStyle:(unsigned long long)a0;
- (id)_featureRuleExplanation:(id)a0 withStyle:(unsigned long long)a1;
- (id)_hasFeatureExplanation:(id)a0 withStyle:(unsigned long long)a1;
- (id)_probabilityExplanation:(id)a0 withStyle:(unsigned long long)a1;
- (long long)_rankExplanationToSimilarExplanation:(id)a0;
- (id)_valueExplanation:(id)a0 withStyle:(unsigned long long)a1;
- (id)explanationByCombiningWithExplanation:(id)a0;
- (id)explanationWithStyle:(unsigned long long)a0;

@end
