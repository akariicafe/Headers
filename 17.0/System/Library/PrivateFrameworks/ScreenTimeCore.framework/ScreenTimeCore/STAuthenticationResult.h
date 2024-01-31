@interface STAuthenticationResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) BOOL authenticated;

- (unsigned long long)hash;
- (id)initWithResult:(BOOL)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToAuthenticationResult:(id)a0;

@end
