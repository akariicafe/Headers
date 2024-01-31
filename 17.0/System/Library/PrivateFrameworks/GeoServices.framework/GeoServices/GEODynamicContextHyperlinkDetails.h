@class NSString;

@interface GEODynamicContextHyperlinkDetails : PBCodable <NSCopying> {
    NSString *_displayedString;
    int _layoutType;
    struct { unsigned char has_layoutType : 1; } _flags;
}

@property (nonatomic) BOOL hasLayoutType;
@property (nonatomic) int layoutType;
@property (readonly, nonatomic) BOOL hasDisplayedString;
@property (retain, nonatomic) NSString *displayedString;

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
- (int)StringAsLayoutType:(id)a0;
- (id)layoutTypeAsString:(int)a0;

@end
