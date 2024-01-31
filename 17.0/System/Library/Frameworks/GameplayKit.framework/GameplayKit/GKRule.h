@interface GKRule : NSObject

@property (nonatomic) long long salience;

+ (id)ruleWithBlockPredicate:(id /* block */)a0 action:(id /* block */)a1;
+ (id)ruleWithPredicate:(id)a0 assertingFact:(id)a1 grade:(float)a2;
+ (id)ruleWithPredicate:(id)a0 retractingFact:(id)a1 grade:(float)a2;

- (BOOL)evaluatePredicateWithSystem:(id)a0;
- (void)performActionWithSystem:(id)a0;

@end
