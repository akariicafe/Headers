@class NSString, NSArray, MNLocation, GEOComposedRouteLeg, GEOApplicationAuditToken, GEOComposedWaypoint, MNActiveRouteInfo, GEOMapServiceTraits;

@interface MNNavigationSessionState : NSObject <NSCopying>

@property (retain, nonatomic) GEOApplicationAuditToken *auditToken;
@property (retain, nonatomic) NSString *requestingAppIdentifier;
@property (retain, nonatomic) GEOMapServiceTraits *traits;
@property (retain, nonatomic) MNLocation *location;
@property (retain, nonatomic) MNActiveRouteInfo *currentRouteInfo;
@property (copy, nonatomic) NSArray *alternateRouteInfos;
@property (retain, nonatomic) GEOComposedWaypoint *currentWaypoint;
@property (nonatomic) unsigned long long targetLegIndex;
@property (nonatomic) long long arrivalState;
@property (readonly, nonatomic) GEOComposedRouteLeg *targetLeg;
@property (readonly, nonatomic) BOOL isOnLastLeg;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_locationStateAsString:(unsigned long long)a0;
- (id)initWithLocation:(id)a0 currentRouteInfo:(id)a1 alternateRouteInfos:(id)a2 targetLegIndex:(unsigned long long)a3;

@end
