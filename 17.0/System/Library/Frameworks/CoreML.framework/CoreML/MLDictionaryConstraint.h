@interface MLDictionaryConstraint : NSObject <MLFeatureValueConstraint, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long keyType;

+ (id)constraintWithStringKeys;
+ (id)constraintWithInt64Keys;

- (void)encodeWithCoder:(id)a0;
- (id)initWithKeyType:(long long)a0;
- (BOOL)isAllowedValue:(id)a0 error:(id *)a1;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
