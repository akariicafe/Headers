@class NSMutableArray;

@interface AWDWiFiMetricsManagerLinkQualityStats : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) NSMutableArray *statRecords;

+ (Class)statRecordType;

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
- (void)addStatRecord:(id)a0;
- (void)clearStatRecords;
- (id)statRecordAtIndex:(unsigned long long)a0;
- (unsigned long long)statRecordsCount;

@end
