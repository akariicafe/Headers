@interface AWDWiFiMetricsManagerChipMemory : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char heapFree : 1; unsigned char heapFreeMax : 1; unsigned char heapFreeMin : 1; unsigned char heapTotal : 1; unsigned char heapTotalMax : 1; unsigned char heapTotalMin : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasHeapTotal;
@property (nonatomic) unsigned int heapTotal;
@property (nonatomic) BOOL hasHeapTotalMin;
@property (nonatomic) unsigned int heapTotalMin;
@property (nonatomic) BOOL hasHeapTotalMax;
@property (nonatomic) unsigned int heapTotalMax;
@property (nonatomic) BOOL hasHeapFree;
@property (nonatomic) unsigned int heapFree;
@property (nonatomic) BOOL hasHeapFreeMin;
@property (nonatomic) unsigned int heapFreeMin;
@property (nonatomic) BOOL hasHeapFreeMax;
@property (nonatomic) unsigned int heapFreeMax;

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
