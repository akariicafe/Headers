@class NSString, NSData, NSMutableArray, PBDataReader;

@interface GEOTrafficRerouteFeedback : PBCodable <NSCopying> {
    PBDataReader *_reader;
    double _bannerDurationSeconds;
    NSString *_displayedBannerId;
    double _distanceToDestination;
    NSData *_oldRouteID;
    NSMutableArray *_oldRouteIncidents;
    NSData *_reroutedRouteID;
    NSData *_responseId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _actionType;
    int _alertType;
    unsigned int _oldRouteHistoricTravelTime;
    unsigned int _oldRouteTravelTime;
    int _rerouteType;
    unsigned int _reroutedRouteHistoricTravelTime;
    unsigned int _reroutedRouteTravelTime;
    BOOL _backgrounded;
    struct { unsigned char has_bannerDurationSeconds : 1; unsigned char has_distanceToDestination : 1; unsigned char has_actionType : 1; unsigned char has_alertType : 1; unsigned char has_oldRouteHistoricTravelTime : 1; unsigned char has_oldRouteTravelTime : 1; unsigned char has_rerouteType : 1; unsigned char has_reroutedRouteHistoricTravelTime : 1; unsigned char has_reroutedRouteTravelTime : 1; unsigned char has_backgrounded : 1; unsigned char read_displayedBannerId : 1; unsigned char read_oldRouteID : 1; unsigned char read_oldRouteIncidents : 1; unsigned char read_reroutedRouteID : 1; unsigned char read_responseId : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasOldRouteTravelTime;
@property (nonatomic) unsigned int oldRouteTravelTime;
@property (nonatomic) BOOL hasReroutedRouteTravelTime;
@property (nonatomic) unsigned int reroutedRouteTravelTime;
@property (nonatomic) BOOL hasOldRouteHistoricTravelTime;
@property (nonatomic) unsigned int oldRouteHistoricTravelTime;
@property (nonatomic) BOOL hasReroutedRouteHistoricTravelTime;
@property (nonatomic) unsigned int reroutedRouteHistoricTravelTime;
@property (retain, nonatomic) NSMutableArray *oldRouteIncidents;
@property (readonly, nonatomic) BOOL hasOldRouteID;
@property (retain, nonatomic) NSData *oldRouteID;
@property (readonly, nonatomic) BOOL hasReroutedRouteID;
@property (retain, nonatomic) NSData *reroutedRouteID;
@property (nonatomic) BOOL hasActionType;
@property (nonatomic) int actionType;
@property (nonatomic) BOOL hasAlertType;
@property (nonatomic) int alertType;
@property (nonatomic) BOOL hasBackgrounded;
@property (nonatomic) BOOL backgrounded;
@property (nonatomic) BOOL hasRerouteType;
@property (nonatomic) int rerouteType;
@property (readonly, nonatomic) BOOL hasResponseId;
@property (retain, nonatomic) NSData *responseId;
@property (nonatomic) BOOL hasBannerDurationSeconds;
@property (nonatomic) double bannerDurationSeconds;
@property (readonly, nonatomic) BOOL hasDisplayedBannerId;
@property (retain, nonatomic) NSString *displayedBannerId;
@property (nonatomic) BOOL hasDistanceToDestination;
@property (nonatomic) double distanceToDestination;

+ (BOOL)isValid:(id)a0;
+ (Class)oldRouteIncidentsType;

- (id)init;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsActionType:(id)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)initWithData:(id)a0;
- (id)actionTypeAsString:(int)a0;
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
- (int)StringAsAlertType:(id)a0;
- (int)StringAsRerouteType:(id)a0;
- (void)addOldRouteIncidents:(id)a0;
- (id)alertTypeAsString:(int)a0;
- (void)clearOldRouteIncidents;
- (id)oldRouteIncidentsAtIndex:(unsigned long long)a0;
- (unsigned long long)oldRouteIncidentsCount;
- (id)rerouteTypeAsString:(int)a0;

@end
