@class NSMutableArray;

@interface KCellularLteComponentCarrierInfo : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char pccBandwidth : 1; unsigned char pccEarfcn : 1; unsigned char pccRfBand : 1; unsigned char scc0Bandwidth : 1; unsigned char scc0Earfcn : 1; unsigned char scc0RfBand : 1; unsigned char scc1Bandwidth : 1; unsigned char scc1Earfcn : 1; unsigned char scc1RfBand : 1; unsigned char subsId : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasPccEarfcn;
@property (nonatomic) unsigned int pccEarfcn;
@property (nonatomic) BOOL hasScc0Earfcn;
@property (nonatomic) unsigned int scc0Earfcn;
@property (nonatomic) BOOL hasScc1Earfcn;
@property (nonatomic) unsigned int scc1Earfcn;
@property (nonatomic) BOOL hasPccBandwidth;
@property (nonatomic) int pccBandwidth;
@property (nonatomic) BOOL hasScc0Bandwidth;
@property (nonatomic) int scc0Bandwidth;
@property (nonatomic) BOOL hasScc1Bandwidth;
@property (nonatomic) int scc1Bandwidth;
@property (nonatomic) BOOL hasPccRfBand;
@property (nonatomic) unsigned int pccRfBand;
@property (nonatomic) BOOL hasScc0RfBand;
@property (nonatomic) unsigned int scc0RfBand;
@property (nonatomic) BOOL hasScc1RfBand;
@property (nonatomic) unsigned int scc1RfBand;
@property (retain, nonatomic) NSMutableArray *carrierInfos;
@property (nonatomic) BOOL hasSubsId;
@property (nonatomic) unsigned int subsId;

+ (Class)carrierInfoType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsPccBandwidth:(id)a0;
- (int)StringAsScc1Bandwidth:(id)a0;
- (int)StringAsScc0Bandwidth:(id)a0;
- (void)addCarrierInfo:(id)a0;
- (id)carrierInfoAtIndex:(unsigned long long)a0;
- (unsigned long long)carrierInfosCount;
- (void)clearCarrierInfos;
- (id)pccBandwidthAsString:(int)a0;
- (id)scc0BandwidthAsString:(int)a0;
- (id)scc1BandwidthAsString:(int)a0;

@end
