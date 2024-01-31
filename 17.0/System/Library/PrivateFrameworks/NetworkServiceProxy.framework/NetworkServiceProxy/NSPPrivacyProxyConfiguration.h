@class NSPPrivacyProxyResolverInfo, NSString, NSPPrivacyProxyAuthenticationInfo, NSMutableArray;

@interface NSPPrivacyProxyConfiguration : PBCodable <NSCopying> {
    struct { unsigned char disableUntil : 1; unsigned char preferredPathEnabledPercentage : 1; unsigned char enabled : 1; } _has;
}

@property (nonatomic) unsigned int version;
@property (nonatomic) BOOL hasEnabled;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL hasDisableUntil;
@property (nonatomic) unsigned long long disableUntil;
@property (retain, nonatomic) NSPPrivacyProxyAuthenticationInfo *authInfo;
@property (retain, nonatomic) NSMutableArray *policyTierMaps;
@property (retain, nonatomic) NSMutableArray *proxies;
@property (retain, nonatomic) NSMutableArray *pathWeights;
@property (retain, nonatomic) NSMutableArray *resolvers;
@property (nonatomic) unsigned int maxTokenNum;
@property (retain, nonatomic) NSMutableArray *fallbackPathWeights;
@property (readonly, nonatomic) BOOL hasRegionId;
@property (retain, nonatomic) NSString *regionId;
@property (readonly, nonatomic) BOOL hasBootstrapResolver;
@property (retain, nonatomic) NSPPrivacyProxyResolverInfo *bootstrapResolver;
@property (readonly, nonatomic) BOOL hasDnsProbe;
@property (retain, nonatomic) NSString *dnsProbe;
@property (retain, nonatomic) NSMutableArray *obliviousConfigs;
@property (nonatomic) BOOL hasPreferredPathEnabledPercentage;
@property (nonatomic) unsigned int preferredPathEnabledPercentage;
@property (retain, nonatomic) NSMutableArray *proxiedContentMaps;

+ (Class)proxiesType;
+ (Class)resolversType;
+ (Class)policyTierMapType;
+ (Class)obliviousConfigsType;
+ (Class)fallbackPathWeightsType;
+ (Class)proxiedContentMapsType;
+ (Class)pathWeightsType;

- (id)policyTierMapAtIndex:(unsigned long long)a0;
- (void)clearFallbackPathWeights;
- (unsigned long long)hash;
- (unsigned long long)pathWeightsCount;
- (id)proxiedContentMapsAtIndex:(unsigned long long)a0;
- (BOOL)readFrom:(id)a0;
- (void)addObliviousConfigs:(id)a0;
- (void)addPathWeights:(id)a0;
- (void)clearPolicyTierMaps;
- (id)pathWeightsAtIndex:(unsigned long long)a0;
- (void)addProxiedContentMaps:(id)a0;
- (unsigned long long)proxiedContentMapsCount;
- (void)writeTo:(id)a0;
- (id)obliviousConfigsAtIndex:(unsigned long long)a0;
- (id)proxiesAtIndex:(unsigned long long)a0;
- (unsigned long long)obliviousConfigsCount;
- (unsigned long long)fallbackPathWeightsCount;
- (void)clearPathWeights;
- (void)addProxies:(id)a0;
- (id)description;
- (void)addResolvers:(id)a0;
- (id)fallbackPathWeightsAtIndex:(unsigned long long)a0;
- (unsigned long long)policyTierMapsCount;
- (void)addPolicyTierMap:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)proxiesCount;
- (void)clearProxiedContentMaps;
- (id)dictionaryRepresentation;
- (void)clearProxies;
- (void)clearResolvers;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)resolversCount;
- (void)addFallbackPathWeights:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)resolversAtIndex:(unsigned long long)a0;
- (void)clearObliviousConfigs;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
