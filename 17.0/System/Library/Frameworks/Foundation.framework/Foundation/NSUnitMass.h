@interface NSUnitMass : NSDimension <NSSecureCoding>

@property (class, nonatomic, readonly) BOOL supportsRegionalPreference;
@property (class, readonly, copy) NSUnitMass *kilograms;
@property (class, readonly, copy) NSUnitMass *grams;
@property (class, readonly, copy) NSUnitMass *decigrams;
@property (class, readonly, copy) NSUnitMass *centigrams;
@property (class, readonly, copy) NSUnitMass *milligrams;
@property (class, readonly, copy) NSUnitMass *micrograms;
@property (class, readonly, copy) NSUnitMass *nanograms;
@property (class, readonly, copy) NSUnitMass *picograms;
@property (class, readonly, copy) NSUnitMass *ounces;
@property (class, readonly, copy) NSUnitMass *poundsMass;
@property (class, readonly, copy) NSUnitMass *stones;
@property (class, readonly, copy) NSUnitMass *metricTons;
@property (class, readonly, copy) NSUnitMass *shortTons;
@property (class, readonly, copy) NSUnitMass *carats;
@property (class, readonly, copy) NSUnitMass *ouncesTroy;
@property (class, readonly, copy) NSUnitMass *slugs;
@property (class, readonly) BOOL supportsSecureCoding;

+ (void)initialize;
+ (id)icuType;
+ (id)baseUnit;
+ (id)_measurementWithNaturalScale:(id)a0 system:(unsigned long long)a1;

@end
