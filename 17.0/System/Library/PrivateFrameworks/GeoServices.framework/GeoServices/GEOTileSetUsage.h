@interface GEOTileSetUsage : PBCodable <NSCopying> {
    unsigned int _count;
    int _style;
    struct { unsigned char has_count : 1; unsigned char has_style : 1; } _flags;
}

@property (nonatomic) BOOL hasStyle;
@property (nonatomic) int style;
@property (nonatomic) BOOL hasCount;
@property (nonatomic) unsigned int count;

+ (BOOL)isValid:(id)a0;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (int)StringAsStyle:(id)a0;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)styleAsString:(int)a0;
- (id)initWithJSON:(id)a0;

@end
