@class GEOPDGeographicCoordinate, PBUnknownFields;

@interface GEOPDViewportFrame : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOPDGeographicCoordinate *_targetPoint;
    float _distance;
    float _heading;
    float _pitch;
    struct { unsigned char has_distance : 1; unsigned char has_heading : 1; unsigned char has_pitch : 1; } _flags;
}

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
