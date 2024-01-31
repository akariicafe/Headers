@class NSCompoundPredicate, NSMutableDictionary, NSMutableArray;

@interface IAMDecomposedKey : NSObject {
    NSMutableArray *rawPredicateConditions;
    NSCompoundPredicate *compoundPredicate;
    BOOL compoundPredicateNeedsInitialization;
}

@property (retain, nonatomic) NSMutableDictionary *ruleDestructuredIdentifiers;

- (id)init;
- (BOOL)predicatesMatchFigaroEventProperties:(id)a0;
- (BOOL)hasPredicates;
- (void)addPredicateCondition:(id)a0;
- (void)constructCompoundPredicateIfNeeded;
- (void).cxx_destruct;

@end
