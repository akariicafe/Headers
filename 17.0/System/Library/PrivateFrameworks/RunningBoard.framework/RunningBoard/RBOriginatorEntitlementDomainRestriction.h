@class NSString;

@interface RBOriginatorEntitlementDomainRestriction : RBDomainRestriction {
    NSString *_entitlement;
}

+ (id)domainRestrictionForDictionary:(id)a0 withError:(id *)a1;

- (id)allEntitlements;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)allowsContext:(id)a0 withError:(id *)a1;
- (id)_initWithEntitlement:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
