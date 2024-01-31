@class GEODirectionsServiceRequest, NSString, GEOApplicationAuditToken, MNActiveRouteInfo, MNNavigationSessionState, NSDate;
@protocol MNWalkingRouteBackgroundLoaderDelegate;

@interface MNWalkingRouteBackgroundLoader : NSObject <MNNavigationSessionStateListener> {
    GEOApplicationAuditToken *_auditToken;
    NSString *_requestingAppIdentifier;
    BOOL _isFetchingWalkingRoutes;
    GEODirectionsServiceRequest *_pendingRequest;
    NSDate *_dateSinceLastRouteRequest;
    struct { double latitude; double longitude; double altitude; } _lastFailedRequestCoordinate;
}

@property (weak, nonatomic) id<MNWalkingRouteBackgroundLoaderDelegate> delegate;
@property (copy, nonatomic) MNNavigationSessionState *navigationSessionState;
@property (readonly, nonatomic) MNActiveRouteInfo *walkingRouteInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)start;
- (void)stop;
- (void).cxx_destruct;
- (void)_handleWalkingRouteResponse:(id)a0;
- (unsigned long long)_requestTypeForArrivalState:(long long)a0;
- (id)_requestWalkingRouteWithHandler:(id /* block */)a0;
- (void)_updateForLocation:(id)a0;
- (void)_updateWalkingRoute;

@end
