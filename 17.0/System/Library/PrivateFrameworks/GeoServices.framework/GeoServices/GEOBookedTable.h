@class NSString;

@interface GEOBookedTable : PBCodable <NSCopying> {
    NSString *_appId;
    unsigned long long _muid;
    BOOL _bookedUsingMaps;
    BOOL _called;
    BOOL _cancelled;
    BOOL _isAsync;
    BOOL _routed;
    BOOL _shared;
    BOOL _tappedCancelReservation;
    BOOL _tappedChangeReservation;
    BOOL _tappedProactiveTrayItem;
    BOOL _viewedDetailsFromPlacecard;
    BOOL _viewedInPlacecard;
    BOOL _viewedInProactiveTray;
    struct { unsigned char has_muid : 1; unsigned char has_bookedUsingMaps : 1; unsigned char has_called : 1; unsigned char has_cancelled : 1; unsigned char has_isAsync : 1; unsigned char has_routed : 1; unsigned char has_shared : 1; unsigned char has_tappedCancelReservation : 1; unsigned char has_tappedChangeReservation : 1; unsigned char has_tappedProactiveTrayItem : 1; unsigned char has_viewedDetailsFromPlacecard : 1; unsigned char has_viewedInPlacecard : 1; unsigned char has_viewedInProactiveTray : 1; } _flags;
}

@property (nonatomic) BOOL hasBookedUsingMaps;
@property (nonatomic) BOOL bookedUsingMaps;
@property (nonatomic) BOOL hasCancelled;
@property (nonatomic) BOOL cancelled;
@property (nonatomic) BOOL hasViewedInProactiveTray;
@property (nonatomic) BOOL viewedInProactiveTray;
@property (nonatomic) BOOL hasTappedProactiveTrayItem;
@property (nonatomic) BOOL tappedProactiveTrayItem;
@property (nonatomic) BOOL hasViewedInPlacecard;
@property (nonatomic) BOOL viewedInPlacecard;
@property (nonatomic) BOOL hasViewedDetailsFromPlacecard;
@property (nonatomic) BOOL viewedDetailsFromPlacecard;
@property (nonatomic) BOOL hasIsAsync;
@property (nonatomic) BOOL isAsync;
@property (readonly, nonatomic) BOOL hasAppId;
@property (retain, nonatomic) NSString *appId;
@property (nonatomic) BOOL hasMuid;
@property (nonatomic) unsigned long long muid;
@property (nonatomic) BOOL hasCalled;
@property (nonatomic) BOOL called;
@property (nonatomic) BOOL hasRouted;
@property (nonatomic) BOOL routed;
@property (nonatomic) BOOL hasTappedChangeReservation;
@property (nonatomic) BOOL tappedChangeReservation;
@property (nonatomic) BOOL hasTappedCancelReservation;
@property (nonatomic) BOOL tappedCancelReservation;
@property (nonatomic) BOOL hasShared;
@property (nonatomic) BOOL shared;

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

@end
