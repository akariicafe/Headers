@class NSString, NSArray, NSData, POKeychainHelper, POUserLoginConfiguration, NSDate;

@interface POUserConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *ssoExtensionIdentifier;
@property (retain) NSData *_sepKeyData;
@property (retain) POKeychainHelper *keychainHelper;
@property (readonly) int version;
@property (retain) POUserLoginConfiguration *userLoginConfiguration;
@property (copy) NSString *uniqueIdentifier;
@property (copy) NSString *__ssoExtensionIdentifier;
@property long long state;
@property (retain, nonatomic) NSDate *lastLoginDate;
@property unsigned long long loginType;
@property struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *sepKey;
@property (nonatomic) struct __SecCertificate { } *sepKeyCertificate;
@property (copy) NSString *smartCardTokenId;
@property (copy) NSData *_credential;
@property (copy) NSArray *kerberosStatus;
@property (copy) NSData *pendingSSOTokens;
@property (copy) NSData *userDecryptionKeyHash;
@property struct __SecCertificate { } *userDecryptionCertificate;
@property (copy) NSString *userDecryptionContext;

- (void)updateVersion;
- (id)dataRepresentation;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)calculateExpirationForTokens:(id)a0;
- (id)dataRepresentationForDisplay:(BOOL)a0;
- (id)decryptPendingSSOTokensUsingPrivateKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a0 sharedData:(id)a1;
- (BOOL)encryptPendingSSOTokens:(id)a0 usingPublicKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a1 sharedData:(id)a2;
- (BOOL)setTokens:(id)a0 extensionIdentifier:(id)a1 returningError:(id *)a2;
- (id)tokensForExtensionIdentifier:(id)a0;

@end
