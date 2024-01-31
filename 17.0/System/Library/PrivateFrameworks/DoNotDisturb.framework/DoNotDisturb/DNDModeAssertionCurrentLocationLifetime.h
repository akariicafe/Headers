@interface DNDModeAssertionCurrentLocationLifetime : DNDModeAssertionLifetime

+ (id)sharedInstance;
+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)awakeAfterUsingCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)lifetimeType;

@end
