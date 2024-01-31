@class NSString, GEORPAccessPointCorrections, PBDataReader, GEORPAmenityCorrections, GEORPCorrectedCoordinate, GEORPMapLocation, NSMutableArray, GEORPPlaceContainmentCorrections, PBUnknownFields;

@interface GEORPTransitPoiCorrections : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEORPAccessPointCorrections *_accessPoint;
    GEORPAmenityCorrections *_amenity;
    NSMutableArray *_businessHours;
    GEORPPlaceContainmentCorrections *_containmentCorrections;
    GEORPCorrectedCoordinate *_coordinate;
    GEORPMapLocation *_mapLocation;
    NSString *_name;
    NSString *_originalName;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    BOOL _lineScheduleDelay;
    BOOL _lineShapeIncorrect;
    struct { unsigned char has_lineScheduleDelay : 1; unsigned char has_lineShapeIncorrect : 1; unsigned char read_unknownFields : 1; unsigned char read_accessPoint : 1; unsigned char read_amenity : 1; unsigned char read_businessHours : 1; unsigned char read_containmentCorrections : 1; unsigned char read_coordinate : 1; unsigned char read_mapLocation : 1; unsigned char read_name : 1; unsigned char read_originalName : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL hasAmenity;
@property (retain, nonatomic) GEORPAmenityCorrections *amenity;
@property (retain, nonatomic) NSMutableArray *businessHours;
@property (readonly, nonatomic) BOOL hasCoordinate;
@property (retain, nonatomic) GEORPCorrectedCoordinate *coordinate;
@property (readonly, nonatomic) BOOL hasMapLocation;
@property (retain, nonatomic) GEORPMapLocation *mapLocation;
@property (nonatomic) BOOL hasLineShapeIncorrect;
@property (nonatomic) BOOL lineShapeIncorrect;
@property (nonatomic) BOOL hasLineScheduleDelay;
@property (nonatomic) BOOL lineScheduleDelay;
@property (readonly, nonatomic) BOOL hasAccessPoint;
@property (retain, nonatomic) GEORPAccessPointCorrections *accessPoint;
@property (readonly, nonatomic) BOOL hasOriginalName;
@property (retain, nonatomic) NSString *originalName;
@property (readonly, nonatomic) BOOL hasContainmentCorrections;
@property (retain, nonatomic) GEORPPlaceContainmentCorrections *containmentCorrections;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)businessHoursType;

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
- (void)addBusinessHours:(id)a0;
- (id)businessHoursAtIndex:(unsigned long long)a0;
- (unsigned long long)businessHoursCount;
- (void)clearBusinessHours;

@end
