@interface HDDemoDataMobilitySampleGenerator : HDDemoDataBaseSampleGenerator {
    double _nextStepLengthSampleTime;
    double _nextWalkingSpeedSampleTime;
    double _nextAsymmetryPercentageSampleTime;
    double _nextDoubleSupportPercentageSampleTime;
    double _nextSixMinuteWalkTestDistanceSampleTime;
    double _nextStairAscentSpeedSampleTime;
    double _nextStairDescentSpeedSampleTime;
    double _nextWalkingSteadinessSampleTime;
}

+ (BOOL)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)generateFirstRunObjectsForDemoPerson:(id)a0 firstDate:(id)a1 objectCollection:(id)a2;
- (void)generateObjectsForDemoPerson:(id)a0 fromTime:(double)a1 toTime:(double)a2 currentDate:(id)a3 objectCollection:(id)a4;

@end
