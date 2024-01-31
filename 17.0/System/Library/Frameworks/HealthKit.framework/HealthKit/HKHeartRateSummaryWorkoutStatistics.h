@class HKQuantity;

@interface HKHeartRateSummaryWorkoutStatistics : HKHeartRateSummaryStatistics

@property (retain, nonatomic, setter=_setAverageHeartRate:) HKQuantity *averageHeartRate;
@property (retain, nonatomic, setter=_setMaximumHeartRate:) HKQuantity *maximumHeartRate;
@property (readonly, nonatomic) unsigned long long workoutActivityType;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (id)initWithDateInterval:(id)a0 numberOfBuckets:(long long)a1 workoutUUID:(id)a2 workoutActivityType:(unsigned long long)a3;
- (id)initFromStatistics:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
