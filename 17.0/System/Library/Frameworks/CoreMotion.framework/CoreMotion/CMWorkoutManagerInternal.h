@class CMWorkoutOverview, CMWorkout, CMWorkoutManager, NSObject;
@protocol OS_dispatch_queue, CMWorkoutManagerDelegate;

@interface CMWorkoutManagerInternal : NSObject {
    void *fLocationdConnection;
    NSObject<OS_dispatch_queue> *fInternalQueue;
    id<CMWorkoutManagerDelegate> fDelegate;
    CMWorkoutManager *fSender;
    CMWorkout *fLastNonTransitionWorkout;
    CMWorkout *fWorkout;
    CMWorkoutOverview *fWorkoutOverview;
    BOOL fEnableWorkoutChangeDetection;
    long long fSessionState;
}

- (id)init;
- (void)dealloc;
- (void)_teardown;
- (void)_resumeWorkout:(id)a0;
- (void)_beginWorkoutSession:(id)a0 withWorkout:(id)a1 enableWorkoutChangeDetection:(BOOL)a2;
- (void)_checkWorkout:(id)a0;
- (void)_endWorkoutSession:(id)a0;
- (void)_getPromptsNeededForWorkoutType:(long long)a0 handler:(id /* block */)a1;
- (void)_handleDaemonEvent:(id)a0;
- (void)_handleDaemonResponse:(id)a0;
- (void)_pauseWorkout:(id)a0;
- (void)_registerForWorkoutEvents;
- (void)_setCurrentWorkoutType:(id)a0 isManualTransition:(BOOL)a1;
- (void)_setMode:(unsigned long long)a0 forWorkout:(id)a1;
- (void)_setSuggestedStopTimeout:(double)a0;
- (void)_setWorkout:(id)a0;
- (BOOL)_shouldAllowMotionCalibrationPromptsForWorkoutType:(long long)a0;
- (void)_startWorkout:(id)a0;
- (void)_stopWorkout:(id)a0;
- (void)_triggerWorkoutLocationUpdateForTesting:(long long)a0;
- (void)_unregisterForWorkoutEvents;
- (void)_userDismissedWorkoutAlert;

@end
