@class NSSet;

@interface RBSProcessCollectionPredicateImpl : RBSProcessPredicateImpl {
    NSSet *_identifiers;
}

+ (BOOL)supportsRBSXPCSecureCoding;

- (id)processPredicate;
- (BOOL)matchesProcess:(id)a0;
- (unsigned long long)hash;
- (id)initWithRBSXPCCoder:(id)a0;
- (id)initWithIdentifiers:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;

@end
