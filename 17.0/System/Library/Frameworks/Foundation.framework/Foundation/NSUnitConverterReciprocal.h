@interface NSUnitConverterReciprocal : NSUnitConverter <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) double reciprocalValue;

- (double)valueFromBaseUnitValue:(double)a0;
- (double)baseUnitValueFromValue:(double)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithReciprocalValue:(double)a0;

@end
