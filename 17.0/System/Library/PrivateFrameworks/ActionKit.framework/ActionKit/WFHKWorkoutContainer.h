@class HKWorkout, HKUnit, NSString;

@interface WFHKWorkoutContainer : NSObject <WFNaming, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) HKWorkout *workout;
@property (retain, nonatomic) HKUnit *distanceUnit;
@property (retain, nonatomic) HKUnit *caloriesUnit;
@property (readonly, nonatomic) double caloriesValue;
@property (readonly, nonatomic) double distanceValue;
@property (readonly, copy, nonatomic) NSString *wfName;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithWorkout:(id)a0;
- (id)initWithWorkout:(id)a0 distanceUnit:(id)a1 caloriesUnit:(id)a2;

@end
