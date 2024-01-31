@interface GEOCoarseLocationRing : PBCodable <NSCopying> {
    struct GEOCoarseLocationPoint { int x0; int x1; } *_points;
    unsigned long long _pointsCount;
    unsigned long long _pointsSpace;
}

@property (readonly, nonatomic) unsigned long long pointsCount;
@property (readonly, nonatomic) struct GEOCoarseLocationPoint { int x0; int x1; } *points;

+ (BOOL)isValid:(id)a0;

- (unsigned long long)hash;
- (void)clearPoints;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addPoints:(struct GEOCoarseLocationPoint { int x0; int x1; })a0;
- (id)initWithDictionary:(id)a0;
- (void)setPoints:(struct GEOCoarseLocationPoint { int x0; int x1; } *)a0 count:(unsigned long long)a1;
- (id)description;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (struct GEOCoarseLocationPoint { int x0; int x1; })pointsAtIndex:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithJSON:(id)a0;

@end
