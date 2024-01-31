@class NSMutableArray;

@interface MPPCompoundPredicate : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *predicates;

- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearPredicates;
- (unsigned long long)predicatesCount;
- (void)addPredicates:(id)a0;
- (id)predicatesAtIndex:(unsigned long long)a0;

@end
