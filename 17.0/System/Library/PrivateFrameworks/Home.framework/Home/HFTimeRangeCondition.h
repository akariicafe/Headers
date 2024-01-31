@class HFTimeCondition;
@protocol HFPrimitiveTimeCondition;

@interface HFTimeRangeCondition : HFTimeCondition

@property (readonly, nonatomic) HFTimeCondition<HFPrimitiveTimeCondition> *startCondition;
@property (readonly, nonatomic) HFTimeCondition<HFPrimitiveTimeCondition> *endCondition;

+ (id)_primitiveTimePredicateClasses;

- (id)initWithPredicate:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithStartCondition:(id)a0 endCondition:(id)a1;
- (unsigned long long)timeConditionType;

@end
