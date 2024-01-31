@class NSString;

@interface DockKitCore.SensorLEDState : DockKitCore.SensorData {
    void /* unknown type, empty encoding */ state;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic) void /* unknown type, empty encoding */ brightness;
@property (nonatomic) void /* unknown type, empty encoding */ color;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithState:(long long)a0 brightness:(double)a1 color:(double)a2;

@end
