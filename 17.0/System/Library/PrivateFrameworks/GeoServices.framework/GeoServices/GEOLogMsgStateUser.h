@class NSString, PBDataReader;

@interface GEOLogMsgStateUser : PBCodable <NSCopying> {
    PBDataReader *_reader;
    struct GEOSessionID { unsigned long long _high; unsigned long long _low; } _preSyncSessionId;
    double _bestMapsUseStartDate;
    NSString *_homeCountryCode;
    NSString *_homeMetroRegion;
    double _mapsUseLastDate;
    double _mapsUseStartDate;
    double _syncFirstTimestamp;
    double _syncLastTimestamp;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    BOOL _isSignedInWithDsid;
    BOOL _isTourist;
    struct { unsigned char has_preSyncSessionId : 1; unsigned char has_bestMapsUseStartDate : 1; unsigned char has_mapsUseLastDate : 1; unsigned char has_mapsUseStartDate : 1; unsigned char has_syncFirstTimestamp : 1; unsigned char has_syncLastTimestamp : 1; unsigned char has_isSignedInWithDsid : 1; unsigned char has_isTourist : 1; unsigned char read_homeCountryCode : 1; unsigned char read_homeMetroRegion : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasSyncFirstTimestamp;
@property (nonatomic) double syncFirstTimestamp;
@property (nonatomic) BOOL hasSyncLastTimestamp;
@property (nonatomic) double syncLastTimestamp;
@property (nonatomic) BOOL hasMapsUseStartDate;
@property (nonatomic) double mapsUseStartDate;
@property (nonatomic) BOOL hasMapsUseLastDate;
@property (nonatomic) double mapsUseLastDate;
@property (readonly, nonatomic) BOOL hasHomeCountryCode;
@property (retain, nonatomic) NSString *homeCountryCode;
@property (readonly, nonatomic) BOOL hasHomeMetroRegion;
@property (retain, nonatomic) NSString *homeMetroRegion;
@property (nonatomic) BOOL hasIsTourist;
@property (nonatomic) BOOL isTourist;
@property (nonatomic) BOOL hasPreSyncSessionId;
@property (nonatomic) struct GEOSessionID { unsigned long long x0; unsigned long long x1; } preSyncSessionId;
@property (nonatomic) BOOL hasIsSignedInWithDsid;
@property (nonatomic) BOOL isSignedInWithDsid;
@property (nonatomic) BOOL hasBestMapsUseStartDate;
@property (nonatomic) double bestMapsUseStartDate;

+ (BOOL)isValid:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithData:(id)a0;
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

@end
