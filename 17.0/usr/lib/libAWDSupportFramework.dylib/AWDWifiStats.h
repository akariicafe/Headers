@interface AWDWifiStats : PBCodable <NSCopying> {
    struct { unsigned char rxbytes : 1; unsigned char txbytes : 1; unsigned char averageCCA : 1; unsigned char avgJitterRx : 1; unsigned char avgLatencyTx : 1; unsigned char avgRetx : 1; unsigned char avgRssi : 1; unsigned char avgTimeBackoff : 1; unsigned char dataTransferRateMpbs : 1; unsigned char effectiveDataTransferRateMpbs : 1; unsigned char effectiveLinkRateMpbs : 1; unsigned char linkRateMbps : 1; unsigned char phyType : 1; unsigned char powerSaveDur : 1; } _has;
}

@property (nonatomic) BOOL hasPhyType;
@property (nonatomic) unsigned int phyType;
@property (nonatomic) BOOL hasTxbytes;
@property (nonatomic) unsigned long long txbytes;
@property (nonatomic) BOOL hasRxbytes;
@property (nonatomic) unsigned long long rxbytes;
@property (nonatomic) BOOL hasAvgLatencyTx;
@property (nonatomic) unsigned int avgLatencyTx;
@property (nonatomic) BOOL hasAvgJitterRx;
@property (nonatomic) unsigned int avgJitterRx;
@property (nonatomic) BOOL hasAvgRssi;
@property (nonatomic) int avgRssi;
@property (nonatomic) BOOL hasAvgRetx;
@property (nonatomic) unsigned int avgRetx;
@property (nonatomic) BOOL hasAvgTimeBackoff;
@property (nonatomic) unsigned int avgTimeBackoff;
@property (nonatomic) BOOL hasPowerSaveDur;
@property (nonatomic) unsigned int powerSaveDur;
@property (nonatomic) BOOL hasLinkRateMbps;
@property (nonatomic) unsigned int linkRateMbps;
@property (nonatomic) BOOL hasEffectiveLinkRateMpbs;
@property (nonatomic) unsigned int effectiveLinkRateMpbs;
@property (nonatomic) BOOL hasDataTransferRateMpbs;
@property (nonatomic) unsigned int dataTransferRateMpbs;
@property (nonatomic) BOOL hasEffectiveDataTransferRateMpbs;
@property (nonatomic) unsigned int effectiveDataTransferRateMpbs;
@property (nonatomic) BOOL hasAverageCCA;
@property (nonatomic) unsigned int averageCCA;

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
