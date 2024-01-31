@class NSMutableArray;

@interface PPSPBMetricHistory : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *metrics;

+ (Class)metricsType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (unsigned long long)metricsCount;
- (void).cxx_destruct;
- (void)clearMetrics;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addMetrics:(id)a0;
- (id)metricsAtIndex:(unsigned long long)a0;

@end
