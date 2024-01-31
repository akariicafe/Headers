@class GEOLocalizedString;

@interface GEORPRatingValue : PBCodable <NSCopying> {
    GEOLocalizedString *_categoryName;
    int _score;
    struct { unsigned char has_score : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasCategoryName;
@property (retain, nonatomic) GEOLocalizedString *categoryName;
@property (nonatomic) BOOL hasScore;
@property (nonatomic) int score;

+ (BOOL)isValid:(id)a0;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithJSON:(id)a0;

@end
