@interface NFTrustObject : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)allowedXPCClasses;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)allowedXPCClasses;
- (id)dictionaryRepresentation;
- (id)initWithCoder:(id)a0;

@end
