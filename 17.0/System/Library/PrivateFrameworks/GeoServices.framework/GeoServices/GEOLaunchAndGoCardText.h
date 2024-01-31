@class PBDataReader, GEOFormattedString, GEOPlaceFormattedString, PBUnknownFields;

@interface GEOLaunchAndGoCardText : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPlaceFormattedString *_body;
    GEOFormattedString *_cardTitle;
    GEOPlaceFormattedString *_commuteTitle;
    GEOFormattedString *_routeDescription;
    GEOFormattedString *_routeTitle;
    GEOPlaceFormattedString *_title;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_body : 1; unsigned char read_cardTitle : 1; unsigned char read_commuteTitle : 1; unsigned char read_routeDescription : 1; unsigned char read_routeTitle : 1; unsigned char read_title : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasCardTitle;
@property (retain, nonatomic) GEOFormattedString *cardTitle;
@property (readonly, nonatomic) BOOL hasRouteTitle;
@property (retain, nonatomic) GEOFormattedString *routeTitle;
@property (readonly, nonatomic) BOOL hasRouteDescription;
@property (retain, nonatomic) GEOFormattedString *routeDescription;
@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) GEOPlaceFormattedString *title;
@property (readonly, nonatomic) BOOL hasCommuteTitle;
@property (retain, nonatomic) GEOPlaceFormattedString *commuteTitle;
@property (readonly, nonatomic) BOOL hasBody;
@property (retain, nonatomic) GEOPlaceFormattedString *body;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
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
