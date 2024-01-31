@class NSMeasurement;

@interface GEODistanceStringRoundingInfo : NSObject

@property (readonly, nonatomic) NSMeasurement *roundedDistanceMeasurement;
@property (readonly, nonatomic) double roundingIncrement;
@property (readonly, nonatomic) unsigned long long minFractionDigits;
@property (readonly, nonatomic) unsigned long long maxFractionDigits;

+ (const void *)_lookupTableForMeasurementSystem:(id)a0 locale:(id)a1 formatOptions:(unsigned long long)a2;
+ (const struct _RoundingInfo { double x0; id x1; double x2; unsigned long long x3; unsigned long long x4; } *)_roundingInfoTierForDistanceMeasurement:(id)a0 lookupTable:(const void *)a1 formatOptions:(unsigned long long)a2;
+ (id)roundingInfoForDistanceMeasurement:(id)a0 measurementSystem:(id)a1 locale:(id)a2 formatOptions:(unsigned long long)a3;

- (void).cxx_destruct;

@end
