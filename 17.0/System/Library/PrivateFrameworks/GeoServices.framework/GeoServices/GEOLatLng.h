@class PBUnknownFields;

@interface GEOLatLng : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    double _elevationM;
    double _lat;
    double _lng;
    BOOL _gtLog;
    struct { unsigned char has_elevationM : 1; unsigned char has_gtLog : 1; } _flags;
}

@property (readonly, nonatomic) struct { double x0; double x1; } coordinate;
@property (nonatomic) BOOL hasGtLog;
@property (nonatomic) BOOL gtLog;
@property (nonatomic) double lat;
@property (nonatomic) double lng;
@property (nonatomic) BOOL hasElevationM;
@property (nonatomic) double elevationM;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithCoordinate:(struct { double x0; double x1; })a0;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)initWithLatitude:(double)a0 longitude:(double)a1;
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
