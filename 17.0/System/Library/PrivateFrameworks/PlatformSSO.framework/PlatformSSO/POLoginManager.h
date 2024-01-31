@class NSString, NSDictionary, POUserLoginConfiguration, POLoginConfiguration, POServiceLoginManagerConnection;
@protocol SOHostExtensionContextProtocol;

@interface POLoginManager : NSObject <NSSecureCoding> {
    POServiceLoginManagerConnection *_serviceConnection;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, getter=isDeviceRegistered) BOOL deviceRegistered;
@property (readonly, getter=isUserRegistered) BOOL userRegistered;
@property (readonly, copy, nonatomic) NSString *registrationToken;
@property (copy, nonatomic) NSDictionary *extensionData;
@property (retain, nonatomic) NSString *loginUserName;
@property (readonly, copy, nonatomic) POUserLoginConfiguration *userLoginConfiguration;
@property (copy, nonatomic) NSDictionary *ssoTokens;
@property (readonly, copy, nonatomic) POLoginConfiguration *loginConfiguration;
@property (readonly, nonatomic) struct __SecCertificate { } *deviceAttestationCertificate;
@property (retain) id<SOHostExtensionContextProtocol> hostExtensionContext;
@property (retain, nonatomic) NSString *requestIdentifier;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithUid:(unsigned int)a0;
- (void)resetDeviceKeys;
- (void)attestKey:(long long)a0 clientDataHash:(id)a1 completion:(id /* block */)a2;
- (struct __SecCertificate { } *)copyDeviceAttestationCertificate;
- (struct __SecIdentity { } *)copyIdentityForKeyType:(long long)a0;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)copyKeyForKeyType:(long long)a0;
- (void)deviceRegistrationsNeedsRepair;
- (void)presentRegistrationViewControllerWithCompletion:(id /* block */)a0;
- (void)resetKeys;
- (void)resetUserSecureEnclaveKey;
- (void)saveCertificate:(struct __SecCertificate { } *)a0 keyType:(long long)a1;
- (BOOL)saveLoginConfiguration:(id)a0 error:(id *)a1;
- (BOOL)saveUserLoginConfiguration:(id)a0 error:(id *)a1;
- (void)userNeedsReauthentication;
- (void)userNeedsReauthenticationWithCompletion:(id /* block */)a0;
- (void)userRegistrationsNeedsRepair;

@end
