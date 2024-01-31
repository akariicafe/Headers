@class NSMutableDictionary, NSString, NSDictionary, AMSKeychainOptions, ACAccount, AMSProcessInfo, AMSPurchaseInfo;
@protocol AMSBagProtocol, AMSResponseDecoding;

@interface AMSURLRequestProperties : NSObject <NSCopying>

@property (copy, nonatomic) ACAccount *account;
@property (copy, nonatomic) NSDictionary *additionalMetrics;
@property (nonatomic) long long anisetteType;
@property (retain, nonatomic) id<AMSBagProtocol> bag;
@property (retain, nonatomic) AMSProcessInfo *clientInfo;
@property (nonatomic) long long dialogOptions;
@property (nonatomic) BOOL disableBiometricsResponseHandling;
@property (nonatomic) BOOL disableLoadURLMetrics;
@property (nonatomic) BOOL disableResponseDecoding;
@property (retain, nonatomic) NSString *gsTokenIdentifier;
@property (retain, nonatomic) AMSKeychainOptions *keychainOptions;
@property (nonatomic) BOOL knownToBeTrusted;
@property (copy, nonatomic) NSString *logUUID;
@property (nonatomic) long long maxRetryCount;
@property (nonatomic) long long mescalType;
@property (retain, nonatomic) AMSPurchaseInfo *purchaseInfo;
@property (nonatomic) BOOL remoteSecuritySigningEnabled;
@property (retain, nonatomic) id<AMSResponseDecoding> responseDecoder;
@property (nonatomic) long long reversePushType;
@property (nonatomic) BOOL shouldSetCookiesFromResponse;
@property (nonatomic) BOOL shouldSetStorefrontFromResponse;
@property (retain, nonatomic) NSMutableDictionary *userInfo;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
