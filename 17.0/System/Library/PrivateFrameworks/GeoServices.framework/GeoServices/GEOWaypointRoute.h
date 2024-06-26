@class GEOOutOfMapsAlertsInfo, GEORoutePlanningInfo, NSString, GEOWaypointRouteFeatures, PBDataReader, PBUnknownFields, GEORestrictionZoneInfo, NSMutableArray, GEOTraversalTimes;

@interface GEOWaypointRoute : PBCodable <_GEOEnrouteNoticesProvider, NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { int *list; unsigned long long count; unsigned long long size; } _initialPromptTypes;
    NSMutableArray *_arrivalParameters;
    GEOWaypointRouteFeatures *_feature;
    NSMutableArray *_incidentsOnRouteLegs;
    NSMutableArray *_names;
    GEOOutOfMapsAlertsInfo *_outOfMapsAlertsInfo;
    GEORestrictionZoneInfo *_restrictionZoneInfo;
    NSMutableArray *_routeLegs;
    GEORoutePlanningInfo *_routePlanningInfo;
    NSMutableArray *_trafficBannerTexts;
    NSMutableArray *_trafficCameras;
    NSMutableArray *_trafficSignals;
    GEOTraversalTimes *_traversalTimes;
    GEOTraversalTimes *_tripTimes;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _distanceMeters;
    int _drivingSide;
    unsigned int _identifier;
    int _transportType;
    int _type;
    struct { unsigned char has_distanceMeters : 1; unsigned char has_drivingSide : 1; unsigned char has_identifier : 1; unsigned char has_transportType : 1; unsigned char has_type : 1; unsigned char read_unknownFields : 1; unsigned char read_initialPromptTypes : 1; unsigned char read_arrivalParameters : 1; unsigned char read_feature : 1; unsigned char read_incidentsOnRouteLegs : 1; unsigned char read_names : 1; unsigned char read_outOfMapsAlertsInfo : 1; unsigned char read_restrictionZoneInfo : 1; unsigned char read_routeLegs : 1; unsigned char read_routePlanningInfo : 1; unsigned char read_trafficBannerTexts : 1; unsigned char read_trafficCameras : 1; unsigned char read_trafficSignals : 1; unsigned char read_traversalTimes : 1; unsigned char read_tripTimes : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL hasIdentifier;
@property (nonatomic) unsigned int identifier;
@property (retain, nonatomic) NSMutableArray *routeLegs;
@property (nonatomic) BOOL hasTransportType;
@property (nonatomic) int transportType;
@property (nonatomic) BOOL hasDrivingSide;
@property (nonatomic) int drivingSide;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (retain, nonatomic) NSMutableArray *names;
@property (nonatomic) BOOL hasDistanceMeters;
@property (nonatomic) unsigned int distanceMeters;
@property (readonly, nonatomic) BOOL hasTraversalTimes;
@property (retain, nonatomic) GEOTraversalTimes *traversalTimes;
@property (readonly, nonatomic) BOOL hasTripTimes;
@property (retain, nonatomic) GEOTraversalTimes *tripTimes;
@property (readonly, nonatomic) BOOL hasFeature;
@property (retain, nonatomic) GEOWaypointRouteFeatures *feature;
@property (readonly, nonatomic) BOOL hasRoutePlanningInfo;
@property (retain, nonatomic) GEORoutePlanningInfo *routePlanningInfo;
@property (retain, nonatomic) NSMutableArray *arrivalParameters;
@property (retain, nonatomic) NSMutableArray *trafficSignals;
@property (retain, nonatomic) NSMutableArray *trafficCameras;
@property (retain, nonatomic) NSMutableArray *incidentsOnRouteLegs;
@property (readonly, nonatomic) BOOL hasRestrictionZoneInfo;
@property (retain, nonatomic) GEORestrictionZoneInfo *restrictionZoneInfo;
@property (readonly, nonatomic) BOOL hasOutOfMapsAlertsInfo;
@property (retain, nonatomic) GEOOutOfMapsAlertsInfo *outOfMapsAlertsInfo;
@property (retain, nonatomic) NSMutableArray *trafficBannerTexts;
@property (readonly, nonatomic) unsigned long long initialPromptTypesCount;
@property (readonly, nonatomic) int *initialPromptTypes;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)trafficSignalType;
+ (Class)trafficCameraType;
+ (Class)trafficBannerTextType;
+ (Class)nameType;
+ (Class)incidentsOnRouteLegsType;
+ (Class)arrivalParametersType;
+ (Class)routeLegType;

- (id)init;
- (void)dealloc;
- (id)typeAsString:(int)a0;
- (BOOL)readFrom:(id)a0;
- (id)nameAtIndex:(unsigned long long)a0;
- (int)StringAsTransportType:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)initWithData:(id)a0;
- (void)clearNames;
- (id)initWithDictionary:(id)a0;
- (id)transportTypeAsString:(int)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (void)addName:(id)a0;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (int)StringAsType:(id)a0;
- (unsigned long long)namesCount;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithJSON:(id)a0;
- (int)StringAsDrivingSide:(id)a0;
- (int)StringAsInitialPromptTypes:(id)a0;
- (id)_geoTrafficCameras;
- (id)_geoTrafficSignals;
- (void)addArrivalParameters:(id)a0;
- (void)addIncidentsOnRouteLegs:(id)a0;
- (void)addInitialPromptType:(int)a0;
- (void)addRouteLeg:(id)a0;
- (void)addTrafficBannerText:(id)a0;
- (void)addTrafficCamera:(id)a0;
- (void)addTrafficSignal:(id)a0;
- (id)arrivalParametersAtIndex:(unsigned long long)a0;
- (unsigned long long)arrivalParametersCount;
- (void)clearArrivalParameters;
- (void)clearIncidentsOnRouteLegs;
- (void)clearInitialPromptTypes;
- (void)clearRouteLegs;
- (void)clearTrafficBannerTexts;
- (void)clearTrafficCameras;
- (void)clearTrafficSignals;
- (id)drivingSideAsString:(int)a0;
- (id)incidentsOnRouteLegsAtIndex:(unsigned long long)a0;
- (unsigned long long)incidentsOnRouteLegsCount;
- (int)initialPromptTypeAtIndex:(unsigned long long)a0;
- (id)initialPromptTypesAsString:(int)a0;
- (id)routeLegAtIndex:(unsigned long long)a0;
- (unsigned long long)routeLegsCount;
- (void)setInitialPromptTypes:(int *)a0 count:(unsigned long long)a1;
- (id)trafficBannerTextAtIndex:(unsigned long long)a0;
- (unsigned long long)trafficBannerTextsCount;
- (id)trafficCameraAtIndex:(unsigned long long)a0;
- (unsigned long long)trafficCamerasCount;
- (id)trafficSignalAtIndex:(unsigned long long)a0;
- (unsigned long long)trafficSignalsCount;

@end
