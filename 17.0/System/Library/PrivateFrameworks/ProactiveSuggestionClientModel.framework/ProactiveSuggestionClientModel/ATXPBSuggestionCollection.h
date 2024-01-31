@class NSString, NSMutableArray;

@interface ATXPBSuggestionCollection : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasContextTitle;
@property (retain, nonatomic) NSString *contextTitle;
@property (retain, nonatomic) NSMutableArray *suggestions;
@property (readonly, nonatomic) BOOL hasSectionIdentifier;
@property (retain, nonatomic) NSString *sectionIdentifier;

+ (Class)suggestionsType;

- (unsigned long long)hash;
- (void)clearSuggestions;
- (BOOL)readFrom:(id)a0;
- (void)addSuggestions:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)suggestionsAtIndex:(unsigned long long)a0;
- (unsigned long long)suggestionsCount;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
