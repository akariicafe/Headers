@interface GEOCompanionRouteContext : PBCodable <NSCopying> {
    int _origin;
    unsigned int _timestamp;
    struct { unsigned char has_origin : 1; unsigned char has_timestamp : 1; } _flags;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned int timestamp;
@property (nonatomic) BOOL hasOrigin;
@property (nonatomic) int origin;

+ (BOOL)isValid:(id)a0;
+ (id)context;
+ (int)defaultOrigin;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (long long)compare:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (id)simpleDescription;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithJSON:(id)a0;
- (id)originAsString:(int)a0;
- (int)StringAsOrigin:(id)a0;
- (BOOL)isForeignOrigin;
- (BOOL)isStaleComparedToContext:(id)a0;

@end
