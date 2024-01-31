@class HKQuantity, NSMutableData, NSMutableArray, NSDate;

@interface _HDDemoDataActivityWorkoutState : NSObject <NSSecureCoding> {
    NSMutableData *_associatedObjectUUIDs;
    NSMutableArray *_workoutEvents;
    unsigned long long _workoutActivityType;
    unsigned long long _goalType;
    HKQuantity *_goal;
    NSDate *_startDate;
    double _totalEnergyBurnedInKilocalories;
    double _totalDistanceWalkingInMeters;
    double _totalDistanceCyclingInMeters;
    double _totalDistanceSwimmingInYards;
    double _totalSwimmingStrokes;
    long long _swimmingStrokeStyle;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
