@interface HAPBTLETransactionIdentifier : HMFObject

@property (readonly, nonatomic) unsigned char unsignedCharValue;

+ (unsigned char)generateRequestIdentifier;
+ (id)randomTransactionIdentifier;

- (unsigned long long)hash;
- (id)shortDescription;
- (id)description;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)descriptionWithPointer:(BOOL)a0;
- (id)initWithUnsignedCharValue:(unsigned char)a0;

@end
