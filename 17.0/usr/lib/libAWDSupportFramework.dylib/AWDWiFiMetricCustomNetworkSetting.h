@interface AWDWiFiMetricCustomNetworkSetting : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char autoProxySetCount : 1; unsigned char bootpSetCount : 1; unsigned char customNetworkCount : 1; unsigned char dhcpSetCount : 1; unsigned char manualProxySetCount : 1; unsigned char staticSetCount : 1; unsigned char totalNetworkCount : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasCustomNetworkCount;
@property (nonatomic) unsigned int customNetworkCount;
@property (nonatomic) BOOL hasTotalNetworkCount;
@property (nonatomic) unsigned int totalNetworkCount;
@property (nonatomic) BOOL hasDhcpSetCount;
@property (nonatomic) unsigned int dhcpSetCount;
@property (nonatomic) BOOL hasBootpSetCount;
@property (nonatomic) unsigned int bootpSetCount;
@property (nonatomic) BOOL hasStaticSetCount;
@property (nonatomic) unsigned int staticSetCount;
@property (nonatomic) BOOL hasManualProxySetCount;
@property (nonatomic) unsigned int manualProxySetCount;
@property (nonatomic) BOOL hasAutoProxySetCount;
@property (nonatomic) unsigned int autoProxySetCount;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
