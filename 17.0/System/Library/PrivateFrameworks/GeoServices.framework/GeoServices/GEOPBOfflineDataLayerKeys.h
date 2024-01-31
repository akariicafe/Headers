@class NSMutableArray;

@interface GEOPBOfflineDataLayerKeys : PBCodable <NSCopying> {
    struct GEOPBOfflineDataLayerVersion { int _layer; unsigned long long _version; struct { unsigned char layer : 1; unsigned char version : 1; } _has; } _layerVersion;
    NSMutableArray *_keyValueReferences;
    struct { unsigned char has_layerVersion : 1; } _flags;
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
