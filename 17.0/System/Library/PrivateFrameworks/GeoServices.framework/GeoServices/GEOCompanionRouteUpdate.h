@class NSData, GEOTransitRouteUpdate, PBDataReader;

@interface GEOCompanionRouteUpdate : PBCodable <NSCopying> {
    PBDataReader *_reader;
    double _lastUpdated;
    NSData *_routeID;
    GEOTransitRouteUpdate *_transitRouteUpdate;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _type;
    struct { unsigned char has_lastUpdated : 1; unsigned char has_type : 1; unsigned char read_routeID : 1; unsigned char read_transitRouteUpdate : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasRouteID;
@property (retain, nonatomic) NSData *routeID;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (nonatomic) BOOL hasLastUpdated;
@property (nonatomic) double lastUpdated;
@property (readonly, nonatomic) BOOL hasTransitRouteUpdate;
@property (retain, nonatomic) GEOTransitRouteUpdate *transitRouteUpdate;

+ (BOOL)isValid:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (id)typeAsString:(int)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (int)StringAsType:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithTransitRouteUpdate:(id)a0;

@end
