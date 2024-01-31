@class NSData;

@interface MKWalletMerchantStylingInfo : NSObject <NSSecureCoding> {
    NSData *_styleAttributesData;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)imageForSize:(unsigned long long)a0 scale:(double)a1;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithStyleAttributes:(id)a0;
- (id)imageForSize:(unsigned long long)a0 scale:(double)a1 transparent:(BOOL)a2;
- (id)_featureStyleAttributes;
- (id)tintColorForScale:(double)a0;

@end
