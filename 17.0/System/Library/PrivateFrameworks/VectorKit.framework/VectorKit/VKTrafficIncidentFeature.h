@class GEOPBTransitArtwork, NSString, NSArray, GEOFormattedString, NSDate, GEORestrictionInfo;

@interface VKTrafficIncidentFeature : VKTrafficFeature {
    GEORestrictionInfo *_restrictionInfo;
}

@property (readonly, nonatomic) struct optional<gss::IncidentDataSource> { BOOL _hasValue; union ValueUnion { unsigned char data[1]; unsigned char type; } _value; } dataSource;
@property (readonly, nonatomic) float elevationMinZoom;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) NSString *uniqueString;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) BOOL isNotForDisplay;
@property (nonatomic) long long routeRelevance;
@property (nonatomic) BOOL isOnSelectedRoute;
@property (readonly, nonatomic) NSString *street;
@property (readonly, nonatomic) NSString *crossStreet;
@property (readonly, nonatomic) NSString *info;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSDate *lastUpdatedDate;
@property (readonly, nonatomic) GEOPBTransitArtwork *artwork;
@property (readonly, nonatomic) GEOFormattedString *effectiveTimeRange;
@property (readonly, nonatomic) NSArray *restrictionDetails;
@property (readonly, nonatomic) GEOFormattedString *formattedTitle;
@property (readonly, nonatomic) GEOFormattedString *formattedSubtitle;
@property (readonly, nonatomic) long long significance;

+ (long long)incidentTypeForGeoRouteIncident:(id)a0;
+ (id)stringForIncidentSignificance:(long long)a0;
+ (id)stringForIncidentType:(long long)a0;
+ (id)stringForRouteRelevance:(long long)a0;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)hasSameIdentifier:(id)a0;
- (id)initWithIncidentData:(const void *)a0;
- (id)initWithRouteIncident:(id)a0 routeOffsetInMeters:(unsigned int)a1 routeRelevance:(long long)a2 onRoute:(id)a3;
- (void)populateDebugNode:(void *)a0;

@end
