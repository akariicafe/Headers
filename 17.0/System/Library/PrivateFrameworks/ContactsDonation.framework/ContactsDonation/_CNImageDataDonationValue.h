@class NSData;

@interface _CNImageDataDonationValue : CNDonationValue

@property (readonly, copy, nonatomic) NSData *imageData;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void)acceptDonationValueVisitor:(id)a0;
- (void).cxx_destruct;
- (id)copyWithNewExpirationDate:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithImageData:(id)a0 origin:(id)a1;

@end
