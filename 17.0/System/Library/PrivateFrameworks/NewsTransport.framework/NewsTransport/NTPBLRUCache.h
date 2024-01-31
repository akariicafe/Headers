@class NSMutableArray;

@interface NTPBLRUCache : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *entries;

+ (Class)entriesType;

- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)addEntries:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearEntries;
- (id)entriesAtIndex:(unsigned long long)a0;
- (unsigned long long)entriesCount;

@end
