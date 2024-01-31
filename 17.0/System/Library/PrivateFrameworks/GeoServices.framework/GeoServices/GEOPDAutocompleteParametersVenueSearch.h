@class GEOPDViewportInfo, NSString, PBDataReader, NSMutableArray, PBUnknownFields;

@interface GEOPDAutocompleteParametersVenueSearch : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    unsigned long long _buildingId;
    NSMutableArray *_categorys;
    unsigned long long _levelId;
    NSString *_query;
    unsigned long long _sectionId;
    unsigned long long _venueId;
    GEOPDViewportInfo *_viewportInfo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _maxResults;
    BOOL _highlightDiff;
    struct { unsigned char has_buildingId : 1; unsigned char has_levelId : 1; unsigned char has_sectionId : 1; unsigned char has_venueId : 1; unsigned char has_maxResults : 1; unsigned char has_highlightDiff : 1; unsigned char read_unknownFields : 1; unsigned char read_categorys : 1; unsigned char read_query : 1; unsigned char read_viewportInfo : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasQuery;
@property (retain, nonatomic) NSString *query;
@property (readonly, nonatomic) BOOL hasViewportInfo;
@property (retain, nonatomic) GEOPDViewportInfo *viewportInfo;
@property (nonatomic) BOOL hasMaxResults;
@property (nonatomic) int maxResults;
@property (nonatomic) BOOL hasHighlightDiff;
@property (nonatomic) BOOL highlightDiff;
@property (nonatomic) BOOL hasVenueId;
@property (nonatomic) unsigned long long venueId;
@property (nonatomic) BOOL hasLevelId;
@property (nonatomic) unsigned long long levelId;
@property (nonatomic) BOOL hasSectionId;
@property (nonatomic) unsigned long long sectionId;
@property (nonatomic) BOOL hasBuildingId;
@property (nonatomic) unsigned long long buildingId;
@property (retain, nonatomic) NSMutableArray *categorys;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)categoryType;

- (id)init;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void)clearUnknownFields:(BOOL)a0;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithJSON:(id)a0;
- (void)addCategory:(id)a0;
- (id)categoryAtIndex:(unsigned long long)a0;
- (unsigned long long)categorysCount;
- (void)clearCategorys;

@end
