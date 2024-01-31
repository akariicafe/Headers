@class NSString, PBDataReader;

@interface GEOLogMsgStateMapLaunch : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_launchUri;
    NSString *_referringWebsite;
    NSString *_sourceAppId;
    NSString *_sourceHandoffDevice;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _launchActionInternal;
    int _launchAction;
    BOOL _isHandoff;
    struct { unsigned char has_launchActionInternal : 1; unsigned char has_launchAction : 1; unsigned char has_isHandoff : 1; unsigned char read_launchUri : 1; unsigned char read_referringWebsite : 1; unsigned char read_sourceAppId : 1; unsigned char read_sourceHandoffDevice : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasSourceAppId;
@property (retain, nonatomic) NSString *sourceAppId;
@property (readonly, nonatomic) BOOL hasLaunchUri;
@property (retain, nonatomic) NSString *launchUri;
@property (readonly, nonatomic) BOOL hasReferringWebsite;
@property (retain, nonatomic) NSString *referringWebsite;
@property (nonatomic) BOOL hasIsHandoff;
@property (nonatomic) BOOL isHandoff;
@property (readonly, nonatomic) BOOL hasSourceHandoffDevice;
@property (retain, nonatomic) NSString *sourceHandoffDevice;
@property (nonatomic) BOOL hasLaunchAction;
@property (nonatomic) int launchAction;
@property (nonatomic) BOOL hasLaunchActionInternal;
@property (nonatomic) int launchActionInternal;

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
- (int)StringAsLaunchAction:(id)a0;
- (int)StringAsLaunchActionInternal:(id)a0;
- (id)launchActionAsString:(int)a0;
- (id)launchActionInternalAsString:(int)a0;

@end
