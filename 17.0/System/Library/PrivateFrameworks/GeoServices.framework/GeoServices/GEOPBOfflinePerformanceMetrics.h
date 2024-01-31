@class NSString, NSMutableArray, PBDataReader;

@interface GEOPBOfflinePerformanceMetrics : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_dataVersion;
    NSString *_deviceModel;
    NSString *_offlineVersion;
    NSString *_osBuild;
    NSMutableArray *_serviceMetrics;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_dataVersion : 1; unsigned char read_deviceModel : 1; unsigned char read_offlineVersion : 1; unsigned char read_osBuild : 1; unsigned char read_serviceMetrics : 1; unsigned char wrote_anyField : 1; } _flags;
}

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
