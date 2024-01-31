@class NSString;

@interface DockKitCore.Actuator : DockKitCore.Component {
    void /* unknown type, empty encoding */ actuatorType;
    void /* unknown type, empty encoding */ minPosition;
    void /* unknown type, empty encoding */ maxPosition;
    void /* unknown type, empty encoding */ maxSpeed;
    void /* unknown type, empty encoding */ maxAcceleration;
    void /* unknown type, empty encoding */ controlParams;
    void /* unknown type, empty encoding */ cameraLimits;
    void /* unknown type, empty encoding */ _softMinPosition;
    void /* unknown type, empty encoding */ _softMaxPosition;
    void /* unknown type, empty encoding */ _softMaxSpeed;
    void /* unknown type, empty encoding */ allocatedLock;
    void /* unknown type, empty encoding */ _currentPosition;
    void /* unknown type, empty encoding */ _currentVelocity;
    void /* unknown type, empty encoding */ _currentAcceleration;
    void /* unknown type, empty encoding */ _homePosition;
    void /* unknown type, empty encoding */ initialized;
    void /* unknown type, empty encoding */ targetPosition;
    void /* unknown type, empty encoding */ targetVelocity;
    void /* unknown type, empty encoding */ targetAcceleration;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithId:(long long)a0 name:(id)a1 type:(long long)a2;
- (id)initWithId:(long long)a0 type:(long long)a1 name:(id)a2 minPosition:(double)a3 maxPosition:(double)a4 maxSpeed:(double)a5 maxAcceleration:(double)a6 homePosition:(double)a7 controlParams:(id)a8 cameraLimits:(id)a9;

@end
