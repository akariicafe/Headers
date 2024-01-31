@class NSString;

@interface HDGymKitWorkoutAnalyticEvent : NSObject

@property (nonatomic) unsigned long long fitnessMachineType;
@property (retain, nonatomic) NSString *manufacturer;
@property (nonatomic) long long timeToBeginExperience;
@property (nonatomic) long long workoutEndErrorCode;

- (void).cxx_destruct;

@end
