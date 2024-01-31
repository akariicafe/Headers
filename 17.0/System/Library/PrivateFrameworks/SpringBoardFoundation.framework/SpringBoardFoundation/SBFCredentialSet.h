@class NSData;

@interface SBFCredentialSet : NSObject <NSSecureCoding> {
    struct __ACMHandle { } *_acmContext;
    BOOL _ownsContext;
    NSData *_cachedCredentials;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithSerializedCredentialSet:(id)a0;
- (id)serializedCredentialSet;

@end
