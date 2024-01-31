@class NSMutableArray;

@interface HDAWDHealthKitCoachingFeatureGroup : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *pasts;
@property (retain, nonatomic) NSMutableArray *futures;

+ (Class)futureType;
+ (Class)pastType;

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
- (void)addFuture:(id)a0;
- (void)addPast:(id)a0;
- (void)clearFutures;
- (void)clearPasts;
- (id)futureAtIndex:(unsigned long long)a0;
- (unsigned long long)futuresCount;
- (id)pastAtIndex:(unsigned long long)a0;
- (unsigned long long)pastsCount;

@end
