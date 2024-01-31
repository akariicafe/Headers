@class NSString, GEOPlaceSearchResponse, GEOPlaceSearchRequest, GEOPDPlaceRequest, GEOPDPlaceResponse, PBDataReader;

@interface GEORPCorrectedSearch : PBCodable <NSCopying> {
    PBDataReader *_reader;
    GEOPDPlaceRequest *_placeRequest;
    GEOPDPlaceResponse *_placeResponse;
    GEOPlaceSearchRequest *_placeSearchRequest;
    GEOPlaceSearchResponse *_placeSearchResponse;
    NSString *_preferredSearchDisplayLocation;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _correctedSearchResultIndex;
    unsigned int _originalSearchResultIndex;
    struct { unsigned char has_correctedSearchResultIndex : 1; unsigned char has_originalSearchResultIndex : 1; unsigned char read_placeRequest : 1; unsigned char read_placeResponse : 1; unsigned char read_placeSearchRequest : 1; unsigned char read_placeSearchResponse : 1; unsigned char read_preferredSearchDisplayLocation : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasPlaceSearchRequest;
@property (retain, nonatomic) GEOPlaceSearchRequest *placeSearchRequest;
@property (readonly, nonatomic) BOOL hasPlaceSearchResponse;
@property (retain, nonatomic) GEOPlaceSearchResponse *placeSearchResponse;
@property (nonatomic) BOOL hasOriginalSearchResultIndex;
@property (nonatomic) unsigned int originalSearchResultIndex;
@property (nonatomic) BOOL hasCorrectedSearchResultIndex;
@property (nonatomic) unsigned int correctedSearchResultIndex;
@property (readonly, nonatomic) BOOL hasPreferredSearchDisplayLocation;
@property (retain, nonatomic) NSString *preferredSearchDisplayLocation;
@property (readonly, nonatomic) BOOL hasPlaceRequest;
@property (retain, nonatomic) GEOPDPlaceRequest *placeRequest;
@property (readonly, nonatomic) BOOL hasPlaceResponse;
@property (retain, nonatomic) GEOPDPlaceResponse *placeResponse;

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
- (void)clearSensitiveFields:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithJSON:(id)a0;
- (BOOL)containsReportableData;

@end
