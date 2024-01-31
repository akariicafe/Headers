@class NSMutableArray;

@interface PPSPBGroupingDimensions : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *groupBys;

+ (Class)groupByType;

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
- (id)groupByAtIndex:(unsigned long long)a0;
- (void)addGroupBy:(id)a0;
- (void)clearGroupBys;
- (unsigned long long)groupBysCount;

@end
