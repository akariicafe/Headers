@class NSString, PBDataReader;

@interface GEOWiFiHarvestLabel : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_comment;
    NSString *_internalIdentifier;
    NSString *_venueCategory;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _networkType;
    int _originator;
    struct { unsigned char has_networkType : 1; unsigned char has_originator : 1; unsigned char read_comment : 1; unsigned char read_internalIdentifier : 1; unsigned char read_venueCategory : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasOriginator;
@property (nonatomic) int originator;
@property (readonly, nonatomic) BOOL hasVenueCategory;
@property (retain, nonatomic) NSString *venueCategory;
@property (readonly, nonatomic) BOOL hasComment;
@property (retain, nonatomic) NSString *comment;
@property (nonatomic) BOOL hasNetworkType;
@property (nonatomic) int networkType;
@property (readonly, nonatomic) BOOL hasInternalIdentifier;
@property (retain, nonatomic) NSString *internalIdentifier;

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
- (int)StringAsNetworkType:(id)a0;
- (int)StringAsOriginator:(id)a0;
- (id)networkTypeAsString:(int)a0;
- (id)originatorAsString:(int)a0;

@end
