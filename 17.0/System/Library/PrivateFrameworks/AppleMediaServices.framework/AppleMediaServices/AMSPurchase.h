@class NSString, NSDictionary, AMSBuyParams, ACAccount, AMSProcessInfo, NSNumber;

@interface AMSPurchase : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *URLBagKey;
@property (retain, nonatomic) ACAccount *account;
@property (copy, nonatomic) NSDictionary *additionalHeaders;
@property (readonly, copy, nonatomic) AMSBuyParams *buyParams;
@property (readonly, copy, nonatomic) NSString *clientCorrelationKey;
@property (copy, nonatomic) AMSProcessInfo *clientInfo;
@property (nonatomic) BOOL ignoreRequirePasswordRestriction;
@property (copy, nonatomic) NSString *logUUID;
@property (copy, nonatomic) NSNumber *ownerAccountId;
@property (copy, nonatomic) NSDictionary *metricsOverlay;
@property (copy, nonatomic) NSString *presentingSceneBundleIdentifier;
@property (copy, nonatomic) NSString *presentingSceneIdentifier;
@property (readonly) long long purchaseType;
@property (readonly, nonatomic, getter=isRedownload) BOOL redownload;
@property (nonatomic) BOOL requiresAccount;
@property (copy, nonatomic) NSString *storefront;
@property (readonly, nonatomic) NSNumber *uniqueIdentifier;
@property (nonatomic, getter=isUserInitiated) BOOL userInitiated;
@property (nonatomic) BOOL useJSONContentType;
@property (copy, nonatomic) NSString *callerBundleId;
@property (copy, nonatomic) NSString *clientId;

+ (id)_authContextTitleForConfirmationStyle:(unsigned long long)a0;
+ (id)defaultAuthenticationContextForRequest:(id)a0;
+ (id)purchaseFromPurchase:(id)a0;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)_generateIdentifier;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPurchaseType:(long long)a0 buyParams:(id)a1;
- (id)authenticationContextForRequest:(id)a0;
- (BOOL)isEqualToPurchase:(id)a0;

@end
