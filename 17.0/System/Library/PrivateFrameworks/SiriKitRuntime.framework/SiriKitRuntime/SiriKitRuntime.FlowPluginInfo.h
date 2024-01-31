@class NSString;

@interface SiriKitRuntime.FlowPluginInfo : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ supportsOnDeviceNL;
    void /* unknown type, empty encoding */ isPersonalRequest;
    void /* unknown type, empty encoding */ sensitivityPolicy;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
