@class HKQuantity;

@interface HDFakeDataCollectorConfiguration : NSObject <NSCopying>

@property (nonatomic) long long activityType;
@property (copy, nonatomic) HKQuantity *speed;

+ (id)configurationForWorkoutActivityType:(unsigned long long)a0;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
