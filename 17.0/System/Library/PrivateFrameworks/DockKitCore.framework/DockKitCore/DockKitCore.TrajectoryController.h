@interface DockKitCore.TrajectoryController : NSObject {
    void /* unknown type, empty encoding */ trajectory;
    void /* unknown type, empty encoding */ startTime;
    void /* unknown type, empty encoding */ lookaheadSeconds;
    void /* unknown type, empty encoding */ maxGoalError;
    void /* unknown type, empty encoding */ maxPathError;
    void /* unknown type, empty encoding */ maxGoalDelay;
    void /* unknown type, empty encoding */ controllerPeriod;
    void /* unknown type, empty encoding */ pid;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ controlMode;
    void /* unknown type, empty encoding */ minVelocity;
}

- (id)init;
- (void).cxx_destruct;

@end
