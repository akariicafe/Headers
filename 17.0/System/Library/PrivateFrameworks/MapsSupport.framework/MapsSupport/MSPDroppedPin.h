@class GEOLatLng, GEOMapRegion, PBUnknownFields;

@interface MSPDroppedPin : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    struct { unsigned char timestamp : 1; unsigned char floorOrdinal : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasLatLng;
@property (retain, nonatomic) GEOLatLng *latLng;
@property (readonly, nonatomic) BOOL hasMapRegion;
@property (retain, nonatomic) GEOMapRegion *mapRegion;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) BOOL hasFloorOrdinal;
@property (nonatomic) int floorOrdinal;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
