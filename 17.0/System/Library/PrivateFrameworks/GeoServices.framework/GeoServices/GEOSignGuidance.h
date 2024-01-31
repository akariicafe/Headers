@class GEOPBTransitArtwork, GEOJunctionInfo, PBUnknownFields, PBDataReader, NSMutableArray, GEONameInfo;

@interface GEOSignGuidance : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPBTransitArtwork *_artworkOverride;
    GEOJunctionInfo *_junctionInfo;
    NSMutableArray *_secondarySigns;
    GEONameInfo *_shieldName;
    NSMutableArray *_signDetails;
    NSMutableArray *_signTitles;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _maneuverArrowOverride;
    unsigned int _stackRanking;
    struct { unsigned char has_maneuverArrowOverride : 1; unsigned char has_stackRanking : 1; unsigned char read_unknownFields : 1; unsigned char read_artworkOverride : 1; unsigned char read_junctionInfo : 1; unsigned char read_secondarySigns : 1; unsigned char read_shieldName : 1; unsigned char read_signDetails : 1; unsigned char read_signTitles : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *signTitles;
@property (retain, nonatomic) NSMutableArray *signDetails;
@property (retain, nonatomic) NSMutableArray *secondarySigns;
@property (nonatomic) BOOL hasManeuverArrowOverride;
@property (nonatomic) int maneuverArrowOverride;
@property (readonly, nonatomic) BOOL hasShieldName;
@property (retain, nonatomic) GEONameInfo *shieldName;
@property (nonatomic) BOOL hasStackRanking;
@property (nonatomic) unsigned int stackRanking;
@property (readonly, nonatomic) BOOL hasJunctionInfo;
@property (retain, nonatomic) GEOJunctionInfo *junctionInfo;
@property (readonly, nonatomic) BOOL hasArtworkOverride;
@property (retain, nonatomic) GEOPBTransitArtwork *artworkOverride;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)secondarySignType;
+ (Class)signDetailType;
+ (Class)signTitleType;

- (id)init;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void)clearUnknownFields:(BOOL)a0;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithJSON:(id)a0;
- (int)StringAsManeuverArrowOverride:(id)a0;
- (void)clearSignTitles;
- (unsigned long long)signTitlesCount;
- (void)addSecondarySign:(id)a0;
- (void)addSignDetail:(id)a0;
- (void)addSignTitle:(id)a0;
- (void)clearSecondarySigns;
- (void)clearSignDetails;
- (id)maneuverArrowOverrideAsString:(int)a0;
- (id)secondarySignAtIndex:(unsigned long long)a0;
- (unsigned long long)secondarySignsCount;
- (id)signDetailAtIndex:(unsigned long long)a0;
- (unsigned long long)signDetailsCount;
- (id)signTitleAtIndex:(unsigned long long)a0;

@end
