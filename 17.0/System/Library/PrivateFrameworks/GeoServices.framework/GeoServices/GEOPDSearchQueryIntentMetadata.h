@class GEOPDSearchQueryTokenizerMetadata, GEOPDSearchQueryFuzzyMatchV2Metadata, GEOPDSearchQueryInterpretationMetadata, GEOPDSearchACHintMetadata, NSMutableArray, NSString, GEOPDSearchTokenSynonymMetadata, GEOPDSearchQueryCompletionMetadata, GEOPDSearchQueryTransliteratorMetadata, GEOPDSearchQueryNeuralRewriteMetadata, GEOPDSearchQueryGeoTagMetadata, GEOPDSearchQueryTagMetadata, GEOPDSearchQueryGeoMetadata, GEOPDSearchQueryTokenImportanceMetadata, GEOPDSearchQueryNormalizerMetadata, PBDataReader, GEOPDSearchQueryDirectionsIntentMetadata, GEOPDSearchQuerySynonymMetadata, GEOPDSearchQueryDymMetadata, GEOPDSearchQueryGeoNormalizerMetadata, GEOPDSearchQueryPoiMetadata, GEOPDSearchQuerySpellCorrectionMetadata, GEOPDSearchRichBrandMetadata;

@interface GEOPDSearchQueryIntentMetadata : PBCodable <NSCopying> {
    PBDataReader *_reader;
    struct { int *list; unsigned long long count; unsigned long long size; } _intentSources;
    struct { int *list; unsigned long long count; unsigned long long size; } _rewrittenQueryTypes;
    GEOPDSearchACHintMetadata *_acHintMetadata;
    GEOPDSearchQueryTokenImportanceMetadata *_geoTokenImportanceMetadata;
    NSString *_originalQuery;
    NSMutableArray *_queryClassificationMetadatas;
    GEOPDSearchQueryCompletionMetadata *_queryCompletionMetadata;
    GEOPDSearchQueryDirectionsIntentMetadata *_queryDirectionsIntentMetadata;
    GEOPDSearchQueryDymMetadata *_queryDymMetadata;
    NSMutableArray *_queryEmbeddingMetadatas;
    GEOPDSearchQueryFuzzyMatchV2Metadata *_queryFuzzyMatchV2Metadata;
    GEOPDSearchQueryGeoMetadata *_queryGeoMetadata;
    GEOPDSearchQueryGeoNormalizerMetadata *_queryGeoNormalizerMetadata;
    GEOPDSearchQueryGeoTagMetadata *_queryGeoTagMetadata;
    double _queryIntentWeight;
    GEOPDSearchQueryInterpretationMetadata *_queryInterpretationMetadata;
    GEOPDSearchQueryNeuralRewriteMetadata *_queryNeuralRewriteMetadata;
    GEOPDSearchQueryNormalizerMetadata *_queryNormalizerMetadata;
    GEOPDSearchQueryPoiMetadata *_queryPoiMetadata;
    GEOPDSearchQuerySpellCorrectionMetadata *_querySpellCorrectionMetadata;
    GEOPDSearchQuerySynonymMetadata *_querySynonymMetadata;
    GEOPDSearchQueryTagMetadata *_queryTagMetadata;
    GEOPDSearchQueryTokenImportanceMetadata *_queryTokenImportanceMetadata;
    GEOPDSearchQueryTokenizerMetadata *_queryTokenizerMetadata;
    GEOPDSearchQueryTransliteratorMetadata *_queryTransliterMetadata;
    GEOPDSearchQueryTokenizerMetadata *_rawQueryTokenizerMetadata;
    NSString *_rewrittenQuery;
    GEOPDSearchRichBrandMetadata *_richBrandMetadata;
    GEOPDSearchTokenSynonymMetadata *_tokenSynonymMetadata;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _rewrittenQueryIndex;
    BOOL _isFromDefinitiveQu;
    BOOL _isFromKnowledgeGraph;
    BOOL _isFromSearchQu;
    struct { unsigned char has_queryIntentWeight : 1; unsigned char has_rewrittenQueryIndex : 1; unsigned char has_isFromDefinitiveQu : 1; unsigned char has_isFromKnowledgeGraph : 1; unsigned char has_isFromSearchQu : 1; unsigned char read_intentSources : 1; unsigned char read_rewrittenQueryTypes : 1; unsigned char read_acHintMetadata : 1; unsigned char read_geoTokenImportanceMetadata : 1; unsigned char read_originalQuery : 1; unsigned char read_queryClassificationMetadatas : 1; unsigned char read_queryCompletionMetadata : 1; unsigned char read_queryDirectionsIntentMetadata : 1; unsigned char read_queryDymMetadata : 1; unsigned char read_queryEmbeddingMetadatas : 1; unsigned char read_queryFuzzyMatchV2Metadata : 1; unsigned char read_queryGeoMetadata : 1; unsigned char read_queryGeoNormalizerMetadata : 1; unsigned char read_queryGeoTagMetadata : 1; unsigned char read_queryInterpretationMetadata : 1; unsigned char read_queryNeuralRewriteMetadata : 1; unsigned char read_queryNormalizerMetadata : 1; unsigned char read_queryPoiMetadata : 1; unsigned char read_querySpellCorrectionMetadata : 1; unsigned char read_querySynonymMetadata : 1; unsigned char read_queryTagMetadata : 1; unsigned char read_queryTokenImportanceMetadata : 1; unsigned char read_queryTokenizerMetadata : 1; unsigned char read_queryTransliterMetadata : 1; unsigned char read_rawQueryTokenizerMetadata : 1; unsigned char read_rewrittenQuery : 1; unsigned char read_richBrandMetadata : 1; unsigned char read_tokenSynonymMetadata : 1; unsigned char wrote_anyField : 1; } _flags;
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
