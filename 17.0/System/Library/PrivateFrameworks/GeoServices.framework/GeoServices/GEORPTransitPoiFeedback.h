@class NSMutableArray, PBUnknownFields, PBDataReader, GEOPDPlace, GEORPTransitPoiCorrections, GEOPDPlaceRequest, GEORPTransitLineTileInfo;

@interface GEORPTransitPoiFeedback : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEORPTransitPoiCorrections *_corrections;
    NSMutableArray *_directionsRequests;
    NSMutableArray *_directionsResponses;
    GEOPDPlaceRequest *_placeRequest;
    GEOPDPlace *_place;
    GEORPTransitLineTileInfo *_transitLineTileInfo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _correctionType;
    struct { unsigned char has_correctionType : 1; unsigned char read_unknownFields : 1; unsigned char read_corrections : 1; unsigned char read_directionsRequests : 1; unsigned char read_directionsResponses : 1; unsigned char read_placeRequest : 1; unsigned char read_place : 1; unsigned char read_transitLineTileInfo : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasCorrectionType;
@property (nonatomic) int correctionType;
@property (readonly, nonatomic) BOOL hasCorrections;
@property (retain, nonatomic) GEORPTransitPoiCorrections *corrections;
@property (readonly, nonatomic) BOOL hasPlace;
@property (retain, nonatomic) GEOPDPlace *place;
@property (readonly, nonatomic) BOOL hasTransitLineTileInfo;
@property (retain, nonatomic) GEORPTransitLineTileInfo *transitLineTileInfo;
@property (readonly, nonatomic) BOOL hasPlaceRequest;
@property (retain, nonatomic) GEOPDPlaceRequest *placeRequest;
@property (retain, nonatomic) NSMutableArray *directionsRequests;
@property (retain, nonatomic) NSMutableArray *directionsResponses;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)directionsRequestType;
+ (Class)directionsResponseType;

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
- (void)addDirectionsRequest:(id)a0;
- (void)addDirectionsResponse:(id)a0;
- (void)clearDirectionsRequests;
- (void)clearDirectionsResponses;
- (id)correctionTypeAsString:(int)a0;
- (id)directionsRequestAtIndex:(unsigned long long)a0;
- (unsigned long long)directionsRequestsCount;
- (id)directionsResponseAtIndex:(unsigned long long)a0;
- (unsigned long long)directionsResponsesCount;

@end
