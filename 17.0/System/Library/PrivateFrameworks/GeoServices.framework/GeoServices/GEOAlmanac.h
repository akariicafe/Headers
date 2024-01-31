@class GEOAlmanacRiseTransitSet, NSDate;

@interface GEOAlmanac : NSObject {
    struct { double latitude; double longitude; } _location;
    double _altitude;
    GEOAlmanacRiseTransitSet *_previousRiseTransitSet;
    GEOAlmanacRiseTransitSet *_currentRiseTransitSet;
    GEOAlmanacRiseTransitSet *_nextRiseTransitSet;
}

@property (readonly, nonatomic) BOOL isDayLight;
@property (readonly, nonatomic) NSDate *previousSunrise;
@property (readonly, nonatomic) NSDate *previousTransit;
@property (readonly, nonatomic) NSDate *previousSunset;
@property (readonly, nonatomic) NSDate *sunrise;
@property (readonly, nonatomic) NSDate *transit;
@property (readonly, nonatomic) NSDate *sunset;
@property (readonly, nonatomic) NSDate *nextSunrise;
@property (readonly, nonatomic) NSDate *nextTransit;
@property (readonly, nonatomic) NSDate *nextSunset;

- (void)calculateGeocentricDirectionForSunX:(double *)a0 Y:(double *)a1 Z:(double *)a2;
- (void)calculateAstronomicalTimeForLocation:(struct { double x0; double x1; })a0;
- (void)calculateAstronomicalTimeForLocation:(struct { double x0; double x1; })a0 date:(id)a1 altitudeInDegrees:(double)a2 options:(unsigned long long)a3;
- (id)description;
- (void).cxx_destruct;
- (void)calculateGeocentricDirectionForSunX:(double *)a0 Y:(double *)a1 Z:(double *)a2 date:(id)a3;
- (void)calculateAstronomicalTimeForLocation:(struct { double x0; double x1; })a0 time:(double)a1;
- (BOOL)isDayLightForTime:(double)a0;
- (void)calculateAstronomicalTimeForLocation:(struct { double x0; double x1; })a0 time:(double)a1 altitudeInDegrees:(double)a2;
- (void)calculateAstronomicalTimeForLocation:(struct { double x0; double x1; })a0 altitudeInDegrees:(double)a1;
- (BOOL)isDayLightForDate:(id)a0;
- (void)calculateAstronomicalTimeForLocation:(struct { double x0; double x1; })a0 time:(double)a1 altitudeInDegrees:(double)a2 options:(unsigned long long)a3;

@end
