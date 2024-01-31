@interface HomePodSettings.TransportDeviceIdentity : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ identitySections;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
