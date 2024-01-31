@class NSMutableArray, PBUnknownFields;

@interface GEOMapRegion : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    double _eastLng;
    double _northLat;
    double _southLat;
    NSMutableArray *_vertexs;
    double _westLng;
    int _mapRegionSourceType;
    struct { unsigned char has_eastLng : 1; unsigned char has_northLat : 1; unsigned char has_southLat : 1; unsigned char has_westLng : 1; unsigned char has_mapRegionSourceType : 1; } _flags;
}

@property (readonly, nonatomic) double centerLat;
@property (readonly, nonatomic) double centerLng;
@property (readonly, nonatomic) double spanLat;
@property (readonly, nonatomic) double spanLng;
@property (readonly, nonatomic) BOOL hasRectangleVertices;
@property (nonatomic) BOOL hasSouthLat;
@property (nonatomic) double southLat;
@property (nonatomic) BOOL hasWestLng;
@property (nonatomic) double westLng;
@property (nonatomic) BOOL hasNorthLat;
@property (nonatomic) double northLat;
@property (nonatomic) BOOL hasEastLng;
@property (nonatomic) double eastLng;
@property (retain, nonatomic) NSMutableArray *vertexs;
@property (nonatomic) BOOL hasMapRegionSourceType;
@property (nonatomic) int mapRegionSourceType;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (id)_geo_mapRegionForGEOCoordinateRegion:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
+ (Class)vertexType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (id)initWithMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (void)writeTo:(id)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)initWithLatitude:(double)a0 longitude:(double)a1;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (BOOL)isValid;
- (void)clearUnknownFields:(BOOL)a0;
- (BOOL)containsCoordinate:(struct { double x0; double x1; })a0;
- (void)addVertex:(id)a0;
- (id)vertexAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (id)coordinates;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)setMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)intersectsMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (id)initWithJSON:(id)a0;
- (id)initWithCoordinateRegion:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (BOOL)containsRegion:(id)a0;
- (int)StringAsMapRegionSourceType:(id)a0;
- (void)clearVertexs;
- (BOOL)containsCoordinate:(struct { double x0; double x1; })a0 radius:(double)a1;
- (BOOL)containsMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (id)initWithRadialPlace:(id)a0;
- (id)intersectionsOnPolyline:(id)a0;
- (BOOL)intersectsRegion:(id)a0;
- (id)mapRegionSourceTypeAsString:(int)a0;
- (unsigned long long)vertexsCount;

@end
