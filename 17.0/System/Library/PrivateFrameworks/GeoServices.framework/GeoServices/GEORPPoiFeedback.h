@class PBUnknownFields, PBDataReader, GEOPDPlace, GEOPDPlaceRequest, GEORPCuratedCollectionContext, GEORPPoiCorrections;

@interface GEORPPoiFeedback : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEORPPoiCorrections *_corrections;
    GEOPDPlaceRequest *_placeRequest;
    GEOPDPlace *_place;
    GEORPCuratedCollectionContext *_poiCuratedCollectionContext;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _correctionType;
    BOOL _addOtherPoi;
    struct { unsigned char has_correctionType : 1; unsigned char has_addOtherPoi : 1; unsigned char read_unknownFields : 1; unsigned char read_corrections : 1; unsigned char read_placeRequest : 1; unsigned char read_place : 1; unsigned char read_poiCuratedCollectionContext : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasCorrectionType;
@property (nonatomic) int correctionType;
@property (readonly, nonatomic) BOOL hasCorrections;
@property (retain, nonatomic) GEORPPoiCorrections *corrections;
@property (readonly, nonatomic) BOOL hasPlace;
@property (retain, nonatomic) GEOPDPlace *place;
@property (readonly, nonatomic) BOOL hasPlaceRequest;
@property (retain, nonatomic) GEOPDPlaceRequest *placeRequest;
@property (nonatomic) BOOL hasAddOtherPoi;
@property (nonatomic) BOOL addOtherPoi;
@property (readonly, nonatomic) BOOL hasPoiCuratedCollectionContext;
@property (retain, nonatomic) GEORPCuratedCollectionContext *poiCuratedCollectionContext;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

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
- (void)clearSensitiveFields:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithJSON:(id)a0;
- (int)StringAsCorrectionType:(id)a0;
- (id)correctionTypeAsString:(int)a0;

@end
