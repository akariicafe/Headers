@class NSString, NSMutableArray, PBDataReader;

@interface GEOPDSearchQuerySynonymMetadata : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_countryCode;
    NSMutableArray *_featureMaps;
    NSMutableArray *_geoHashes;
    unsigned long long _identifier;
    NSString *_key;
    NSString *_language;
    NSString *_originalQueryDisplayString;
    NSMutableArray *_refinementQueries;
    NSString *_synonymQueryDisplayString;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    float _confidence;
    int _originalProvider;
    int _rewriteProvider;
    BOOL _hardRewrite;
    BOOL _isOrgQueryPrefixOfRefinement;
    BOOL _isWeakLexicalMatch;
    BOOL _useGeoHashes;
    struct { unsigned char has_identifier : 1; unsigned char has_confidence : 1; unsigned char has_originalProvider : 1; unsigned char has_rewriteProvider : 1; unsigned char has_hardRewrite : 1; unsigned char has_isOrgQueryPrefixOfRefinement : 1; unsigned char has_isWeakLexicalMatch : 1; unsigned char has_useGeoHashes : 1; unsigned char read_countryCode : 1; unsigned char read_featureMaps : 1; unsigned char read_geoHashes : 1; unsigned char read_key : 1; unsigned char read_language : 1; unsigned char read_originalQueryDisplayString : 1; unsigned char read_refinementQueries : 1; unsigned char read_synonymQueryDisplayString : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (id)init;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithData:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
