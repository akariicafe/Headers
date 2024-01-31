@class NSString;

@interface GEOLogMsgStateOfflineDownload : PBCodable <NSCopying> {
    NSString *_downloadCountry;
    int _downloadSize;
    int _entryTarget;
    unsigned int _zoomLevel;
    BOOL _automaticUpdates;
    BOOL _downloadOnWifiOnly;
    BOOL _isDownloadInHomeMetro;
    BOOL _optimizeStorage;
    BOOL _regionTilesWereResized;
    struct { unsigned char has_downloadSize : 1; unsigned char has_entryTarget : 1; unsigned char has_zoomLevel : 1; unsigned char has_automaticUpdates : 1; unsigned char has_downloadOnWifiOnly : 1; unsigned char has_isDownloadInHomeMetro : 1; unsigned char has_optimizeStorage : 1; unsigned char has_regionTilesWereResized : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasDownloadCountry;
@property (retain, nonatomic) NSString *downloadCountry;
@property (nonatomic) BOOL hasIsDownloadInHomeMetro;
@property (nonatomic) BOOL isDownloadInHomeMetro;
@property (nonatomic) BOOL hasRegionTilesWereResized;
@property (nonatomic) BOOL regionTilesWereResized;
@property (nonatomic) BOOL hasEntryTarget;
@property (nonatomic) int entryTarget;
@property (nonatomic) BOOL hasDownloadSize;
@property (nonatomic) int downloadSize;
@property (nonatomic) BOOL hasZoomLevel;
@property (nonatomic) unsigned int zoomLevel;
@property (nonatomic) BOOL hasDownloadOnWifiOnly;
@property (nonatomic) BOOL downloadOnWifiOnly;
@property (nonatomic) BOOL hasOptimizeStorage;
@property (nonatomic) BOOL optimizeStorage;
@property (nonatomic) BOOL hasAutomaticUpdates;
@property (nonatomic) BOOL automaticUpdates;

+ (BOOL)isValid:(id)a0;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithJSON:(id)a0;
- (int)StringAsDownloadSize:(id)a0;
- (int)StringAsEntryTarget:(id)a0;
- (id)downloadSizeAsString:(int)a0;
- (id)entryTargetAsString:(int)a0;

@end
