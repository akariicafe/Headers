@class AWDWiFiMetricsManagerBTCoexModeChange, AWDWiFiMetricsManagerBTCoexStats, AWDWiFiMetricsManagerChipCounters, NSMutableArray;

@interface AWDWiFiMetricsManagerOneStatsAssociationInfo : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasChipCounters;
@property (retain, nonatomic) AWDWiFiMetricsManagerChipCounters *chipCounters;
@property (readonly, nonatomic) BOOL hasBtCoexStats;
@property (retain, nonatomic) AWDWiFiMetricsManagerBTCoexStats *btCoexStats;
@property (readonly, nonatomic) BOOL hasBtCoexModeChange;
@property (retain, nonatomic) AWDWiFiMetricsManagerBTCoexModeChange *btCoexModeChange;
@property (retain, nonatomic) NSMutableArray *chipCountersPerSlices;

+ (Class)chipCountersPerSliceType;

- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addChipCountersPerSlice:(id)a0;
- (id)chipCountersPerSliceAtIndex:(unsigned long long)a0;
- (unsigned long long)chipCountersPerSlicesCount;
- (void)clearChipCountersPerSlices;

@end
