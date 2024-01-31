@class HKQuantity;

@interface HKHearingLevelMetrics : NSObject

@property (readonly, nonatomic) unsigned long long hearingLevelClassification;
@property (readonly, copy, nonatomic) HKQuantity *averageSensitivity;
@property (readonly, copy, nonatomic) HKQuantity *minimumSensitivity;
@property (readonly, copy, nonatomic) HKQuantity *maximumSensitivity;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithAverageSensitivity:(id)a0 minimumSensitivity:(id)a1 maximumSensitivity:(id)a2;

@end
