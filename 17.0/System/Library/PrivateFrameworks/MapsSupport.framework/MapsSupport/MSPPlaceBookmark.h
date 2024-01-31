@class GEOMapItemStorage, NSString, GEOLatLng, PBUnknownFields;

@interface MSPPlaceBookmark : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    struct { unsigned char droppedPinFloorOrdinal : 1; unsigned char origin : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasMapItemStorage;
@property (retain, nonatomic) GEOMapItemStorage *mapItemStorage;
@property (nonatomic) BOOL hasOrigin;
@property (nonatomic) int origin;
@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) BOOL hasDroppedPinCoordinate;
@property (retain, nonatomic) GEOLatLng *droppedPinCoordinate;
@property (nonatomic) BOOL hasDroppedPinFloorOrdinal;
@property (nonatomic) int droppedPinFloorOrdinal;
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
- (id)originAsString:(int)a0;
- (int)StringAsOrigin:(id)a0;

@end
