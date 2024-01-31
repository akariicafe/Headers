@class NSString;

@interface GEOComposedStringArgument_Price : GEOComposedStringArgument {
    float _defaultAmount;
    NSString *_defaultCurrencyCode;
}

@property (nonatomic) float overrideAmount;
@property (copy, nonatomic) NSString *overrideCurrencyCode;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithGeoFormatArgument:(id)a0;
- (id)_stringReplacementWithOptions:(id)a0;
- (id)priceFormat;

@end
