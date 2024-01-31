@interface GEOPDCameraFrame : PBCodable <NSCopying> {
    double _altitude;
    double _latitude;
    double _longitude;
    double _pitch;
    double _roll;
    double _yaw;
    struct { unsigned char has_altitude : 1; unsigned char has_latitude : 1; unsigned char has_longitude : 1; unsigned char has_pitch : 1; unsigned char has_roll : 1; unsigned char has_yaw : 1; } _flags;
}

@property (nonatomic) BOOL hasLatitude;
@property (nonatomic) double latitude;
@property (nonatomic) BOOL hasLongitude;
@property (nonatomic) double longitude;
@property (nonatomic) BOOL hasAltitude;
@property (nonatomic) double altitude;
@property (nonatomic) BOOL hasYaw;
@property (nonatomic) double yaw;
@property (nonatomic) BOOL hasPitch;
@property (nonatomic) double pitch;
@property (nonatomic) BOOL hasRoll;
@property (nonatomic) double roll;

+ (BOOL)isValid:(id)a0;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithJSON:(id)a0;

@end
