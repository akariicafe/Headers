@interface NSUnitPower : NSDimension <NSSecureCoding>

@property (class, nonatomic, readonly) BOOL supportsRegionalPreference;
@property (class, readonly, copy) NSUnitPower *terawatts;
@property (class, readonly, copy) NSUnitPower *gigawatts;
@property (class, readonly, copy) NSUnitPower *megawatts;
@property (class, readonly, copy) NSUnitPower *kilowatts;
@property (class, readonly, copy) NSUnitPower *watts;
@property (class, readonly, copy) NSUnitPower *milliwatts;
@property (class, readonly, copy) NSUnitPower *microwatts;
@property (class, readonly, copy) NSUnitPower *nanowatts;
@property (class, readonly, copy) NSUnitPower *picowatts;
@property (class, readonly, copy) NSUnitPower *femtowatts;
@property (class, readonly, copy) NSUnitPower *horsepower;
@property (class, readonly) BOOL supportsSecureCoding;

+ (void)initialize;
+ (id)icuType;
+ (id)baseUnit;
+ (id)_measurementWithNaturalScale:(id)a0 system:(unsigned long long)a1;

@end
