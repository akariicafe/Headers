@interface NIRangingAuthConfiguration : NIConfiguration

@property (readonly, nonatomic) BOOL isResponder;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)descriptionInternal;
- (id)initAsResponder:(BOOL)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
