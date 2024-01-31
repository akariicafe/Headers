@class GEOPDCameraFrame, GEOPDLocationInfo, PBDataReader;

@interface GEOPDMuninViewState : PBCodable <NSCopying> {
    PBDataReader *_reader;
    GEOPDCameraFrame *_cameraFrame;
    GEOPDLocationInfo *_locationInfo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_cameraFrame : 1; unsigned char read_locationInfo : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasCameraFrame;
@property (retain, nonatomic) GEOPDCameraFrame *cameraFrame;
@property (readonly, nonatomic) BOOL hasLocationInfo;
@property (retain, nonatomic) GEOPDLocationInfo *locationInfo;

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
