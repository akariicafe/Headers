@class NSMutableArray;

@interface PPSPBMetricStream : PBCodable <NSCopying> {
    struct { unsigned char protoVersion : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *metricHistorys;
@property (nonatomic) BOOL hasProtoVersion;
@property (nonatomic) double protoVersion;

+ (Class)metricHistoryType;

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
- (void)addMetricHistory:(id)a0;
- (void)clearMetricHistorys;
- (id)metricHistoryAtIndex:(unsigned long long)a0;
- (unsigned long long)metricHistorysCount;

@end
