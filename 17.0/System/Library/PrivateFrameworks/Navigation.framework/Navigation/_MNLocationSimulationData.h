@class GEOComposedRoute, NSString, GEOApplicationAuditToken, MNActiveRouteInfo, MNLocation;

@interface _MNLocationSimulationData : NSObject

@property (nonatomic) long long simulationType;
@property (retain, nonatomic) MNActiveRouteInfo *routeInfo;
@property (retain, nonatomic) MNActiveRouteInfo *initialRouteInfo;
@property (retain, nonatomic) MNLocation *lastLocation;
@property (nonatomic) struct { unsigned int index; float offset; } lastRouteCoordinate;
@property (nonatomic) double currentTime;
@property (nonatomic) unsigned long long currentLegIndex;
@property (nonatomic) BOOL isChinaShifted;
@property (retain, nonatomic) GEOApplicationAuditToken *auditToken;
@property (retain, nonatomic) NSString *requestingAppIdentifier;
@property (nonatomic) double speedOverride;
@property (nonatomic) BOOL endAtFinalDestination;
@property (readonly, nonatomic) GEOComposedRoute *routeToFollow;

- (void).cxx_destruct;

@end
