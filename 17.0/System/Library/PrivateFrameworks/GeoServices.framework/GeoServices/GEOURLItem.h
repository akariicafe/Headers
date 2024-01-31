@class GEOPlace, GEOMapItemStorage, PBDataReader;

@interface GEOURLItem : PBCodable <NSCopying> {
    PBDataReader *_reader;
    GEOMapItemStorage *_mapItemStorage;
    GEOPlace *_place;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    BOOL _currentLocation;
    struct { unsigned char has_currentLocation : 1; unsigned char read_mapItemStorage : 1; unsigned char read_place : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (id)mapItem;
- (void)setMapItem:(id)a0;
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
