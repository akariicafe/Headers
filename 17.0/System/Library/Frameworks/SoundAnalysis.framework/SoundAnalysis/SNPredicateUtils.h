@interface SNPredicateUtils : NSObject

+ (BOOL)ensureExpression:(id)a0 hasType:(unsigned long long)a1 error:(id *)a2;
+ (BOOL)ensureExpression:(id)a0 isConstantValueSatisfyingPredicate:(id /* block */)a1 error:(id *)a2;
+ (BOOL)ensureExpression:(id)a0 isKeyPathMatchingOneOfOptions:(id)a1 error:(id *)a2;
+ (BOOL)ensureExpression:(id)a0 isKeyPathSatisfyingPredicate:(id /* block */)a1 error:(id *)a2;
+ (BOOL)ensureExpressionIsConstantNumberValue:(id)a0 error:(id *)a1;
+ (BOOL)ensurePredicate:(id)a0 isComparisonWithOperatorFromOptions:(id)a1 withRightConstantNumberAndLeftKeyPathFromOptions:(id)a2 error:(id *)a3;
+ (BOOL)ensurePredicate:(id)a0 isComparisonWithOperatorTypePredicate:(id /* block */)a1 leftPredicate:(id /* block */)a2 rightPredicate:(id /* block */)a3 error:(id *)a4;
+ (BOOL)ensurePredicateMeetsDetectSoundRequestRequirements:(id)a0 error:(id *)a1;
+ (BOOL)ensurePredicateOperatorType:(unsigned long long)a0 isOneOfOptions:(id)a1 error:(id *)a2;

- (id)init;

@end
