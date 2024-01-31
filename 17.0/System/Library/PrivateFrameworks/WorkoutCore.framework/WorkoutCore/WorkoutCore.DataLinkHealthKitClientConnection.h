@interface WorkoutCore.DataLinkHealthKitClientConnection : NSObject <HKWorkoutSessionDelegate> {
    void /* unknown type, empty encoding */ store;
    void /* unknown type, empty encoding */ session;
    void /* unknown type, empty encoding */ metricsUpdater;
    void /* unknown type, empty encoding */ notificationHandler;
    void /* unknown type, empty encoding */ presenceHandler;
    void /* unknown type, empty encoding */ deltaMetricsPublisher;
    void /* unknown type, empty encoding */ knownSequences;
}

- (void)workoutSession:(id)a0 didChangeToState:(long long)a1 fromState:(long long)a2 date:(id)a3;
- (void)workoutSession:(id)a0 didFailWithError:(id)a1;
- (void)workoutSession:(id)a0 didDisconnectFromRemoteDeviceWithError:(id)a1;
- (void)workoutSession:(id)a0 didReceiveDataFromRemoteWorkoutSession:(id)a1;
- (void)workoutSession:(id)a0 didReceiveDataFromRemoteDevice:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
