@class NSString, NSMutableArray, PBDataReader;

@interface GEOPBOfflineRequestMetadata : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_downloadedRegions;
    NSString *_requestIdentifier;
    unsigned long long _requestStartTimeMs;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _messageType;
    BOOL _debugLog;
    BOOL _performanceMetrics;
    struct { unsigned char has_requestStartTimeMs : 1; unsigned char has_messageType : 1; unsigned char has_debugLog : 1; unsigned char has_performanceMetrics : 1; unsigned char read_downloadedRegions : 1; unsigned char read_requestIdentifier : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasMessageType;
@property (nonatomic) int messageType;
@property (nonatomic) BOOL hasRequestStartTimeMs;
@property (nonatomic) unsigned long long requestStartTimeMs;
@property (nonatomic) BOOL hasDebugLog;
@property (nonatomic) BOOL debugLog;
@property (readonly, nonatomic) BOOL hasRequestIdentifier;
@property (retain, nonatomic) NSString *requestIdentifier;
@property (nonatomic) BOOL hasPerformanceMetrics;
@property (nonatomic) BOOL performanceMetrics;
@property (retain, nonatomic) NSMutableArray *downloadedRegions;

+ (BOOL)isValid:(id)a0;
+ (Class)downloadedRegionsType;

- (id)init;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (int)StringAsMessageType:(id)a0;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (id)messageTypeAsString:(int)a0;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithJSON:(id)a0;
- (void)addDownloadedRegions:(id)a0;
- (void)clearDownloadedRegions;
- (id)downloadedRegionsAtIndex:(unsigned long long)a0;
- (unsigned long long)downloadedRegionsCount;

@end
