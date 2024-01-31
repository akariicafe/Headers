@class GEOPDSearchSpellSuggestion, NSMutableArray, PBDataReader;

@interface GEOPDSearchQuerySpellCorrectionMetadata : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_allSpellSuggestions;
    NSMutableArray *_allTokenCandidates;
    unsigned long long _decileId;
    double _misspellScore;
    GEOPDSearchSpellSuggestion *_spellSuggestion;
    NSMutableArray *_tokenCandidates;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _modelNumberMajor;
    unsigned int _modelNumberMinor;
    int _resultStatus;
    int _spellerRankerModelType;
    BOOL _isFromDLCacheModel;
    BOOL _isFromDLRuntimeModel;
    BOOL _isConfidentSpellCorrection;
    BOOL _isFromPoiSearchSpeller;
    BOOL _isSpellCorrectionSameAsOrgQuery;
    struct { unsigned char has_decileId : 1; unsigned char has_misspellScore : 1; unsigned char has_modelNumberMajor : 1; unsigned char has_modelNumberMinor : 1; unsigned char has_resultStatus : 1; unsigned char has_spellerRankerModelType : 1; unsigned char has_isFromDLCacheModel : 1; unsigned char has_isFromDLRuntimeModel : 1; unsigned char has_isConfidentSpellCorrection : 1; unsigned char has_isFromPoiSearchSpeller : 1; unsigned char has_isSpellCorrectionSameAsOrgQuery : 1; unsigned char read_allSpellSuggestions : 1; unsigned char read_allTokenCandidates : 1; unsigned char read_spellSuggestion : 1; unsigned char read_tokenCandidates : 1; unsigned char wrote_anyField : 1; } _flags;
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
