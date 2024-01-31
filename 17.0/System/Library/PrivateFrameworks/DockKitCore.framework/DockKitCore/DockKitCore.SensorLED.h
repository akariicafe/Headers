@class NSString;

@interface DockKitCore.SensorLED : DockKitCore.Sensor

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, retain) void /* unknown type, empty encoding */ state;
@property (nonatomic, readonly) NSString *description;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
