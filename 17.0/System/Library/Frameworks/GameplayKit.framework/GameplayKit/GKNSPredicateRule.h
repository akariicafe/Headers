@class NSPredicate;

@interface GKNSPredicateRule : GKRule

@property (readonly, retain, nonatomic) NSPredicate *predicate;

- (id)initWithPredicate:(id)a0;
- (void).cxx_destruct;
- (BOOL)evaluatePredicateWithSystem:(id)a0;

@end
