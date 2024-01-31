@class NSUUID, NSString, AKAuthorizationUpgradeContext, NSArray, NSData, NSValue, AKAuthorizationRequest, AKPasswordRequest, NSNumber;

@interface AKCredentialRequestContext : NSObject <NSCopying, NSSecureCoding> {
    BOOL _passcodeProtected;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *_sessionID;
@property (nonatomic) BOOL _shouldForceUI;
@property (nonatomic) BOOL _shouldSkipBiometrics;
@property (nonatomic) BOOL _shouldSkipAuthorizationUI;
@property (nonatomic) BOOL _shouldForcePrivateEmail;
@property (nonatomic) BOOL _requirePassword;
@property (nonatomic) BOOL _isWebLogin;
@property (nonatomic) BOOL _isFirstPartyLogin;
@property (nonatomic) BOOL _isRapportLogin;
@property (readonly, nonatomic) BOOL _isEligibleForUpgradeFromPassword;
@property (readonly, nonatomic) BOOL _isSubscriptionLogin;
@property (nonatomic) BOOL _isItunesLogin;
@property (retain, nonatomic) NSString *_callerBundleID;
@property (readonly, nonatomic) AKAuthorizationUpgradeContext *_upgradeContext;
@property (retain, nonatomic) NSString *_proxiedClientAppName;
@property (retain, nonatomic) NSString *_proxiedClientBundleID;
@property (retain, nonatomic) NSString *_proxiedClientServiceID;
@property (retain, nonatomic) NSString *_proxiedClientTeamID;
@property (retain, nonatomic) NSString *_proxiedClientAppID;
@property (retain, nonatomic) NSArray *_proxiedAssociatedDomains;
@property (retain, nonatomic) NSString *_proxiedDeviceName;
@property (retain, nonatomic) NSString *_proxiedDeviceClass;
@property (nonatomic) BOOL _clientShouldAuthenticateExternally;
@property (nonatomic) BOOL _shouldUseProxiedClientBundleIDForSRP;
@property (copy, nonatomic) NSString *_iconName;
@property (copy, nonatomic) NSData *_iconData;
@property (copy, nonatomic) NSNumber *_iconScale;
@property (copy, nonatomic) NSValue *_iconSize;
@property (copy, nonatomic) NSString *_informativeText;
@property (nonatomic) double _authSessionTimeoutInterval;
@property (copy, nonatomic) NSString *_externalAuthToken;
@property (copy, nonatomic) NSData *_externalLocalAuthData;
@property (copy, nonatomic) NSString *_continuationRequestIdentifier;
@property (readonly, copy, nonatomic) NSUUID *requestIdentifier;
@property (nonatomic) unsigned long long requestOptions;
@property (retain, nonatomic) AKAuthorizationRequest *authorizationRequest;
@property (retain, nonatomic) AKPasswordRequest *passwordRequest;
@property (retain, nonatomic) NSArray *credentialRequests;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithProxiedClientContext:(id)a0;
- (id)initWithUpgradeContext:(id)a0;

@end
