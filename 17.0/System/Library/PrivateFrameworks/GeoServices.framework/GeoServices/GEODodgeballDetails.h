@interface GEODodgeballDetails : PBCodable <NSCopying> {
    int _dodgeballAction;
    struct { unsigned char has_dodgeballAction : 1; } _flags;
}

@property (nonatomic) BOOL hasDodgeballAction;
@property (nonatomic) int dodgeballAction;

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
- (int)StringAsDodgeballAction:(id)a0;
- (id)dodgeballActionAsString:(int)a0;

@end
