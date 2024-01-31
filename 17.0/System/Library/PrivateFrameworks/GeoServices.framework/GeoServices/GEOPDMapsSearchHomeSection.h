@class NSString, GEOPDSearchBrowseCategorySuggestionResult, PBDataReader, GEOPDPublisherSuggestionResult, PBUnknownFields, GEOPDPlaceSuggestionResult, GEOPDCollectionSuggestionResult, GEOPDGuidesLocationsSuggestionResult;

@interface GEOPDMapsSearchHomeSection : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDCollectionSuggestionResult *_collectionSuggestionResult;
    GEOPDGuidesLocationsSuggestionResult *_guidesLocationsSuggestionResult;
    NSString *_name;
    GEOPDPlaceSuggestionResult *_placeSuggestionResult;
    GEOPDPublisherSuggestionResult *_publisherSuggestionResult;
    GEOPDSearchBrowseCategorySuggestionResult *_searchBrowseCategorySuggestionResult;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _sectionType;
    struct { unsigned char has_sectionType : 1; unsigned char read_unknownFields : 1; unsigned char read_collectionSuggestionResult : 1; unsigned char read_guidesLocationsSuggestionResult : 1; unsigned char read_name : 1; unsigned char read_placeSuggestionResult : 1; unsigned char read_publisherSuggestionResult : 1; unsigned char read_searchBrowseCategorySuggestionResult : 1; unsigned char wrote_anyField : 1; } _flags;
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
