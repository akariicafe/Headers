@class NSString, NSMutableArray, NSData;

@interface NSPPrivacyProxyProxyInfo : PBCodable <NSCopying> {
    struct { unsigned char supportsFallback : 1; unsigned char supportsResumption : 1; } _has;
}

@property (nonatomic) int proxyHop;
@property (retain, nonatomic) NSString *proxyURL;
@property (retain, nonatomic) NSMutableArray *proxyKeyInfos;
@property (retain, nonatomic) NSData *tokenKeyInfo;
@property (nonatomic) BOOL hasSupportsFallback;
@property (nonatomic) BOOL supportsFallback;
@property (readonly, nonatomic) BOOL hasVendor;
@property (retain, nonatomic) NSString *vendor;
@property (readonly, nonatomic) BOOL hasTcpProxyFqdn;
@property (retain, nonatomic) NSString *tcpProxyFqdn;
@property (readonly, nonatomic) BOOL hasPreferredPathConfigUri;
@property (retain, nonatomic) NSString *preferredPathConfigUri;
@property (readonly, nonatomic) BOOL hasProxyVersion;
@property (retain, nonatomic) NSString *proxyVersion;
@property (nonatomic) BOOL hasSupportsResumption;
@property (nonatomic) BOOL supportsResumption;
@property (retain, nonatomic) NSMutableArray *bootstrapAddresses;
@property (retain, nonatomic) NSMutableArray *allowedNextHops;

+ (Class)proxyKeyInfoType;
+ (Class)bootstrapAddressesType;
+ (Class)allowedNextHopsType;

- (unsigned long long)hash;
- (unsigned long long)allowedNextHopsCount;
- (void)addBootstrapAddresses:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)clearAllowedNextHops;
- (unsigned long long)proxyKeyInfosCount;
- (void)writeTo:(id)a0;
- (void)addProxyKeyInfo:(id)a0;
- (id)description;
- (unsigned long long)bootstrapAddressesCount;
- (id)proxyKeyInfoAtIndex:(unsigned long long)a0;
- (void)clearProxyKeyInfos;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)bootstrapAddressesAtIndex:(unsigned long long)a0;
- (id)allowedNextHopsAtIndex:(unsigned long long)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)clearBootstrapAddresses;
- (int)StringAsProxyHop:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addAllowedNextHops:(id)a0;
- (id)proxyHopAsString:(int)a0;

@end
