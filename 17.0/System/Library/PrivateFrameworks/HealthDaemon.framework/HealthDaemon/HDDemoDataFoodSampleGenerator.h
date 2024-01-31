@class NSArray, HDDemoDataFoodDatabase;

@interface HDDemoDataFoodSampleGenerator : HDDemoDataBaseSampleGenerator {
    HDDemoDataFoodDatabase *_foodDatabase;
    double _nextMealTime;
    NSArray *_lastMeal;
    double _nextBloodGlucoseSampleTime;
    double _nextBloodGlucoseFingerStickSampleTime;
    double _nextBloodGlucoseMealTime;
    double _lastBloodGlucose;
    double _nextInsulinPumpBasalSampleTime;
    double _carbohydratesLeftToDigest;
    double _bloodGlucoseCarbohydrateGlycemicRate;
    double _bloodGlucoseDecreaseRateDueToInsulin;
    double _nextWaterConsumedSampleTime;
}

@property (readonly, nonatomic) double nextBreakfastTime;
@property (readonly, nonatomic) double nextLunchTime;
@property (readonly, nonatomic) double nextSnackTime;
@property (readonly, nonatomic) double nextDinnerTime;
@property (readonly, nonatomic) double lastMealTime;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (double)_computeMealTimeForDemoPerson:(id)a0 fromTime:(double)a1 mealTimeType:(long long)a2 timeMean:(double)a3 stdDev:(double)a4;
- (void)_generateRandomLastMeal;
- (BOOL)_isDemoPersonConsumingCaffeine:(id)a0 atTime:(double)a1;
- (id)_lastMeal;
- (void)generateFirstRunObjectsForDemoPerson:(id)a0 firstDate:(id)a1 objectCollection:(id)a2;
- (void)generateObjectsForDemoPerson:(id)a0 fromTime:(double)a1 toTime:(double)a2 currentDate:(id)a3 objectCollection:(id)a4;
- (void)setupWithDemoDataGenerator:(id)a0;

@end
