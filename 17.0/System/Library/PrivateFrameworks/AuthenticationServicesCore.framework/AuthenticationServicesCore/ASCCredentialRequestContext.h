@class NSData, AKAuthorizationRequest, NSString, NSArray, ASGlobalFrameIdentifier, LAContext, WBSSavedAccountContext, ASCPublicKeyCredentialAssertionOptions, NSNumber, ASCPublicKeyCredentialCreationOptions;

@interface ASCCredentialRequestContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *proxiedAppName;
@property (copy, nonatomic) NSString *proxiedAppIdentifier;
@property (copy, nonatomic) NSString *proxiedBundleIdentifier;
@property (copy, nonatomic) NSString *proxiedTeamIdentifier;
@property (copy, nonatomic) NSArray *proxiedAssociatedDomains;
@property (copy, nonatomic) NSData *proxiedIconData;
@property (copy, nonatomic) NSNumber *proxiedIconScale;
@property (copy, nonatomic) NSString *proxiedOriginDeviceName;
@property (copy, nonatomic) NSString *proxySheetHeaderOverride;
@property (copy, nonatomic) NSString *proxySheetTitleOverride;
@property (copy, nonatomic) NSString *proxySheetSubtitleOverride;
@property (copy, nonatomic) NSString *proxySheetNoCredentialsErrorTitleOverride;
@property (copy, nonatomic) NSString *proxySheetNoCredentialsErrorMessageOverride;
@property (nonatomic) BOOL useAlternativeSecurityKeysIcon;
@property (readonly, nonatomic) BOOL isClientLinkedOnOrAfterIOS15Aligned;
@property (nonatomic) BOOL isCABLEAuthenticatorRequest;
@property (readonly, nonatomic) unsigned long long requestTypes;
@property (copy, nonatomic) NSString *relyingPartyIdentifier;
@property (retain, nonatomic) ASCPublicKeyCredentialCreationOptions *platformKeyCredentialCreationOptions;
@property (retain, nonatomic) ASCPublicKeyCredentialCreationOptions *securityKeyCredentialCreationOptions;
@property (retain, nonatomic) ASCPublicKeyCredentialAssertionOptions *platformKeyCredentialAssertionOptions;
@property (retain, nonatomic) ASCPublicKeyCredentialAssertionOptions *securityKeyCredentialAssertionOptions;
@property (retain, nonatomic) AKAuthorizationRequest *appleIDAuthorizationRequest;
@property (readonly, nonatomic) BOOL isProxiedRequest;
@property (readonly, nonatomic) BOOL isRegistrationRequest;
@property (readonly, nonatomic) BOOL isUsingWebBrowserOnlyOptions;
@property (nonatomic) long long requestStyle;
@property (nonatomic) unsigned long long requestOptions;
@property (copy, nonatomic) ASGlobalFrameIdentifier *globalFrameID;
@property (retain, nonatomic) LAContext *authenticatedContext;
@property (copy, nonatomic) NSString *windowSceneIdentifier;
@property (copy, nonatomic) WBSSavedAccountContext *savedAccountContext;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithRequestTypes:(unsigned long long)a0;
- (void)logRequest;
- (void)removePasskeyRequests;
- (void)removeSecurityKeyRequests;
- (void)sanitizeRequestTypesForAutoFillRequestIfNecessary;

@end
