@interface FSResource : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int kind;
@property (nonatomic, setter=revoke:) BOOL revoked;

+ (id)dynamicCast:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (Class)classForCoder;
- (id)initWithCoder:(id)a0;
- (id)getResourceID;

@end
