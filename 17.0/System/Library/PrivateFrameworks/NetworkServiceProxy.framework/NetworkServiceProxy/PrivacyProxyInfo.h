@class NSString, NSDictionary, NSArray;

@interface PrivacyProxyInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *egressProxyURL;
@property (retain, nonatomic) NSString *ingressProxyURL;
@property (retain, nonatomic) NSString *egressFallbackProxyURL;
@property (retain, nonatomic) NSString *ingressFallbackProxyURL;
@property (retain, nonatomic) NSDictionary *tokenCounts;
@property (retain, nonatomic) NSDictionary *resumableSessionCounts;
@property (retain, nonatomic) NSArray *enabledProxiedContentMaps;
@property (nonatomic) unsigned long long deviceIdentityValidationCount;
@property (nonatomic) unsigned long long anisetteValidationCount;
@property (nonatomic) unsigned long long unactivatedTokenCount;
@property (nonatomic) unsigned long long activatedTokenCount;
@property (nonatomic) unsigned long long requestedTokenCount;
@property (nonatomic) unsigned long long proxyTokenFetchSuccessCount;
@property (nonatomic) unsigned long long proxyTokenFetchFailedCount;
@property (nonatomic) unsigned long long proxyTokenConsumedCount;
@property (nonatomic) unsigned long long proxyTokenExpiredCount;
@property (nonatomic) unsigned long long proxyAgentLowWaterMarkHitCount;
@property (nonatomic) unsigned long long proxyCacheLowWaterMarkHitCount;
@property (nonatomic) unsigned long long badTokenCount;
@property (nonatomic) unsigned long long missingTokenCount;
@property (nonatomic) unsigned long long networkProxiesRotated;
@property (nonatomic) unsigned long long networkFallbackProxiesRotated;
@property (nonatomic) unsigned long long proxiesRotated;
@property (nonatomic) unsigned long long configFetchedSuccessCount;
@property (nonatomic) unsigned long long configFetchedFailedCount;

- (id)serialize;
- (void)encodeWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)diagnostics;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
