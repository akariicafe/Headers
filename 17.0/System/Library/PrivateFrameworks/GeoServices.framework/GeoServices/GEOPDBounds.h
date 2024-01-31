@class PBDataReader, GEOPDViewportFrame, GEOMapRegion, PBUnknownFields;

@interface GEOPDBounds : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOMapRegion *_displayMapRegion;
    GEOMapRegion *_mapRegion;
    GEOPDViewportFrame *_viewportFrame;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    float _maxZoom;
    float _minZoom;
    struct { unsigned char has_maxZoom : 1; unsigned char has_minZoom : 1; unsigned char read_unknownFields : 1; unsigned char read_displayMapRegion : 1; unsigned char read_mapRegion : 1; unsigned char read_viewportFrame : 1; unsigned char wrote_anyField : 1; } _flags;
}

+ (id)boundsInfoForPlaceData:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithData:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
