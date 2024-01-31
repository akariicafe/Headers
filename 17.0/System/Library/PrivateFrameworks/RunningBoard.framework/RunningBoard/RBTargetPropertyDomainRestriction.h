@class NSString, NSNumber;

@interface RBTargetPropertyDomainRestriction : RBDomainRestriction {
    NSString *_property;
    NSNumber *_numberValue;
    NSString *_stringValue;
}

+ (id)domainRestrictionForDictionary:(id)a0 withError:(id *)a1;

- (id)allEntitlements;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)allowsContext:(id)a0 withError:(id *)a1;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithProperty:(id)a0 value:(id)a1;

@end
