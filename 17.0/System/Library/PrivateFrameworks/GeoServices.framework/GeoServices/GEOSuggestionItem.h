@class NSString;

@interface GEOSuggestionItem : PBCodable <NSCopying> {
    NSString *_suggestionString;
    int _tappingCount;
    BOOL _eventuallyVisible;
    BOOL _initiallyVisible;
    struct { unsigned char has_tappingCount : 1; unsigned char has_eventuallyVisible : 1; unsigned char has_initiallyVisible : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasSuggestionString;
@property (retain, nonatomic) NSString *suggestionString;
@property (nonatomic) BOOL hasInitiallyVisible;
@property (nonatomic) BOOL initiallyVisible;
@property (nonatomic) BOOL hasEventuallyVisible;
@property (nonatomic) BOOL eventuallyVisible;
@property (nonatomic) BOOL hasTappingCount;
@property (nonatomic) int tappingCount;

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
