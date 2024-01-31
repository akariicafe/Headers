@interface GEOLogMsgStateOffline : PBCodable <NSCopying> {
    unsigned long long _routingOdsVersion;
    unsigned long long _searchOdsVersion;
    unsigned int _numberOfDownloadedRegions;
    BOOL _isMapsInOfflineMode;
    BOOL _isNetworkConnected;
    BOOL _isOnlyUseOffline;
    struct { unsigned char has_routingOdsVersion : 1; unsigned char has_searchOdsVersion : 1; unsigned char has_numberOfDownloadedRegions : 1; unsigned char has_isMapsInOfflineMode : 1; unsigned char has_isNetworkConnected : 1; unsigned char has_isOnlyUseOffline : 1; } _flags;
}

@property (nonatomic) BOOL hasIsMapsInOfflineMode;
@property (nonatomic) BOOL isMapsInOfflineMode;
@property (nonatomic) BOOL hasIsNetworkConnected;
@property (nonatomic) BOOL isNetworkConnected;
@property (nonatomic) BOOL hasIsOnlyUseOffline;
@property (nonatomic) BOOL isOnlyUseOffline;
@property (nonatomic) BOOL hasNumberOfDownloadedRegions;
@property (nonatomic) unsigned int numberOfDownloadedRegions;
@property (nonatomic) BOOL hasSearchOdsVersion;
@property (nonatomic) unsigned long long searchOdsVersion;
@property (nonatomic) BOOL hasRoutingOdsVersion;
@property (nonatomic) unsigned long long routingOdsVersion;

+ (BOOL)isValid:(id)a0;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithJSON:(id)a0;

@end
