@class GEOPDSearchTokenSet, NSMutableArray, PBDataReader;

@interface GEOPDSearchQueryFuzzyMatchV2Metadata : PBCodable <NSCopying> {
    PBDataReader *_reader;
    struct { double *list; unsigned long long count; unsigned long long size; } _fuzzyV2Scores;
    struct { int *list; unsigned long long count; unsigned long long size; } _rewriteTypes;
    NSMutableArray *_rewrittenQueries;
    GEOPDSearchTokenSet *_rewrittenQueryTokens;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    BOOL _pruneFuzzyV2Results;
    BOOL _useFuzzyV1;
    struct { unsigned char has_pruneFuzzyV2Results : 1; unsigned char has_useFuzzyV1 : 1; unsigned char read_fuzzyV2Scores : 1; unsigned char read_rewriteTypes : 1; unsigned char read_rewrittenQueries : 1; unsigned char read_rewrittenQueryTokens : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
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
