@interface NSUnitConcentrationMass : NSDimension <NSSecureCoding>

@property (class, nonatomic, readonly) BOOL supportsRegionalPreference;
@property (class, readonly, copy) NSUnitConcentrationMass *gramsPerLiter;
@property (class, readonly, copy) NSUnitConcentrationMass *milligramsPerDeciliter;
@property (class, readonly) BOOL supportsSecureCoding;

+ (void)initialize;
+ (id)icuType;
+ (id)baseUnit;
+ (id)millimolesPerLiterWithGramsPerMole:(double)a0;

@end
