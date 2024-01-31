@class GEOPDSearchLocationContext, NSString, GEOPDSearchKeyValuePairList, GEOPDSearchLanguageContext, PBDataReader;

@interface GEOPDSearchSpellerRequest : PBCodable <NSCopying> {
    PBDataReader *_reader;
    GEOPDSearchKeyValuePairList *_abConfigParams;
    GEOPDSearchLanguageContext *_languageContext;
    GEOPDSearchLocationContext *_locationContext;
    NSString *_query;
    GEOPDSearchKeyValuePairList *_tokenTags;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _requestFlags;
    unsigned int _maxSuggestions;
    int _queryType;
    BOOL _performCompletion;
    BOOL _useCache;
    struct { unsigned char has_requestFlags : 1; unsigned char has_maxSuggestions : 1; unsigned char has_queryType : 1; unsigned char has_performCompletion : 1; unsigned char has_useCache : 1; unsigned char read_abConfigParams : 1; unsigned char read_languageContext : 1; unsigned char read_locationContext : 1; unsigned char read_query : 1; unsigned char read_tokenTags : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasQuery;
@property (retain, nonatomic) NSString *query;
@property (readonly, nonatomic) BOOL hasLocationContext;
@property (retain, nonatomic) GEOPDSearchLocationContext *locationContext;
@property (readonly, nonatomic) BOOL hasLanguageContext;
@property (retain, nonatomic) GEOPDSearchLanguageContext *languageContext;
@property (nonatomic) BOOL hasPerformCompletion;
@property (nonatomic) BOOL performCompletion;
@property (nonatomic) BOOL hasMaxSuggestions;
@property (nonatomic) unsigned int maxSuggestions;
@property (readonly, nonatomic) BOOL hasAbConfigParams;
@property (retain, nonatomic) GEOPDSearchKeyValuePairList *abConfigParams;
@property (nonatomic) BOOL hasQueryType;
@property (nonatomic) int queryType;
@property (nonatomic) BOOL hasUseCache;
@property (nonatomic) BOOL useCache;
@property (nonatomic) BOOL hasRequestFlags;
@property (nonatomic) int requestFlags;
@property (readonly, nonatomic) BOOL hasTokenTags;
@property (retain, nonatomic) GEOPDSearchKeyValuePairList *tokenTags;

+ (BOOL)isValid:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)initWithData:(id)a0;
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
- (int)StringAsQueryType:(id)a0;
- (int)StringAsRequestFlags:(id)a0;
- (id)queryTypeAsString:(int)a0;
- (id)requestFlagsAsString:(int)a0;

@end
