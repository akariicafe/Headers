@interface NSUnitVolume : NSDimension <NSSecureCoding>

@property (class, nonatomic, readonly) BOOL supportsRegionalPreference;
@property (class, readonly, copy) NSUnitVolume *megaliters;
@property (class, readonly, copy) NSUnitVolume *kiloliters;
@property (class, readonly, copy) NSUnitVolume *liters;
@property (class, readonly, copy) NSUnitVolume *deciliters;
@property (class, readonly, copy) NSUnitVolume *centiliters;
@property (class, readonly, copy) NSUnitVolume *milliliters;
@property (class, readonly, copy) NSUnitVolume *cubicKilometers;
@property (class, readonly, copy) NSUnitVolume *cubicMeters;
@property (class, readonly, copy) NSUnitVolume *cubicDecimeters;
@property (class, readonly, copy) NSUnitVolume *cubicCentimeters;
@property (class, readonly, copy) NSUnitVolume *cubicMillimeters;
@property (class, readonly, copy) NSUnitVolume *cubicInches;
@property (class, readonly, copy) NSUnitVolume *cubicFeet;
@property (class, readonly, copy) NSUnitVolume *cubicYards;
@property (class, readonly, copy) NSUnitVolume *cubicMiles;
@property (class, readonly, copy) NSUnitVolume *acreFeet;
@property (class, readonly, copy) NSUnitVolume *bushels;
@property (class, readonly, copy) NSUnitVolume *teaspoons;
@property (class, readonly, copy) NSUnitVolume *tablespoons;
@property (class, readonly, copy) NSUnitVolume *fluidOunces;
@property (class, readonly, copy) NSUnitVolume *cups;
@property (class, readonly, copy) NSUnitVolume *pints;
@property (class, readonly, copy) NSUnitVolume *quarts;
@property (class, readonly, copy) NSUnitVolume *gallons;
@property (class, readonly, copy) NSUnitVolume *imperialTeaspoons;
@property (class, readonly, copy) NSUnitVolume *imperialTablespoons;
@property (class, readonly, copy) NSUnitVolume *imperialFluidOunces;
@property (class, readonly, copy) NSUnitVolume *imperialPints;
@property (class, readonly, copy) NSUnitVolume *imperialQuarts;
@property (class, readonly, copy) NSUnitVolume *imperialGallons;
@property (class, readonly, copy) NSUnitVolume *metricCups;
@property (class, readonly) BOOL supportsSecureCoding;

+ (void)initialize;
+ (id)icuType;
+ (id)baseUnit;
+ (id)_measurementWithNaturalScale:(id)a0 system:(unsigned long long)a1;

@end
