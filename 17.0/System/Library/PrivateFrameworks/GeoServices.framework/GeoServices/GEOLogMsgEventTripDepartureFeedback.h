@interface GEOLogMsgEventTripDepartureFeedback : PBCodable <NSCopying> {
    double _distanceFromOrigin;
    double _timeFromOrigin;
    int _transportMode;
    struct { unsigned char has_distanceFromOrigin : 1; unsigned char has_timeFromOrigin : 1; unsigned char has_transportMode : 1; } _flags;
}

@property (nonatomic) BOOL hasTransportMode;
@property (nonatomic) int transportMode;
@property (nonatomic) BOOL hasDistanceFromOrigin;
@property (nonatomic) double distanceFromOrigin;
@property (nonatomic) BOOL hasTimeFromOrigin;
@property (nonatomic) double timeFromOrigin;

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
- (int)StringAsTransportMode:(id)a0;
- (id)transportModeAsString:(int)a0;

@end
