@interface DCPresentmentSessionOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long sessionEncryptionMode;
@property (nonatomic) unsigned long long responseEncryptionMode;
@property (nonatomic) unsigned long long readerAuthenticationPolicy;
@property (nonatomic) unsigned long long elementFallbackModes;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithSessionEncryptionMode:(unsigned long long)a0;
- (id)initWithSessionEncryptionMode:(unsigned long long)a0 readerAuthenticationPolicy:(unsigned long long)a1;

@end
