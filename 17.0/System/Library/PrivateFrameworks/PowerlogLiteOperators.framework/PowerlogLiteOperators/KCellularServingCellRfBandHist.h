@class NSMutableArray;

@interface KCellularServingCellRfBandHist : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char durationMs : 1; unsigned char subsId : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasDurationMs;
@property (nonatomic) unsigned int durationMs;
@property (retain, nonatomic) NSMutableArray *pcellBandDurations;
@property (nonatomic) BOOL hasSubsId;
@property (nonatomic) unsigned int subsId;

+ (Class)pcellBandDurationType;

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
- (void)addPcellBandDuration:(id)a0;
- (void)clearPcellBandDurations;
- (id)pcellBandDurationAtIndex:(unsigned long long)a0;
- (unsigned long long)pcellBandDurationsCount;

@end
