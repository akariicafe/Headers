@class NSArray;

@interface HDDemoDataReproductiveHealthSampleGenerator : HDDemoDataBaseSampleGenerator {
    NSArray *_basalBodyTempMultiplierTable;
    NSArray *_cervicalMucusTable;
    double _nextSexualActivitySampleTime;
    double _nextCycleDaySampleTime;
}

+ (BOOL)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (long long)cycleDayIndexAtTime:(double)a0 demoPerson:(id)a1;
- (id)_basalBodyTempMultiplier;
- (long long)_computeNextLuteinizingHormoneSurgeForDemoPerson:(id)a0 atTime:(double)a1;
- (void)generateFirstRunObjectsForDemoPerson:(id)a0 firstDate:(id)a1 objectCollection:(id)a2;
- (void)generateObjectsForDemoPerson:(id)a0 fromTime:(double)a1 toTime:(double)a2 currentDate:(id)a3 objectCollection:(id)a4;
- (void)setupWithDemoDataGenerator:(id)a0;

@end
