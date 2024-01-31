@class NSString;

@interface RBLessThanConditionDomainRestriction : RBDomainRestriction {
    NSString *_condition;
    long long _value;
}

+ (id)domainRestrictionForDictionary:(id)a0 withError:(id *)a1;

- (id)allEntitlements;
- (unsigned long long)hash;
- (id)_initWithCondition:(id)a0 value:(long long)a1;
- (id)description;
- (void).cxx_destruct;
- (BOOL)allowsContext:(id)a0 withError:(id *)a1;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
