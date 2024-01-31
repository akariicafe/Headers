@class NSArray;

@interface HDDemoDataBodySampleGenerator : HDDemoDataBaseSampleGenerator {
    NSArray *_boysHeightBirthTo36MonthsGrowthCurve;
    NSArray *_boysHeight2To20YearsGrowthCurve;
    NSArray *_boysWeightBirthTo36MonthsGrowthCurve;
    NSArray *_boysWeight2To20YearsGrowthCurve;
    NSArray *_girlsHeightBirthTo36MonthsGrowthCurve;
    NSArray *_girlsHeight2To20YearsGrowthCurve;
    NSArray *_girlsWeightBirthTo36MonthsGrowthCurve;
    NSArray *_girlsWeight2To20YearsGrowthCurve;
    double _nextHeightSampleTime;
    double _nextWeightSampleTime;
    double _lastHeightInCm;
    double _lastWeightInKg;
    double _weightAdultStartInKg;
}

+ (BOOL)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)generateObjectsForDemoPerson:(id)a0 fromTime:(double)a1 toTime:(double)a2 currentDate:(id)a3 objectCollection:(id)a4;
- (double)lastHeightInCm;
- (double)lastWeightInKg;
- (void)setupWithDemoDataGenerator:(id)a0;

@end
