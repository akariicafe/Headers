@class NSMutableArray;

@interface HKCodableMetadataDictionary : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *keyValuePairs;

+ (Class)keyValuePairsType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)clearKeyValuePairs;
- (void)writeTo:(id)a0;
- (id)keyValuePairsAtIndex:(unsigned long long)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (unsigned long long)keyValuePairsCount;
- (void)copyTo:(id)a0;
- (void)addKeyValuePairs:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
