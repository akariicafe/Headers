@interface PTEditFloatRow : PTSRow

@property (nonatomic) unsigned long long precision;
@property (nonatomic) double minValue;
@property (nonatomic) double maxValue;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)between:(double)a0 and:(double)a1;
- (id)precision:(unsigned long long)a0;
- (id)_validatedValue:(id)a0;

@end
