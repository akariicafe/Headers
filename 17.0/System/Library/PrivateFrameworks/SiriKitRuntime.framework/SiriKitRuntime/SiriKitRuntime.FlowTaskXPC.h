@class NSString;

@interface SiriKitRuntime.FlowTaskXPC : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ id;
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ isClientInitiated;
    void /* unknown type, empty encoding */ creationTime;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
