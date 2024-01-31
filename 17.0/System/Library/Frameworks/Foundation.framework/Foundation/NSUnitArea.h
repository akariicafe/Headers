@interface NSUnitArea : NSDimension <NSSecureCoding>

@property (class, nonatomic, readonly) BOOL supportsRegionalPreference;
@property (class, readonly, copy) NSUnitArea *squareMegameters;
@property (class, readonly, copy) NSUnitArea *squareKilometers;
@property (class, readonly, copy) NSUnitArea *squareMeters;
@property (class, readonly, copy) NSUnitArea *squareCentimeters;
@property (class, readonly, copy) NSUnitArea *squareMillimeters;
@property (class, readonly, copy) NSUnitArea *squareMicrometers;
@property (class, readonly, copy) NSUnitArea *squareNanometers;
@property (class, readonly, copy) NSUnitArea *squareInches;
@property (class, readonly, copy) NSUnitArea *squareFeet;
@property (class, readonly, copy) NSUnitArea *squareYards;
@property (class, readonly, copy) NSUnitArea *squareMiles;
@property (class, readonly, copy) NSUnitArea *acres;
@property (class, readonly, copy) NSUnitArea *ares;
@property (class, readonly, copy) NSUnitArea *hectares;
@property (class, readonly) BOOL supportsSecureCoding;

+ (void)initialize;
+ (id)icuType;
+ (id)baseUnit;
+ (id)_measurementWithNaturalScale:(id)a0 system:(unsigned long long)a1;

@end
