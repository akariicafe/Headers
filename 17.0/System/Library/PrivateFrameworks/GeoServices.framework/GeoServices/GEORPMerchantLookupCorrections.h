@interface GEORPMerchantLookupCorrections : PBCodable <NSCopying> {
    BOOL _isCategoryIncorrect;
    BOOL _isMerchantIncorrect;
    BOOL _isOtherIssue;
    struct { unsigned char has_isCategoryIncorrect : 1; unsigned char has_isMerchantIncorrect : 1; unsigned char has_isOtherIssue : 1; } _flags;
}

@property (nonatomic) BOOL hasIsCategoryIncorrect;
@property (nonatomic) BOOL isCategoryIncorrect;
@property (nonatomic) BOOL hasIsMerchantIncorrect;
@property (nonatomic) BOOL isMerchantIncorrect;
@property (nonatomic) BOOL hasIsOtherIssue;
@property (nonatomic) BOOL isOtherIssue;

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
