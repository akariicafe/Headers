@interface HDDemoDataAlcoholSampleGenerator : HDDemoDataBaseSampleGenerator

@property (nonatomic) double nextCheckInTime;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)generateObjectsForDemoPerson:(id)a0 fromTime:(double)a1 toTime:(double)a2 currentDate:(id)a3 foodSampleGenerator:(id)a4 statisticsSampleGenerator:(id)a5 bodySampleGenerator:(id)a6 objectCollection:(id)a7;
- (void)generateObjectsForDemoPerson:(id)a0 fromTime:(double)a1 toTime:(double)a2 currentDate:(id)a3 objectCollection:(id)a4;
- (void)setupWithDemoDataGenerator:(id)a0;

@end
