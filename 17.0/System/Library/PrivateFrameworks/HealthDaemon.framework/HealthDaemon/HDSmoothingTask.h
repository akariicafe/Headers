@class HKWorkout, NSArray, HDDaemonTransaction;

@interface HDSmoothingTask : NSObject {
    BOOL _isTimedOut;
    HKWorkout *_workout;
    NSArray *_routes;
    NSArray *_unsmoothedLocations;
    id /* block */ _completionHandler;
    HDDaemonTransaction *_transaction;
    unsigned long long _smoothingAttempts;
    double _smoothingTaskTimeout;
}

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
