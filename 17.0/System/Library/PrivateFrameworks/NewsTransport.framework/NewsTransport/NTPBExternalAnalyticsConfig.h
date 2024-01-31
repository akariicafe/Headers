@class NSString, NSMutableArray;

@interface NTPBExternalAnalyticsConfig : PBCodable <NSCopying> {
    struct { unsigned char usesProxyProfile : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasAnalyticsBaseUrl;
@property (retain, nonatomic) NSString *analyticsBaseUrl;
@property (readonly, nonatomic) BOOL hasAnalyticsId;
@property (retain, nonatomic) NSString *analyticsId;
@property (readonly, nonatomic) BOOL hasEventQueryParameterName;
@property (retain, nonatomic) NSString *eventQueryParameterName;
@property (retain, nonatomic) NSMutableArray *queryParameterConfigs;
@property (nonatomic) BOOL hasUsesProxyProfile;
@property (nonatomic) BOOL usesProxyProfile;
@property (retain, nonatomic) NSMutableArray *proxyHostNames;
@property (retain, nonatomic) NSMutableArray *vpnProfileNames;

+ (Class)proxyHostNamesType;
+ (Class)queryParameterConfigType;
+ (Class)vpnProfileNamesType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)addVpnProfileNames:(id)a0;
- (unsigned long long)queryParameterConfigsCount;
- (id)proxyHostNamesAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (void)addProxyHostNames:(id)a0;
- (void)addQueryParameterConfig:(id)a0;
- (id)queryParameterConfigAtIndex:(unsigned long long)a0;
- (id)description;
- (void)clearProxyHostNames;
- (void).cxx_destruct;
- (unsigned long long)vpnProfileNamesCount;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)clearQueryParameterConfigs;
- (id)vpnProfileNamesAtIndex:(unsigned long long)a0;
- (unsigned long long)proxyHostNamesCount;
- (void)mergeFrom:(id)a0;
- (void)clearVpnProfileNames;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
