@class GCController, CMMotionManager;

@interface _GCAppleTVRemoteMotionProfile : GCMotion {
    struct { double x; double y; double z; } _gravity;
    struct { double x; double y; double z; } _prevGravity;
    struct { double x; double y; double z; } _userAcceleration;
    struct GCQuaternion { double x; double y; double z; double w; } _attitude;
    struct GCQuaternion { double x; double y; double z; double w; } _prevAttitude;
    struct { double pitch; double yaw; double roll; } _eulerAngles;
    struct { double pitch; double yaw; double roll; } _prevEulerAngles;
    struct { double x; double y; double z; } _rotationRate;
    float _tip;
    float _tilt;
    CMMotionManager *_motionMgr;
    BOOL _linkedOnOrAfterCompassFeature;
    BOOL _motionLite;
    BOOL _compassEnabled;
    id /* block */ _valueChangedHandler;
    id /* block */ _internalValueChangedHandler;
    BOOL _emulatedMotionEnabled;
    BOOL _motionUpdatedEnabled;
    BOOL _paused;
    GCController *_controller;
}

- (id)controller;
- (struct { double x0; double x1; double x2; })gravity;
- (id)initWithController:(id)a0;
- (struct GCQuaternion { double x0; double x1; double x2; double x3; })attitude;
- (void).cxx_destruct;
- (struct { double x0; double x1; double x2; })rotationRate;
- (struct { double x0; double x1; double x2; })userAcceleration;
- (float)_tilt;
- (float)_tip;
- (void)_startDeviceMotionUpdates;
- (void)_stopDeviceMotionUpdates;
- (BOOL)hasAttitude;
- (void)setValueChangedHandler:(id /* block */)a0;
- (void)_setMotionLite:(BOOL)a0;
- (BOOL)hasRotationRate;
- (void)_startDeviceMotionUpdatesHelper;
- (void)setInternalValueChangedHandler:(id /* block */)a0;
- (BOOL)_isUpdatingDeviceMotion;
- (id /* block */)_motionLiteFusedHandler;
- (void)_pauseMotionUpdates:(BOOL)a0;
- (void)_setAttitude:(struct GCQuaternion { double x0; double x1; double x2; double x3; })a0;
- (void)_setCompassEnabled:(BOOL)a0;
- (void)_setGravity:(struct { double x0; double x1; double x2; })a0;
- (void)_setRotationRate:(struct { double x0; double x1; double x2; })a0;
- (void)_setUserAcceleration:(struct { double x0; double x1; double x2; })a0;
- (void)_stopDeviceMotionUpdatesHelper;
- (BOOL)hasAttitudeAndRotationRate;
- (BOOL)hasGravityAndUserAcceleration;
- (id /* block */)internalValueChangedHandler;
- (BOOL)isEmulatedMicroGamepad;
- (id /* block */)valueChangedHandler;

@end
