@interface AWDSymptomsCellularSDMPollingStatistics : PBCodable <NSCopying> {
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _pollingIntervalCounts;
    struct { unsigned char durationSeconds : 1; unsigned char timestamp : 1; unsigned char pollIntervalVersion : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasDurationSeconds;
@property (nonatomic) unsigned long long durationSeconds;
@property (nonatomic) BOOL hasPollIntervalVersion;
@property (nonatomic) unsigned int pollIntervalVersion;
@property (readonly, nonatomic) unsigned long long pollingIntervalCountsCount;
@property (readonly, nonatomic) unsigned int *pollingIntervalCounts;

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
- (void)setPollingIntervalCounts:(unsigned int *)a0 count:(unsigned long long)a1;
- (void)addPollingIntervalCount:(unsigned int)a0;
- (void)clearPollingIntervalCounts;
- (unsigned int)pollingIntervalCountAtIndex:(unsigned long long)a0;

@end
