@interface NSUnitDuration : NSDimension <NSSecureCoding>

@property (class, readonly, copy) NSUnitDuration *hours;
@property (class, readonly, copy) NSUnitDuration *minutes;
@property (class, readonly, copy) NSUnitDuration *seconds;
@property (class, readonly, copy) NSUnitDuration *milliseconds;
@property (class, readonly, copy) NSUnitDuration *microseconds;
@property (class, readonly, copy) NSUnitDuration *nanoseconds;
@property (class, readonly, copy) NSUnitDuration *picoseconds;
@property (class, readonly) BOOL supportsSecureCoding;

+ (void)initialize;
+ (id)icuType;
+ (id)baseUnit;
+ (id)_measurementWithNaturalScale:(id)a0 system:(unsigned long long)a1;

@end
