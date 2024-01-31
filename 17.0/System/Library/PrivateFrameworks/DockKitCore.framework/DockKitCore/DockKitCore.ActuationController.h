@class NSArray, NSError, _TtC11DockKitCore16ActuatorFeedback;
@protocol _TtP11DockKitCore25XPCActuatorClientProtocol_;

@interface DockKitCore.ActuationController : DockKitCore.System <DockKitCore.XPCActuatorClientProtocol> {
    void /* unknown type, empty encoding */ motionModel;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ trajectoryController;
    void /* unknown type, empty encoding */ trajectoryProgressCallback;
    void /* unknown type, empty encoding */ executingTrajectory;
    void /* unknown type, empty encoding */ abortTrajectory;
    void /* unknown type, empty encoding */ lastFeedbackTime;
    void /* unknown type, empty encoding */ lastFeedbackRequest;
    void /* unknown type, empty encoding */ feedbackStarted;
    void /* unknown type, empty encoding */ feedbackLock;
    void /* unknown type, empty encoding */ yawOffset;
    void /* unknown type, empty encoding */ rotateCameraAngle;
    void /* unknown type, empty encoding */ lastTrajectoryProgress;
    void /* unknown type, empty encoding */ imu;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)actuatorFeedbackWithInfo:(id)a0 system:(id)a1 actuators:(id)a2 positions:(id)a3 velocities:(id)a4 timestamp:(double)a5;
- (void)disconnectedWithErr:(id)a0;
- (void)trajectoryProgressFeedbackWithInfo:(id)a0 system:(id)a1 progress:(id)a2;
- (id)initWithAccessory:(id)a0 id:(long long)a1 type:(long long)a2 name:(id)a3;
- (void)getActuatorFeedbackWithActuators:(NSArray *)a0 delegate:(id<_TtP11DockKitCore25XPCActuatorClientProtocol_>)a1 occurrence:(long long)a2 completionHandler:(void (^)(NSError *))a3;
- (void)getCurrentFeedbackWithActuators:(NSArray *)a0 completionHandler:(void (^)(_TtC11DockKitCore16ActuatorFeedback *, NSError *))a1;
- (id)initWithAccessory:(id)a0 id:(long long)a1 motionModel:(long long)a2 name:(id)a3 actuators:(id)a4;
- (void)setActuatorPositionsWithActuators:(NSArray *)a0 positions:(NSArray *)a1 completionHandler:(void (^)(NSError *))a2;
- (void)setActuatorVelocitiesWithActuatorNames:(NSArray *)a0 velocities:(NSArray *)a1 completionHandler:(void (^)(NSError *))a2;
- (void)setActuatorVelocitiesWithActuators:(NSArray *)a0 velocities:(NSArray *)a1 completionHandler:(void (^)(NSError *))a2;
- (void)setRotationWithYaw:(double)a0 pitch:(double)a1 roll:(double)a2 completionHandler:(void (^)(NSError *))a3;
- (void)setRotationalVelocityWithYaw:(double)a0 pitch:(double)a1 roll:(double)a2 completionHandler:(void (^)(NSError *))a3;
- (void)stopActuatorFeedbackWithCompletionHandler:(void (^)(NSError *))a0;

@end
