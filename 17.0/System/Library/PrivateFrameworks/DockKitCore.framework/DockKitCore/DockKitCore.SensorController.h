@class NSArray, NSError;
@protocol _TtP11DockKitCore23XPCSensorClientProtocol_;

@interface DockKitCore.SensorController : DockKitCore.System {
    void /* unknown type, empty encoding */ logger;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)getSensorDataWithSensors:(NSArray *)a0 delegate:(id<_TtP11DockKitCore23XPCSensorClientProtocol_>)a1 occurrence:(long long)a2 completionHandler:(void (^)(NSError *))a3;
- (id)initWithAccessory:(id)a0 id:(long long)a1 type:(long long)a2 name:(id)a3;
- (id)initWithAccessory:(id)a0 id:(long long)a1 name:(id)a2 sensors:(id)a3;
- (void)setSensorStateWithSensors:(NSArray *)a0 states:(NSArray *)a1 completionHandler:(void (^)(NSError *))a2;
- (void)stopSensorDataWithSensors:(NSArray *)a0 completionHandler:(void (^)(NSError *))a1;

@end
