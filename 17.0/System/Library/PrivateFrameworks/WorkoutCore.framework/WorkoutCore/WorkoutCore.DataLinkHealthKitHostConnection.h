@interface WorkoutCore.DataLinkHealthKitHostConnection : NSObject <HKWorkoutSessionPrivateDelegate> {
    void /* unknown type, empty encoding */ session;
    void /* unknown type, empty encoding */ recorder;
    void /* unknown type, empty encoding */ healthMonitor;
    void /* unknown type, empty encoding */ currentSequences;
    void /* unknown type, empty encoding */ lastAckedSequences;
    void /* unknown type, empty encoding */ commandHandler;
}

- (void)workoutSession:(id)a0 didChangeToState:(long long)a1 fromState:(long long)a2 date:(id)a3;
- (void)workoutSession:(id)a0 didFailWithError:(id)a1;
- (void)workoutSession:(id)a0 didDisconnectFromRemoteDeviceWithError:(id)a1;
- (void)workoutSession:(id)a0 didReceiveDataFromRemoteWorkoutSession:(id)a1;
- (void)workoutSession:(id)a0 didUpdateWorkoutConfiguration:(id)a1;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
