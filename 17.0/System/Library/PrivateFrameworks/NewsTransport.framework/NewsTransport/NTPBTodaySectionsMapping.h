@class NSMutableArray;

@interface NTPBTodaySectionsMapping : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *identifiers;

+ (Class)identifiersType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearIdentifiers;
- (unsigned long long)identifiersCount;
- (void)addIdentifiers:(id)a0;
- (id)identifiersAtIndex:(unsigned long long)a0;

@end
