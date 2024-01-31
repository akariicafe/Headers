@class ASCPublicKeyCredentialCreationOptions, NSString, NSArray, CPSWebRequest, AKPasswordRequest, AKAuthorizationRequest, ASCPublicKeyCredentialAssertionOptions;

@interface CPSAppSignInRequest : CPSAuthenticationRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *overrideBundleIdentifier;
@property (readonly, nonatomic) BOOL isAppleIDOnlyRequest;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) BOOL isPasskeyRequest;
@property (readonly, nonatomic) BOOL isPasskeyRegistrationRequest;
@property (readonly, nonatomic) BOOL hasAnyNonPasskeyRegistrationRequest;
@property (readonly, nonatomic) AKAuthorizationRequest *appleIDRequest;
@property (readonly, nonatomic) AKPasswordRequest *passwordRequest;
@property (copy, nonatomic) NSArray *customAuthenticationMethods;
@property (readonly, nonatomic) CPSWebRequest *webRequest;
@property (readonly, nonatomic) ASCPublicKeyCredentialAssertionOptions *platformKeyCredentialAssertionOptions;
@property (readonly, nonatomic) ASCPublicKeyCredentialCreationOptions *platformKeyCredentialRegistrationOptions;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (long long)authType;
- (id)initWithCoder:(id)a0;
- (id)initWithRequests:(id)a0;
- (BOOL)_isPlatformKeyOnlyRequest;
- (id)initWithAppleIDRequest:(id)a0 passwordReqeust:(id)a1 platformKeyCredentialAssertionOptions:(id)a2 platformKeyCredentialRegistrationOptions:(id)a3;
- (id)initWithWebRequest:(id)a0;

@end
