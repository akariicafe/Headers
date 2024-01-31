@class NSString, NSMutableArray;

@interface C2MPGenericEvent : PBCodable <NSCopying> {
    struct { unsigned char timestampEnd : 1; unsigned char timestampStart : 1; unsigned char type : 1; } _has;
}

@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) BOOL hasTimestampStart;
@property (nonatomic) unsigned long long timestampStart;
@property (nonatomic) BOOL hasTimestampEnd;
@property (nonatomic) unsigned long long timestampEnd;
@property (retain, nonatomic) NSMutableArray *metrics;

+ (Class)metricType;

- (unsigned long long)hash;
- (id)typeAsString:(int)a0;
- (BOOL)readFrom:(id)a0;
- (id)metricAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (void)addMetric:(id)a0;
- (id)description;
- (unsigned long long)metricsCount;
- (void).cxx_destruct;
- (int)StringAsType:(id)a0;
- (void)clearMetrics;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
