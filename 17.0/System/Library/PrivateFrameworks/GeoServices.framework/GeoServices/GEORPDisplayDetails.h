@class PBDataReader, GEOLocalizedString, GEOTextLink, GEOMapRegion, NSMutableArray, PBUnknownFields;

@interface GEORPDisplayDetails : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOLocalizedString *_body;
    GEOMapRegion *_displayRegion;
    GEOTextLink *_outreachLink;
    NSMutableArray *_places;
    GEOLocalizedString *_title;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _displayStyle;
    int _mapType;
    struct { unsigned char has_displayStyle : 1; unsigned char has_mapType : 1; unsigned char read_unknownFields : 1; unsigned char read_body : 1; unsigned char read_displayRegion : 1; unsigned char read_outreachLink : 1; unsigned char read_places : 1; unsigned char read_title : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasDisplayStyle;
@property (nonatomic) int displayStyle;
@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) GEOLocalizedString *title;
@property (readonly, nonatomic) BOOL hasBody;
@property (retain, nonatomic) GEOLocalizedString *body;
@property (readonly, nonatomic) BOOL hasDisplayRegion;
@property (retain, nonatomic) GEOMapRegion *displayRegion;
@property (nonatomic) BOOL hasMapType;
@property (nonatomic) int mapType;
@property (retain, nonatomic) NSMutableArray *places;
@property (readonly, nonatomic) BOOL hasOutreachLink;
@property (retain, nonatomic) GEOTextLink *outreachLink;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)placeType;

- (id)init;
- (unsigned long long)hash;
- (int)StringAsMapType:(id)a0;
- (int)StringAsDisplayStyle:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)displayStyleAsString:(int)a0;
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
- (id)mapTypeAsString:(int)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithJSON:(id)a0;
- (void)addPlace:(id)a0;
- (void)clearPlaces;
- (id)placeAtIndex:(unsigned long long)a0;
- (unsigned long long)placesCount;

@end
