@interface PLFetchRecorderPredicateVisitor : NSObject <NSPredicateVisitor>

@property (readonly, nonatomic) BOOL foundOperatorIN;

- (void)reset;
- (void)visitPredicate:(id)a0;
- (void)visitPredicateExpression:(id)a0;
- (void)visitPredicateOperator:(id)a0;
- (void)examinePredicate:(id)a0;

@end
