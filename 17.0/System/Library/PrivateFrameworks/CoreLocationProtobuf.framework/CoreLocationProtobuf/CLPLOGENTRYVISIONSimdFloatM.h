@interface CLPLOGENTRYVISIONSimdFloatM : PBCodable <NSCopying> {
    struct { float *list; unsigned long long count; unsigned long long size; } _values;
}

@property (readonly, nonatomic) unsigned long long valuesCount;
@property (readonly, nonatomic) float *values;

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
- (void)addValues:(float)a0;
- (float)valuesAtIndex:(unsigned long long)a0;
- (void)setValues:(float *)a0 count:(unsigned long long)a1;

@end
