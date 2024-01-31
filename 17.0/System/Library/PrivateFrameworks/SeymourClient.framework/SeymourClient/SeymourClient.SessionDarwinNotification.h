@class NSString;

@interface SeymourClient.SessionDarwinNotification : NSObject

@property (class, nonatomic, readonly) int sessionStatusToken;
@property (class, nonatomic, readonly) NSString *sessionUpdated;
@property (class, nonatomic, readonly) NSString *sessionMindAppRequirementConfirmation;
@property (class, nonatomic, readonly) NSString *sessionWorkoutAppRequirementConfirmation;
@property (class, nonatomic, readonly) NSString *sessionGuidedRunWorkoutAppRequirementConfirmation;
@property (class, nonatomic, readonly) NSString *sessionGuidedWalkWorkoutAppRequirementConfirmation;

- (id)init;
- (void).cxx_destruct;

@end
