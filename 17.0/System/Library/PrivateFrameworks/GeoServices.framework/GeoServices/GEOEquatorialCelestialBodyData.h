@interface GEOEquatorialCelestialBodyData : NSObject

@property (readonly, nonatomic) double rightAscension;
@property (readonly, nonatomic) double declination;

- (id)initWithDate:(id)a0 body:(long long)a1;
- (id)initWithDate:(id)a0 body:(long long)a1 useHighPrecision:(BOOL)a2;
- (id)initWithJulianDay:(double)a0 body:(long long)a1;
- (id)initWithJulianDay:(double)a0 body:(long long)a1 useHighPrecision:(BOOL)a2;

@end
