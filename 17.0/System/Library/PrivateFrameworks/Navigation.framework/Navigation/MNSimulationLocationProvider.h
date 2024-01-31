@class NSString, NSBundle, GEOApplicationAuditToken, NSTimer, MNSimulatedLocationGenerator, NSMutableArray;
@protocol MNLocationProviderDelegate;

@interface MNSimulationLocationProvider : NSObject <MNLocationProvider> {
    NSTimer *_locationUpdateTimer;
    long long _simulationType;
    MNSimulatedLocationGenerator *_locationGenerator;
    BOOL _simulateGeoFences;
    NSMutableArray *_monitoredGeoFences;
    NSMutableArray *_currentGeoFences;
}

@property (retain, nonatomic) GEOApplicationAuditToken *auditToken;
@property (retain, nonatomic) NSString *requestingAppIdentifier;
@property (nonatomic) double speedOverride;
@property (nonatomic) double speedMultiplier;
@property (weak, nonatomic) id<MNLocationProviderDelegate> delegate;
@property (retain, nonatomic) NSBundle *effectiveBundle;
@property (copy, nonatomic) NSString *effectiveBundleIdentifier;
@property (readonly, nonatomic) BOOL isAuthorized;
@property (nonatomic) int headingOrientation;
@property (readonly, nonatomic) double expectedGpsUpdateInterval;
@property (readonly, nonatomic) BOOL coarseModeEnabled;
@property (readonly, nonatomic) BOOL isTracePlayer;
@property (readonly, nonatomic) unsigned long long traceVersion;
@property (readonly, nonatomic) double timeScale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)stopUpdatingVehicleHeading;
- (void)startUpdatingHeading;
- (void)stopUpdatingVehicleSpeed;
- (void)stopUpdatingHeading;
- (void)stopUpdatingLocation;
- (void)startUpdatingVehicleSpeed;
- (void)resetForActiveTileGroupChanged;
- (void)startUpdatingVehicleHeading;
- (void)stopMonitoringForRegion:(id)a0;
- (void)startMonitoringForRegion:(id)a0;
- (void)startUpdatingLocation;
- (void).cxx_destruct;
- (void)updatePosition:(double)a0;
- (void)_resetLocationUpdateInterval;
- (void)_sendLocationUpdate:(id)a0;
- (id)initWithSimulationType:(long long)a0 routeInfo:(id)a1;
- (id)initWithSimulationType:(long long)a0 routeInfo:(id)a1 alternateRouteInfos:(id)a2;
- (void)updateWithRouteInfo:(id)a0;

@end
