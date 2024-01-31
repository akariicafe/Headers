@interface NSUnitFuelEfficiency : NSDimension <NSSecureCoding>

@property (class, nonatomic, readonly) BOOL supportsRegionalPreference;
@property (class, readonly, copy) NSUnitFuelEfficiency *litersPer100Kilometers;
@property (class, readonly, copy) NSUnitFuelEfficiency *milesPerImperialGallon;
@property (class, readonly, copy) NSUnitFuelEfficiency *milesPerGallon;
@property (class, readonly) BOOL supportsSecureCoding;

+ (void)initialize;
+ (id)icuType;
+ (id)baseUnit;

@end
