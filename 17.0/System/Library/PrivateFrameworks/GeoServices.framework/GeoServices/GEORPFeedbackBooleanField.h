@interface GEORPFeedbackBooleanField : PBCodable <NSCopying> {
    BOOL _edited;
    BOOL _original;
    struct { unsigned char has_edited : 1; unsigned char has_original : 1; } _flags;
}

@property (nonatomic) BOOL hasOriginal;
@property (nonatomic) BOOL original;
@property (nonatomic) BOOL hasEdited;
@property (nonatomic) BOOL edited;

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
