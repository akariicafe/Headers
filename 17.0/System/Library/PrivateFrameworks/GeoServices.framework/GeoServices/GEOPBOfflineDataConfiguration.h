@class PBUnknownFields, GEOPBOfflineTileMetadata, PBDataReader;

@interface GEOPBOfflineDataConfiguration : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct GEOPBOfflineDataLayerVersion { int x0; unsigned long long x1; struct { unsigned char x0 : 1; unsigned char x1 : 1; } x2; } *_activeVersions;
    unsigned long long _activeVersionsCount;
    unsigned long long _activeVersionsSpace;
    struct GEOPBOfflineDataLayerVersion { int x0; unsigned long long x1; struct { unsigned char x0 : 1; unsigned char x1 : 1; } x2; } *_latestAvailableVersions;
    unsigned long long _latestAvailableVersionsCount;
    unsigned long long _latestAvailableVersionsSpace;
    unsigned long long _activeReleaseDataVersion;
    unsigned long long _lastUpdateTimestamp;
    GEOPBOfflineTileMetadata *_tileMetadata;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char has_activeReleaseDataVersion : 1; unsigned char has_lastUpdateTimestamp : 1; unsigned char read_unknownFields : 1; unsigned char read_activeVersions : 1; unsigned char read_latestAvailableVersions : 1; unsigned char read_tileMetadata : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
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
