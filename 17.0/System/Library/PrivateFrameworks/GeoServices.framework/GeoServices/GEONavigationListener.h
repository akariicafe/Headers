@class NSString, GEOLocation, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue, GEONavigationListenerDelegate;

@interface GEONavigationListener : NSObject <GEONavigationServerListenerXPCInterface> {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    int _navigationStartedToken;
    int _navigationStoppedToken;
    int _navigationRoutePreviewToken;
    BOOL _wantsRoutes;
    int _transportType;
    GEOLocation *_lastLocation;
    struct { unsigned int index; float offset; } _routeCoordinate;
    BOOL _isResumingMultipointRoute;
    BOOL _navigationStateInterrupted;
}

@property (readonly, nonatomic) GEOLocation *lastLocation;
@property (readonly, nonatomic) BOOL isResumingMultipointRoute;
@property (weak, nonatomic) id<GEONavigationListenerDelegate> delegate;
@property (readonly, nonatomic) unsigned long long navigationState;
@property (readonly, nonatomic) NSString *currentRoadName;
@property (copy, nonatomic) id /* block */ routeSummaryUpdatedHandler;
@property (copy, nonatomic) id /* block */ transitSummaryUpdatedHandler;
@property (copy, nonatomic) id /* block */ guidanceStateUpdatedHandler;
@property (copy, nonatomic) id /* block */ activeRouteDetailsDataUpdatedHandler;
@property (copy, nonatomic) id /* block */ stepIndexUpdatedHandler;
@property (copy, nonatomic) id /* block */ rideSelectionsUpdatedHandler;
@property (copy, nonatomic) id /* block */ positionFromSignUpdatedHandler;
@property (copy, nonatomic) id /* block */ positionFromManeuverUpdatedHandler;
@property (copy, nonatomic) id /* block */ positionFromDestinationUpdatedHandler;
@property (copy, nonatomic) id /* block */ navigationVoiceVolumeUpdatedHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)navigationUpdatedWithVoiceVolumeData:(id)a0;
- (id)initWithQueue:(id)a0;
- (void)requestActiveRouteDetailsData;
- (void)routeSummaryUpdatedWithGuidanceStateData:(id)a0;
- (id)init;
- (void)dealloc;
- (void)requestETAUpdate;
- (void)requestNavigationVoiceVolume;
- (void)navigationStateChanged:(unsigned long long)a0 transportType:(int)a1 isResumingMultipointRoute:(BOOL)a2;
- (void)requestTransitSummary;
- (void)routeSummaryUpdatedWithRideSelectionData:(id)a0;
- (void)didUpdateRoute:(id)a0;
- (void)routeSummaryUpdatedWithStepNameInfoData:(id)a0;
- (void)routeSummaryUpdatedWithPositionFromSignData:(id)a0;
- (void)requestPositionFromSign;
- (void)routeSummaryUpdatedWithActiveRouteDetailsData:(id)a0;
- (id)initWithQueue:(id)a0 wantsRoutes:(BOOL)a1;
- (void)routeSummaryUpdatedWithStepIndexData:(id)a0;
- (void)requestStepIndex;
- (void)routeSummaryUpdatedWithPositionFromDestinationData:(id)a0;
- (void)requestGuidanceState;
- (void)didUpdateETA:(id)a0;
- (void)requestPositionFromManeuver;
- (void)requestPositionFromDestination;
- (void).cxx_destruct;
- (void)requestRouteSummary;
- (void)routeSummaryUpdatedWithPositionFromManeuverData:(id)a0;
- (void)requestRideSelections;
- (void)didUpdateTrafficForCurrentRoute:(id)a0;
- (void)requestRoute;
- (void)routeSummaryUpdatedWithTransitSummaryData:(id)a0;
- (void)didArriveAtWaypoint:(id)a0 endOfLegIndex:(unsigned long long)a1;
- (void)routeSummaryUpdatedWithNavigationRouteSummaryData:(id)a0;
- (void)didResumeNavigatingFromWaypoint:(id)a0 endOfLegIndex:(unsigned long long)a1;
- (void)didUpdateLocation:(id)a0 routeMatchedCoordinate:(struct { unsigned int x0; float x1; })a1;
- (void)requestStepNameInfo;
- (void)currentRoadNameUpdated:(id)a0;

@end
