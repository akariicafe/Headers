@class NSString;

@interface __GamePolicyAgentUpdateGameEvent : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ auditTokenNSValue;
    void /* unknown type, empty encoding */ date;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
