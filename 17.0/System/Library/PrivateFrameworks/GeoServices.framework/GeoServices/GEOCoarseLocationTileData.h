@class NSMutableArray;

@interface GEOCoarseLocationTileData : PBCodable <NSCopying> {
    NSMutableArray *_territorys;
}

@property (retain, nonatomic) NSMutableArray *territorys;

+ (BOOL)isValid:(id)a0;
+ (Class)territoryType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)territorysCount;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (id)territoryAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)addTerritory:(id)a0;
- (void)clearTerritorys;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithJSON:(id)a0;

@end
