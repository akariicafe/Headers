@class NSString, GEOCommonOptions, NSArray, GEORouteAttributes, GEOResumeRouteHandle, GEOMapServiceTraits, GEOLocation, GEOMapRegion, GEODirectionsRequestFeedback;

@interface MNDirectionsRequestDetails : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *waypoints;
@property (retain, nonatomic) GEORouteAttributes *routeAttributes;
@property (retain, nonatomic) GEOMapServiceTraits *traits;
@property (nonatomic) unsigned long long maxRouteCount;
@property (retain, nonatomic) GEOLocation *currentUserLocation;
@property (retain, nonatomic) GEOMapRegion *currentMapRegion;
@property (retain, nonatomic) GEODirectionsRequestFeedback *directionsRequestFeedback;
@property (retain, nonatomic) GEOCommonOptions *commonOptions;
@property (nonatomic) BOOL isResumingMultipointRoute;
@property (retain, nonatomic) GEOResumeRouteHandle *resumeRouteHandle;
@property (retain, nonatomic) NSString *tracePath;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTracePath:(id)a0;
- (id)initWithWaypoints:(id)a0 routeAttributes:(id)a1;

@end
