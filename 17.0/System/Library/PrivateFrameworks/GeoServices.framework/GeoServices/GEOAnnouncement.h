@class NSString, GEOPDFlyover, GEOMapRegion, PBDataReader;

@interface GEOAnnouncement : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_buttonOneAppURI;
    NSString *_buttonOneMessage;
    NSString *_buttonTwoAppURI;
    NSString *_buttonTwoMessage;
    GEOPDFlyover *_flyoverInfo;
    GEOMapRegion *_mapRegion;
    NSString *_title;
    NSString *_userMessage;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _announcementID;
    int _announcementType;
    unsigned int _displayDestinations;
    int _releasePhase;
    struct { unsigned char has_announcementID : 1; unsigned char has_announcementType : 1; unsigned char has_displayDestinations : 1; unsigned char has_releasePhase : 1; unsigned char read_buttonOneAppURI : 1; unsigned char read_buttonOneMessage : 1; unsigned char read_buttonTwoAppURI : 1; unsigned char read_buttonTwoMessage : 1; unsigned char read_flyoverInfo : 1; unsigned char read_mapRegion : 1; unsigned char read_title : 1; unsigned char read_userMessage : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasAnnouncementID;
@property (nonatomic) unsigned int announcementID;
@property (readonly, nonatomic) BOOL hasMapRegion;
@property (retain, nonatomic) GEOMapRegion *mapRegion;
@property (readonly, nonatomic) BOOL hasUserMessage;
@property (retain, nonatomic) NSString *userMessage;
@property (readonly, nonatomic) BOOL hasButtonOneMessage;
@property (retain, nonatomic) NSString *buttonOneMessage;
@property (readonly, nonatomic) BOOL hasButtonOneAppURI;
@property (retain, nonatomic) NSString *buttonOneAppURI;
@property (readonly, nonatomic) BOOL hasButtonTwoMessage;
@property (retain, nonatomic) NSString *buttonTwoMessage;
@property (readonly, nonatomic) BOOL hasButtonTwoAppURI;
@property (retain, nonatomic) NSString *buttonTwoAppURI;
@property (nonatomic) BOOL hasDisplayDestinations;
@property (nonatomic) unsigned int displayDestinations;
@property (nonatomic) BOOL hasReleasePhase;
@property (nonatomic) int releasePhase;
@property (readonly, nonatomic) BOOL hasFlyoverInfo;
@property (retain, nonatomic) GEOPDFlyover *flyoverInfo;
@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) BOOL hasAnnouncementType;
@property (nonatomic) int announcementType;

+ (BOOL)isValid:(id)a0;

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
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithJSON:(id)a0;
- (int)StringAsReleasePhase:(id)a0;
- (int)StringAsAnnouncementType:(id)a0;
- (id)announcementTypeAsString:(int)a0;
- (id)releasePhaseAsString:(int)a0;

@end
