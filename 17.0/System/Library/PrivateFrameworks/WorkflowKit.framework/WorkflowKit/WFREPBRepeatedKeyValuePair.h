@class NSString, NSMutableArray;

@interface WFREPBRepeatedKeyValuePair : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSMutableArray *values;

+ (Class)valueType;

- (unsigned long long)hash;
- (void)addValue:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)valuesCount;
- (id)description;
- (id)valueAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)clearValues;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
