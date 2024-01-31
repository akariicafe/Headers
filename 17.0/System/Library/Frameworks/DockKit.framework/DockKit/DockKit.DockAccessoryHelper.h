@interface DockKit.DockAccessoryHelper : NSObject <DockKitCore.XPCActuatorClientProtocol> {
    void /* unknown type, empty encoding */ feedbackCallback;
    void /* unknown type, empty encoding */ trackingStand;
    void /* unknown type, empty encoding */ logger;
}

- (id)init;
- (void).cxx_destruct;
- (void)actuatorFeedbackWithInfo:(id)a0 system:(id)a1 actuators:(id)a2 positions:(id)a3 velocities:(id)a4 timestamp:(double)a5;
- (void)disconnectedWithErr:(id)a0;
- (void)trajectoryProgressFeedbackWithInfo:(id)a0 system:(id)a1 progress:(id)a2;

@end
