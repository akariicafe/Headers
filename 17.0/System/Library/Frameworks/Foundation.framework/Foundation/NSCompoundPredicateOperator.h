@interface NSCompoundPredicateOperator : NSPredicateOperator

+ (void)initialize;
+ (id)orPredicateOperator;
+ (id)andPredicateOperator;
+ (id)notPredicateOperator;

- (id)symbol;
- (id)predicateFormat;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)evaluatePredicates:(id)a0 withObject:(id)a1;
- (BOOL)evaluatePredicates:(id)a0 withObject:(id)a1 substitutionVariables:(id)a2;

@end
