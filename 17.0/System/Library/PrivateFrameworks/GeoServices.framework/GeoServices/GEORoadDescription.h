@class GEOFormattedString, PBUnknownFields;

@interface GEORoadDescription : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOFormattedString *_formattedDescription;
    int _navigationFriendliness;
    struct { unsigned char has_navigationFriendliness : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasFormattedDescription;
@property (retain, nonatomic) GEOFormattedString *formattedDescription;
@property (nonatomic) BOOL hasNavigationFriendliness;
@property (nonatomic) int navigationFriendliness;
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
- (int)StringAsNavigationFriendliness:(id)a0;
- (id)navigationFriendlinessAsString:(int)a0;

@end
