@class NSSet;

@interface RBSProcessIdentifiersPredicate : RBSProcessCollectionPredicateImpl

@property (readonly, nonatomic) NSSet *processIdentifiers;

- (BOOL)matchesProcess:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (id)initWithIdentifiers:(id)a0;

@end
