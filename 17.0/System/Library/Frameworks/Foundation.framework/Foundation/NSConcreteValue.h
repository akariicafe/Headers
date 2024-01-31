@interface NSConcreteValue : NSValue {
    unsigned long long _specialFlags;
    void *typeInfo;
}

+ (BOOL)supportsSecureCoding;
+ (void)initialize;

- (const void *)_value;
- (unsigned long long)hash;
- (const char *)objCType;
- (void)encodeWithCoder:(id)a0;
- (void)getValue:(void *)a0 size:(unsigned long long)a1;
- (void)getValue:(void *)a0;
- (id)description;
- (BOOL)_matchType:(const char *)a0 size:(unsigned long long)a1 strict:(BOOL)a2;
- (BOOL)isEqualToValue:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
