@class NSMutableArray, PBDataReader;

@interface GEOBatchRevGeocodeResponse : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_batchPlaceResults;
    NSMutableArray *_clusters;
    double _timestamp;
    NSMutableArray *_versionDomains;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _statusCode;
    unsigned int _ttl;
    unsigned int _version;
    struct { unsigned char has_timestamp : 1; unsigned char has_statusCode : 1; unsigned char has_ttl : 1; unsigned char has_version : 1; unsigned char read_batchPlaceResults : 1; unsigned char read_clusters : 1; unsigned char read_versionDomains : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasStatusCode;
@property (nonatomic) int statusCode;
@property (retain, nonatomic) NSMutableArray *clusters;
@property (retain, nonatomic) NSMutableArray *batchPlaceResults;
@property (nonatomic) BOOL hasTtl;
@property (nonatomic) unsigned int ttl;
@property (retain, nonatomic) NSMutableArray *versionDomains;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) unsigned int version;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) double timestamp;

+ (Class)clusterType;
+ (BOOL)isValid:(id)a0;
+ (Class)batchPlaceResultType;
+ (Class)versionDomainType;

- (id)init;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (void)clearSensitiveFields:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithJSON:(id)a0;
- (int)StringAsStatusCode:(id)a0;
- (id)clusterAtIndex:(unsigned long long)a0;
- (void)addBatchPlaceResult:(id)a0;
- (void)addCluster:(id)a0;
- (void)addVersionDomain:(id)a0;
- (id)batchPlaceResultAtIndex:(unsigned long long)a0;
- (unsigned long long)batchPlaceResultsCount;
- (void)clearBatchPlaceResults;
- (void)clearClusters;
- (void)clearVersionDomains;
- (unsigned long long)clustersCount;
- (id)statusCodeAsString:(int)a0;
- (id)versionDomainAtIndex:(unsigned long long)a0;
- (unsigned long long)versionDomainsCount;

@end
