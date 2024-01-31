@class NSString;

@interface DockKitCore.SensorButtonState : DockKitCore.SensorData {
    void /* unknown type, empty encoding */ state;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithState:(long long)a0;
- (id)initWithCoder:(id)a0;

@end
