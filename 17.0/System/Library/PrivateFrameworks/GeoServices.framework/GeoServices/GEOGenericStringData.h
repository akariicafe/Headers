@class NSString, PBUnknownFields;

@interface GEOGenericStringData : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSString *_tokenSubstitute;
    int _privacyFilterType;
    int _stringSubstituteType;
    struct { unsigned char has_privacyFilterType : 1; unsigned char has_stringSubstituteType : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasTokenSubstitute;
@property (retain, nonatomic) NSString *tokenSubstitute;
@property (nonatomic) BOOL hasStringSubstituteType;
@property (nonatomic) int stringSubstituteType;
@property (nonatomic) BOOL hasPrivacyFilterType;
@property (nonatomic) int privacyFilterType;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void)clearUnknownFields:(BOOL)a0;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithJSON:(id)a0;
- (int)StringAsPrivacyFilterType:(id)a0;
- (int)StringAsStringSubstituteType:(id)a0;
- (id)privacyFilterTypeAsString:(int)a0;
- (id)stringSubstituteTypeAsString:(int)a0;

@end
