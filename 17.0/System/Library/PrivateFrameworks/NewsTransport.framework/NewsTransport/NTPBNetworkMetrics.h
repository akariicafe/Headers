@class NSMutableArray;

@interface NTPBNetworkMetrics : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *successes;
@property (retain, nonatomic) NSMutableArray *failures;

+ (Class)failuresType;
+ (Class)successesType;

- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addFailures:(id)a0;
- (void)clearFailures;
- (id)failuresAtIndex:(unsigned long long)a0;
- (unsigned long long)failuresCount;
- (void)addSuccesses:(id)a0;
- (void)clearSuccesses;
- (id)successesAtIndex:(unsigned long long)a0;
- (unsigned long long)successesCount;

@end
