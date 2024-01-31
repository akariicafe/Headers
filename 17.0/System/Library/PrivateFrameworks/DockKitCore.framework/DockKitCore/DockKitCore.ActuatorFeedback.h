@interface DockKitCore.ActuatorFeedback : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ positions;
    void /* unknown type, empty encoding */ velocities;
    void /* unknown type, empty encoding */ timestamp;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
