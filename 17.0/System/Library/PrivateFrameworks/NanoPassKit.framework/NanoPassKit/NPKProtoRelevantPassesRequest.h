@class NSMutableArray;

@interface NPKProtoRelevantPassesRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NSMutableArray *passRelevancyTuples;

+ (Class)passRelevancyTuplesType;

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
- (void)addPassRelevancyTuples:(id)a0;
- (void)clearPassRelevancyTuples;
- (id)passRelevancyTuplesAtIndex:(unsigned long long)a0;
- (unsigned long long)passRelevancyTuplesCount;

@end
