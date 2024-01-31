@class NSUUID, HKWorkoutRoute, NSDateInterval;

@interface _HKWorkoutRouteQueryServerConfiguration : HKQueryServerConfiguration

@property (retain, nonatomic) HKWorkoutRoute *workoutRoute;
@property (copy, nonatomic) NSUUID *workoutUUID;
@property (copy, nonatomic) NSDateInterval *dateInterval;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
