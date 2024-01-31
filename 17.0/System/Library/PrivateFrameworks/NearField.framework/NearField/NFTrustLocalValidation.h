@interface NFTrustLocalValidation : NFTrustObject <NFTrustLocalValidation>

@property (nonatomic) unsigned char primitiveLocalValidation;

+ (BOOL)supportsSecureCoding;
+ (id)localValidationWithFaceID;
+ (id)localValidationWithPassCode;
+ (id)localValidationWithTouchID;
+ (id)withPrimitiveLocalValidation:(unsigned char)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
