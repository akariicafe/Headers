@class NSMutableArray;

@interface AWDPowerBBAppRRCMetrics : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char numRRCConnections : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) NSMutableArray *appConnStats;
@property (nonatomic) BOOL hasNumRRCConnections;
@property (nonatomic) unsigned int numRRCConnections;

+ (Class)appConnStatsType;

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
- (void)addAppConnStats:(id)a0;
- (id)appConnStatsAtIndex:(unsigned long long)a0;
- (unsigned long long)appConnStatsCount;
- (void)clearAppConnStats;

@end
