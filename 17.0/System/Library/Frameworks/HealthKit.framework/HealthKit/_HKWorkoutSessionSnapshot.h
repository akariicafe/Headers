@class HKWorkoutActivity, NSDate;

@interface _HKWorkoutSessionSnapshot : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long sessionState;
@property (readonly, copy, nonatomic) NSDate *startDate;
@property (readonly, copy, nonatomic) NSDate *endDate;
@property (readonly, copy, nonatomic) HKWorkoutActivity *currentActivity;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_initWithSessionState:(long long)a0 startDate:(id)a1 endDate:(id)a2 currentActivity:(id)a3;

@end
