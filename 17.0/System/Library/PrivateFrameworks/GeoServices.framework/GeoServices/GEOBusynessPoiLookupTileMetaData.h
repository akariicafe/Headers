@class NSString;

@interface GEOBusynessPoiLookupTileMetaData : PBCodable <NSCopying> {
    unsigned long long _tileId;
    NSString *_version;
    unsigned int _poiCount;
    struct { unsigned char has_tileId : 1; unsigned char has_poiCount : 1; } _flags;
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
