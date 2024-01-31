@class NSMutableArray;

@interface GEOPDLabelLocalizations : PBCodable <NSCopying> {
    NSMutableArray *_localizedStrings;
}

@property (retain, nonatomic) NSMutableArray *localizedStrings;

+ (BOOL)isValid:(id)a0;
+ (Class)localizedStringType;

- (unsigned long long)hash;
- (void)clearLocalizedStrings;
- (BOOL)readFrom:(id)a0;
- (id)bestLocalizedName;
- (void)writeTo:(id)a0;
- (unsigned long long)localizedStringsCount;
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
- (void)addLocalizedString:(id)a0;
- (id)localizedStringAtIndex:(unsigned long long)a0;

@end
