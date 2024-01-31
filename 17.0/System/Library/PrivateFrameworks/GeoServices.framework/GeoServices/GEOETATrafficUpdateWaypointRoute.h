@class GEOTraversalTimes, PBUnknownFields, PBDataReader, NSMutableArray, GEONavigabilityInfo;

@interface GEOETATrafficUpdateWaypointRoute : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_incidentsOnUserWaypointRoutes;
    GEONavigabilityInfo *_navigabilityInfo;
    NSMutableArray *_newWaypointRoutes;
    NSMutableArray *_routeLegs;
    NSMutableArray *_trafficBannerTexts;
    GEOTraversalTimes *_traversalTimes;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _identifier;
    struct { unsigned char has_identifier : 1; unsigned char read_unknownFields : 1; unsigned char read_incidentsOnUserWaypointRoutes : 1; unsigned char read_navigabilityInfo : 1; unsigned char read_newWaypointRoutes : 1; unsigned char read_routeLegs : 1; unsigned char read_trafficBannerTexts : 1; unsigned char read_traversalTimes : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasIdentifier;
@property (nonatomic) unsigned int identifier;
@property (retain, nonatomic) NSMutableArray *routeLegs;
@property (readonly, nonatomic) BOOL hasTraversalTimes;
@property (retain, nonatomic) GEOTraversalTimes *traversalTimes;
@property (retain, nonatomic) NSMutableArray *incidentsOnUserWaypointRoutes;
@property (retain, nonatomic) NSMutableArray *trafficBannerTexts;
@property (retain, nonatomic) NSMutableArray *newWaypointRoutes;
@property (readonly, nonatomic) BOOL hasNavigabilityInfo;
@property (retain, nonatomic) GEONavigabilityInfo *navigabilityInfo;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)trafficBannerTextType;
+ (Class)routeLegType;
+ (Class)incidentsOnUserWaypointRouteType;
+ (Class)newWaypointRoutesType;

- (id)init;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
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
- (void)addIncidentsOnUserWaypointRoute:(id)a0;
- (void)addNewWaypointRoutes:(id)a0;
- (void)addRouteLeg:(id)a0;
- (void)addTrafficBannerText:(id)a0;
- (void)clearIncidentsOnUserWaypointRoutes;
- (void)clearNewWaypointRoutes;
- (void)clearRouteLegs;
- (void)clearTrafficBannerTexts;
- (id)incidentsOnUserWaypointRouteAtIndex:(unsigned long long)a0;
- (unsigned long long)incidentsOnUserWaypointRoutesCount;
- (id)newWaypointRoutesAtIndex:(unsigned long long)a0;
- (unsigned long long)newWaypointRoutesCount;
- (id)routeLegAtIndex:(unsigned long long)a0;
- (unsigned long long)routeLegsCount;
- (id)trafficBannerTextAtIndex:(unsigned long long)a0;
- (unsigned long long)trafficBannerTextsCount;

@end
