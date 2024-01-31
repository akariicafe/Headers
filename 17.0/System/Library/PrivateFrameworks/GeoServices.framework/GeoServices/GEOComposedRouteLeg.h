@class NSData, NSArray, GEOComposedRoute, GEOArrivalParameters, GEOComposedString, GEOWaypointInfo, GEOComposedWaypoint, GEOComposedRouteEVChargingStationInfo, GEOComposedWaypointDisplayInfo;

@interface GEOComposedRouteLeg : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double distance;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } pointRange;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } stepRange;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } segmentRange;
@property (weak, nonatomic) GEOComposedRoute *route;
@property (readonly, nonatomic) GEOWaypointInfo *geoOriginWaypointInfo;
@property (readonly, nonatomic) GEOWaypointInfo *geoDestinationWaypointInfo;
@property (retain, nonatomic) NSData *serverLegIDForAnalytics;
@property (readonly, nonatomic) unsigned long long legIndex;
@property (readonly, nonatomic) double travelDuration;
@property (readonly, nonatomic) unsigned int startPointIndex;
@property (readonly, nonatomic) struct { unsigned int x0; float x1; } startRouteCoordinate;
@property (readonly, nonatomic) unsigned int endPointIndex;
@property (readonly, nonatomic) struct { unsigned int x0; float x1; } endRouteCoordinate;
@property (readonly, nonatomic) unsigned long long pointCount;
@property (readonly, nonatomic) unsigned long long startStepIndex;
@property (readonly, nonatomic) unsigned long long endStepIndex;
@property (readonly, nonatomic) unsigned long long stepCount;
@property (readonly, nonatomic) NSArray *segments;
@property (readonly, nonatomic) GEOComposedWaypoint *origin;
@property (readonly, nonatomic) GEOComposedWaypoint *destination;
@property (readonly, nonatomic) GEOArrivalParameters *arrivalParameters;
@property (readonly, nonatomic) GEOComposedString *originListInstruction;
@property (readonly, nonatomic) NSArray *originListSecondaryInstructions;
@property (readonly, nonatomic) GEOComposedString *destinationListInstruction;
@property (readonly, nonatomic) NSArray *destinationListSecondaryInstructions;
@property (readonly, nonatomic) GEOComposedWaypointDisplayInfo *originDisplayInfo;
@property (readonly, nonatomic) GEOComposedWaypointDisplayInfo *destinationDisplayInfo;
@property (readonly, nonatomic) GEOComposedRouteEVChargingStationInfo *chargingStationInfo;
@property (readonly, nonatomic) double chargingDuration;
@property (readonly, nonatomic) int drivingSide;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithComposedRoute:(id)a0 geoRouteLeg:(id)a1 legIndex:(unsigned long long)a2 origin:(id)a3 destination:(id)a4 arrivalParameters:(id)a5;
- (id)initWithComposedRoute:(id)a0 legIndex:(unsigned long long)a1 origin:(id)a2 destination:(id)a3 arrivalParameters:(id)a4;

@end
