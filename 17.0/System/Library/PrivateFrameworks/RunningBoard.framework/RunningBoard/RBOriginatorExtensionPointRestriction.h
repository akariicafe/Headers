@class NSString;

@interface RBOriginatorExtensionPointRestriction : RBDomainRestriction {
    NSString *_extensionPoint;
}

+ (id)domainRestrictionForDictionary:(id)a0 withError:(id *)a1;

- (id)allEntitlements;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)_initWithExtensionPoint:(id)a0;
- (BOOL)allowsContext:(id)a0 withError:(id *)a1;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
