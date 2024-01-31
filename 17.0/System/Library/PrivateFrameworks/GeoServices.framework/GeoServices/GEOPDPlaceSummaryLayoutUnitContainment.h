@interface GEOPDPlaceSummaryLayoutUnitContainment : PBCodable <NSCopying> {
    int _containmentType;
    struct { unsigned char has_containmentType : 1; } _flags;
}

@property (nonatomic) BOOL hasContainmentType;
@property (nonatomic) int containmentType;

+ (BOOL)isValid:(id)a0;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithJSON:(id)a0;
- (int)StringAsContainmentType:(id)a0;
- (id)containmentTypeAsString:(int)a0;

@end
