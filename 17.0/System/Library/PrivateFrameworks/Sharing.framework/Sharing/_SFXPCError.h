@interface _SFXPCError : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ domain;
    void /* unknown type, empty encoding */ errorCode;
    void /* unknown type, empty encoding */ internalLocalizedDescription;
    void /* unknown type, empty encoding */ internalDebugDescription;
    void /* unknown type, empty encoding */ file;
    void /* unknown type, empty encoding */ line;
    void /* unknown type, empty encoding */ process;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
