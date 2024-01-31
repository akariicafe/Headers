@class NSMutableArray;

@interface HKCodableQuantitySeries : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *values;

+ (Class)valuesType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)valuesCount;
- (id)description;
- (void).cxx_destruct;
- (void)clearValues;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addValues:(id)a0;
- (id)valuesAtIndex:(unsigned long long)a0;

@end
