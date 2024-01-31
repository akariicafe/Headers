@interface GEOSignGuidanceFeedback : PBCodable <NSCopying> {
    int _signDetailIndex;
    int _signTitleIndex;
    struct { unsigned char has_signDetailIndex : 1; unsigned char has_signTitleIndex : 1; } _flags;
}

@property (nonatomic) BOOL hasSignTitleIndex;
@property (nonatomic) int signTitleIndex;
@property (nonatomic) BOOL hasSignDetailIndex;
@property (nonatomic) int signDetailIndex;

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

@end
