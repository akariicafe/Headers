@class NSString, GEONavigationServer;

@interface GEONavigationServerPeer : GEONavdPeer <GEONavigationServerRequestStateXPCInterface>

@property (weak, nonatomic) GEONavigationServer *delegate;
@property (nonatomic) BOOL hasEntitlement;
@property (readonly, nonatomic) BOOL wantsRoutes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)requestActiveRouteDetailsData;
- (void)dealloc;
- (void)requestETAUpdate;
- (void)requestNavigationVoiceVolume;
- (void)requestTransitSummary;
- (void)requestPositionFromSign;
- (void)requestStepIndex;
- (void)requestGuidanceState;
- (void)requestPositionFromManeuver;
- (void)requestPositionFromDestination;
- (void).cxx_destruct;
- (void)requestRouteSummary;
- (void)requestRideSelections;
- (void)requestRoute;
- (void)requestStepNameInfo;
- (void)setWantsRoutes:(BOOL)a0;
- (void)requestUpdates;

@end
