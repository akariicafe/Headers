@class REComparisonCondition, RECondition, REConditionEvaluator;

@interface RERankingRule : RERule <REAutomaticExportedInterface> {
    REConditionEvaluator *_leftConditionEvaluator;
    REConditionEvaluator *_rightConditionEvaluator;
    REConditionEvaluator *_comparisonConditionEvaluator;
}

@property (readonly, nonatomic) REConditionEvaluator *leftConditionEvaluator;
@property (readonly, nonatomic) REConditionEvaluator *rightConditionEvaluator;
@property (readonly, nonatomic) REConditionEvaluator *comparisonConditionEvaluator;
@property (readonly, nonatomic) RECondition *leftCondition;
@property (readonly, nonatomic) RECondition *rightCondition;
@property (readonly, nonatomic) REComparisonCondition *comparison;
@property (readonly, nonatomic) long long order;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithLeftCondition:(id)a0 rightCondition:(id)a1 comparisonCondition:(id)a2 order:(long long)a3;

@end
