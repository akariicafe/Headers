@interface SiriKitRuntime.ConversationCanHandleResult : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ directlySupported;
    void /* unknown type, empty encoding */ exclude;
    void /* unknown type, empty encoding */ reformedInput;
    void /* unknown type, empty encoding */ flowIdentifier;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
