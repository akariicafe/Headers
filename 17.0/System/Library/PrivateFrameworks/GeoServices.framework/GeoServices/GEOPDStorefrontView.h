@class GEOPDGeographicCoordinate, PBDataReader, GEOPDPhotoPosition, GEOPDOrientedPosition;

@interface GEOPDStorefrontView : PBCodable <NSCopying> {
    PBDataReader *_reader;
    unsigned long long _imdataId;
    GEOPDGeographicCoordinate *_lookAtGeo;
    GEOPDOrientedPosition *_lookAt;
    GEOPDPhotoPosition *_photoPosition;
    GEOPDGeographicCoordinate *_viewpointGeo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char has_imdataId : 1; unsigned char read_lookAtGeo : 1; unsigned char read_lookAt : 1; unsigned char read_photoPosition : 1; unsigned char read_viewpointGeo : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasPhotoPosition;
@property (retain, nonatomic) GEOPDPhotoPosition *photoPosition;
@property (nonatomic) BOOL hasImdataId;
@property (nonatomic) unsigned long long imdataId;
@property (readonly, nonatomic) BOOL hasLookAt;
@property (retain, nonatomic) GEOPDOrientedPosition *lookAt;
@property (readonly, nonatomic) BOOL hasLookAtGeo;
@property (retain, nonatomic) GEOPDGeographicCoordinate *lookAtGeo;
@property (readonly, nonatomic) BOOL hasViewpointGeo;
@property (retain, nonatomic) GEOPDGeographicCoordinate *viewpointGeo;

+ (BOOL)isValid:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithJSON:(id)a0;

@end
