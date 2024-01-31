@interface AWDProactiveModelFittingQuantizedDenseVector : PBCodable <NSCopying> {
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _values;
    struct { unsigned char bucketSize : 1; unsigned char minValue : 1; } _has;
}

@property (readonly, nonatomic) unsigned long long valuesCount;
@property (readonly, nonatomic) unsigned int *values;
@property (nonatomic) BOOL hasMinValue;
@property (nonatomic) float minValue;
@property (nonatomic) BOOL hasBucketSize;
@property (nonatomic) float bucketSize;

+ (id)quantizedDenseVectorFromDenseVector:(id)a0 numberOfBuckets:(unsigned long long)a1;

- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void)clearValues;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addValues:(unsigned int)a0;
- (unsigned int)valuesAtIndex:(unsigned long long)a0;
- (void)setValues:(unsigned int *)a0 count:(unsigned long long)a1;
- (float)originalValueAtIndex:(unsigned long long)a0;

@end
