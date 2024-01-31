@class NSSet;

@interface RBSCompoundAllPredicate : RBSProcessPredicateImpl {
    NSSet *_predicates;
}

+ (BOOL)supportsRBSXPCSecureCoding;

- (BOOL)matchesProcess:(id)a0;
- (id)processIdentifiers;
- (id)initWithRBSXPCCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)processIdentifier;
- (void)encodeWithRBSXPCCoder:(id)a0;

@end
