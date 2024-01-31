@interface NSUnitConverterLinear : NSUnitConverter <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) double coefficient;
@property (readonly) double constant;

- (double)valueFromBaseUnitValue:(double)a0;
- (id)initWithCoefficient:(double)a0 constant:(double)a1;
- (double)baseUnitValueFromValue:(double)a0;
- (unsigned long long)hash;
- (id)initWithCoefficient:(double)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
