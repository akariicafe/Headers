@class NSArray;

@interface RBAnyEntitlementPredicate : RBEntitlementPredicate {
    NSArray *_predicate;
}

- (id)allEntitlements;
- (unsigned long long)count;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithArray:(id)a0 forDomain:(id)a1 attribute:(id)a2 errors:(id)a3;
- (BOOL)matchesEntitlements:(id)a0;

@end
