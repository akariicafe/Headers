@class GEOLatLng, PBUnknownFields;

@interface GEOArrivalPoint : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOLatLng *_point;
    unsigned int _radius;
    struct { unsigned char has_radius : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasPoint;
@property (retain, nonatomic) GEOLatLng *point;
@property (nonatomic) BOOL hasRadius;
@property (nonatomic) unsigned int radius;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
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
