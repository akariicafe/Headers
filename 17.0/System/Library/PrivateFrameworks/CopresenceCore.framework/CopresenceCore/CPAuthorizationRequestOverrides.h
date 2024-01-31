@interface CPAuthorizationRequestOverrides : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ message;
    void /* unknown type, empty encoding */ startForEveryone;
    void /* unknown type, empty encoding */ startForMe;
    void /* unknown type, empty encoding */ alwaysPrompt;
    void /* unknown type, empty encoding */ confirmReplacement;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) long long hash;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
