@class GEOOriginalWaypointRoute, PBDataReader, NSData, PBUnknownFields;

@interface GEOStorageResumeRouteHandle : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOOriginalWaypointRoute *_routeGeometry;
    NSData *_serverSessionState;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    BOOL _hasVisitedFirstStop;
    struct { unsigned char has_hasVisitedFirstStop : 1; unsigned char read_unknownFields : 1; unsigned char read_routeGeometry : 1; unsigned char read_serverSessionState : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasRouteGeometry;
@property (retain, nonatomic) GEOOriginalWaypointRoute *routeGeometry;
@property (readonly, nonatomic) BOOL hasServerSessionState;
@property (retain, nonatomic) NSData *serverSessionState;
@property (nonatomic) BOOL hasHasVisitedFirstStop;
@property (nonatomic) BOOL hasVisitedFirstStop;
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
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithJSON:(id)a0;

@end
