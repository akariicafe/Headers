@interface NSUnitLength : NSDimension <NSSecureCoding>

@property (class, nonatomic, readonly) BOOL supportsRegionalPreference;
@property (class, readonly, copy) NSUnitLength *megameters;
@property (class, readonly, copy) NSUnitLength *kilometers;
@property (class, readonly, copy) NSUnitLength *hectometers;
@property (class, readonly, copy) NSUnitLength *decameters;
@property (class, readonly, copy) NSUnitLength *meters;
@property (class, readonly, copy) NSUnitLength *decimeters;
@property (class, readonly, copy) NSUnitLength *centimeters;
@property (class, readonly, copy) NSUnitLength *millimeters;
@property (class, readonly, copy) NSUnitLength *micrometers;
@property (class, readonly, copy) NSUnitLength *nanometers;
@property (class, readonly, copy) NSUnitLength *picometers;
@property (class, readonly, copy) NSUnitLength *inches;
@property (class, readonly, copy) NSUnitLength *feet;
@property (class, readonly, copy) NSUnitLength *yards;
@property (class, readonly, copy) NSUnitLength *miles;
@property (class, readonly, copy) NSUnitLength *scandinavianMiles;
@property (class, readonly, copy) NSUnitLength *lightyears;
@property (class, readonly, copy) NSUnitLength *nauticalMiles;
@property (class, readonly, copy) NSUnitLength *fathoms;
@property (class, readonly, copy) NSUnitLength *furlongs;
@property (class, readonly, copy) NSUnitLength *astronomicalUnits;
@property (class, readonly, copy) NSUnitLength *parsecs;
@property (class, readonly) BOOL supportsSecureCoding;

+ (void)initialize;
+ (id)icuType;
+ (id)baseUnit;
+ (id)_measurementWithNaturalScale:(id)a0 system:(unsigned long long)a1;

@end
