@class GEOPDPlaceSummaryLayoutMetadata, GEOPDSearchSectionList, GEOPDRelatedSearchSuggestion, GEOPDSearchClientBehavior, PBDataReader, GEOPDSSearchAutoRedoThreshold, PBUnknownFields, NSMutableArray, GEOPDResultRefinementGroup, GEOMapRegion, GEOPDSCategorySearchResultSection;

@interface GEOPDCategorySearchResult : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDSSearchAutoRedoThreshold *_autoRedoSearchThreshold;
    NSMutableArray *_browseCategorys;
    GEOPDSCategorySearchResultSection *_categorySearchResultSection;
    GEOPDRelatedSearchSuggestion *_defaultRelatedSearchSuggestion;
    GEOMapRegion *_displayMapRegion;
    GEOPDPlaceSummaryLayoutMetadata *_placeSummaryLayoutMetadata;
    NSMutableArray *_relatedEntitySections;
    NSMutableArray *_relatedSearchSuggestions;
    NSMutableArray *_resultDetourInfos;
    GEOPDResultRefinementGroup *_resultRefinementGroup;
    GEOPDSearchClientBehavior *_searchClientBehavior;
    NSMutableArray *_searchTierMetadatas;
    GEOPDSearchSectionList *_sectionList;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _searchResultViewType;
    BOOL _disableAddingAdditionalPaddingOnViewport;
    BOOL _enablePartialClientization;
    BOOL _enableStructuredRapAffordance;
    BOOL _isChainResultSet;
    struct { unsigned char has_searchResultViewType : 1; unsigned char has_disableAddingAdditionalPaddingOnViewport : 1; unsigned char has_enablePartialClientization : 1; unsigned char has_enableStructuredRapAffordance : 1; unsigned char has_isChainResultSet : 1; unsigned char read_unknownFields : 1; unsigned char read_autoRedoSearchThreshold : 1; unsigned char read_browseCategorys : 1; unsigned char read_categorySearchResultSection : 1; unsigned char read_defaultRelatedSearchSuggestion : 1; unsigned char read_displayMapRegion : 1; unsigned char read_placeSummaryLayoutMetadata : 1; unsigned char read_relatedEntitySections : 1; unsigned char read_relatedSearchSuggestions : 1; unsigned char read_resultDetourInfos : 1; unsigned char read_resultRefinementGroup : 1; unsigned char read_searchClientBehavior : 1; unsigned char read_searchTierMetadatas : 1; unsigned char read_sectionList : 1; unsigned char wrote_anyField : 1; } _flags;
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
