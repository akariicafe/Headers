@class NSMutableArray;

@interface HDCodableUserDomainConceptCollection : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *concepts;

+ (Class)conceptsType;

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
- (void)addConcepts:(id)a0;
- (void)clearConcepts;
- (id)conceptsAtIndex:(unsigned long long)a0;
- (unsigned long long)conceptsCount;

@end
