@class NSArray, NSString;

@interface DockKitCore.DockCoreAccessory : NSObject <NSSecureCoding, DockKitCore.XPCActuatorClientProtocol, DockKitCore.XPCSensorClientProtocol> {
    void /* unknown type, empty encoding */ _xpcConnection;
    void /* unknown type, empty encoding */ _xpcConnectionLock;
    void /* unknown type, empty encoding */ _xpcConnectionError;
    void /* unknown type, empty encoding */ _xpcAllowed;
    void /* unknown type, empty encoding */ XPCTIMEOUT;
    void /* unknown type, empty encoding */ feedbackDelegates;
    void /* unknown type, empty encoding */ sensorDelegates;
    void /* unknown type, empty encoding */ trajectoryProgressDelegate;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ systems;
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ firmwareVersion;
    void /* unknown type, empty encoding */ created;
    void /* unknown type, empty encoding */ certified;
    void /* unknown type, empty encoding */ isMagSafe;
    void /* unknown type, empty encoding */ version;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, retain) void /* unknown type, empty encoding */ info;
@property (nonatomic, copy) NSArray *systems;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *summary;
@property (nonatomic, readonly) long long hash;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)actuatorFeedbackWithInfo:(id)a0 system:(id)a1 actuators:(id)a2 positions:(id)a3 velocities:(id)a4 timestamp:(double)a5;
- (void)disconnectedWithErr:(id)a0;
- (void)trajectoryProgressFeedbackWithInfo:(id)a0 system:(id)a1 progress:(id)a2;
- (void)disconnectWithAllowReconnect:(BOOL)a0;
- (long long)getActuatorIndexWithName:(id)a0 system:(id)a1;
- (id)getActuatorWithName:(id)a0;
- (id)getSystemSensorsWithName:(id)a0 sensors:(id)a1;
- (BOOL)hasSystemActuatorsWithName:(id)a0 actuators:(id)a1;
- (BOOL)hasSystemSensorsWithName:(id)a0 sensors:(id)a1;
- (BOOL)hasSystemWithName:(id)a0 kind:(Class)a1;
- (id)initWithInfo:(id)a0 systems:(id)a1;
- (void)sensorDataWithInfo:(id)a0 system:(id)a1 sensors:(id)a2 data:(id)a3;

@end
