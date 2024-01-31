@class HKPersistentTimer, HDGymKitWorkoutAnalyticEvent;

@interface HDFitnessMachineAnalyticsCollector : NSObject {
    HKPersistentTimer *_authorizationTimer;
}

@property (retain, nonatomic) HDGymKitWorkoutAnalyticEvent *gymKitWorkoutEvent;

- (id)init;
- (void)userBeganPairing;
- (void)workoutEndedSubmitMetricsWith:(id)a0;
- (void)workoutFailedWithError:(id)a0;
- (void).cxx_destruct;
- (void)setFitnessMachineType:(unsigned long long)a0 manufacturer:(id)a1;
- (void)userIsAuthorized;

@end
