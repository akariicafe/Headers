@class NSString, NSMutableArray, PBDataReader;

@interface GEOPDSearchTriggerFeature : PBCodable <NSCopying> {
    PBDataReader *_reader;
    struct { int *list; unsigned long long count; unsigned long long size; } _completionSourceTypes;
    NSString *_canonicalName;
    long long _densityScore;
    NSString *_displayName;
    NSString *_entityId;
    long long _globalEntityPopularity;
    long long _globalPopularity;
    double _lat;
    double _lng;
    long long _localPopularity;
    long long _localEntityPopularity;
    NSMutableArray *_modernToLegacyIdMappings;
    NSMutableArray *_prefCategorys;
    NSMutableArray *_relatedCategories;
    double _similarityScore;
    NSString *_trigger;
    double _w2vSimilarityScore;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    float _globalPmiScore;
    float _localPmiScore;
    int _tag;
    BOOL _isUseShowOnMapHighlightExtra;
    struct { unsigned char has_densityScore : 1; unsigned char has_globalEntityPopularity : 1; unsigned char has_globalPopularity : 1; unsigned char has_lat : 1; unsigned char has_lng : 1; unsigned char has_localPopularity : 1; unsigned char has_localEntityPopularity : 1; unsigned char has_similarityScore : 1; unsigned char has_w2vSimilarityScore : 1; unsigned char has_globalPmiScore : 1; unsigned char has_localPmiScore : 1; unsigned char has_tag : 1; unsigned char has_isUseShowOnMapHighlightExtra : 1; unsigned char read_completionSourceTypes : 1; unsigned char read_canonicalName : 1; unsigned char read_displayName : 1; unsigned char read_entityId : 1; unsigned char read_modernToLegacyIdMappings : 1; unsigned char read_prefCategorys : 1; unsigned char read_relatedCategories : 1; unsigned char read_trigger : 1; unsigned char wrote_anyField : 1; } _flags;
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
