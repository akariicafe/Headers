@class NSArray;

@interface RBCompoundNoneDomainRestriction : RBDomainRestriction {
    NSArray *_restrictions;
}

+ (id)domainRestrictionForDictionary:(id)a0 withError:(id *)a1;

- (id)allEntitlements;
- (unsigned long long)hash;
- (id)_initWithRestrictions:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)allowsContext:(id)a0 withError:(id *)a1;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
