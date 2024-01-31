@class NSString, CMWorkoutManager;

@interface HDAutoPauseWorkoutEventCollector : HDWorkoutEventCollector <CMWorkoutManagerDelegate> {
    CMWorkoutManager *_cmWorkoutManager;
    int _catFlexingNotifyToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)unitTest_setCMWorkoutManager:(id)a0;
- (void)stop;
- (void).cxx_destruct;
- (void)workoutManager:(id)a0 detectedChangeInWorkoutType:(id)a1 withOverview:(id)a2;
- (void)workoutManager:(id)a0 didBeginWorkoutSessionWithWorkout:(id)a1 withOverview:(id)a2;
- (void)workoutManager:(id)a0 didEndWorkoutSessionWithWorkout:(id)a1 withOverview:(id)a2;
- (void)workoutManager:(id)a0 didFailWorkout:(id)a1 withError:(id)a2;
- (void)workoutManager:(id)a0 didPauseWorkout:(id)a1 withOverview:(id)a2;
- (void)workoutManager:(id)a0 didResumeWorkout:(id)a1 withOverview:(id)a2;
- (void)workoutManager:(id)a0 didSetCurrentWorkoutType:(id)a1 withOverview:(id)a2;
- (void)workoutManager:(id)a0 didStartWorkout:(id)a1 atDate:(id)a2;
- (void)workoutManager:(id)a0 didStopWorkout:(id)a1 atDate:(id)a2;
- (void)workoutManager:(id)a0 suggestedStopWorkout:(id)a1 atDate:(id)a2;
- (void)workoutManager:(id)a0 willPauseWorkout:(id)a1 atDate:(id)a2;
- (void)workoutManager:(id)a0 willResumeWorkout:(id)a1 atDate:(id)a2;
- (void)workoutManager:(id)a0 workoutLocationEventUpdate:(id)a1;
- (void)fakeActivityDetection:(id)a0 workoutActivity:(id)a1;
- (id)initWithProfile:(id)a0 delegate:(id)a1;

@end
