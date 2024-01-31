@class NSString, NSBundle, CLLocationManager, MNLocationProviderCLParameters, NSRunLoop;
@protocol MNLocationProviderDelegate;

@interface MNCoreLocationProvider : NSObject <CLLocationManagerDelegate, CLLocationManagerVehicleDelegate, MNLocationProvider> {
    BOOL _hasQueriedAuthorization;
    CLLocationManager *_clLocationManager;
    MNLocationProviderCLParameters *_clParameters;
    int _authorizationStatus;
    NSBundle *_effectiveBundle;
    NSString *_effectiveBundleIdentifier;
    double _distanceFilter;
    double _desiredAccuracy;
    BOOL _matchInfoEnabled;
    NSRunLoop *_debug_initRunLoop;
    NSRunLoop *_debug_deinitRunLoop;
}

@property (readonly, nonatomic) CLLocationManager *_clLocationManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
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

- (void)locationManager:(id)a0 didUpdateHeading:(id)a1;
- (void)setMatchInfoEnabled:(BOOL)a0;
- (void)requestLocation;
- (id)init;
- (void)locationManager:(id)a0 monitoringDidFailForRegion:(id)a1 withError:(id)a2;
- (void)_updateAuthorizationStatus;
- (void)locationManagerDidPauseLocationUpdates:(id)a0;
- (void)dealloc;
- (id)initWithEffectiveBundleIdentifier:(id)a0;
- (void)stopUpdatingVehicleHeading;
- (void)locationManagerDidChangeAuthorization:(id)a0;
- (void)startUpdatingHeading;
- (void)stopUpdatingVehicleSpeed;
- (void)setDesiredAccuracy:(double)a0;
- (void)stopUpdatingHeading;
- (void)locationManager:(id)a0 didUpdateVehicleSpeed:(id)a1;
- (void)locationManager:(id)a0 didEnterRegion:(id)a1;
- (void)_sharedInit;
- (void)stopUpdatingLocation;
- (void)startUpdatingVehicleSpeed;
- (void)resetForActiveTileGroupChanged;
- (void)_resetForNewEffectiveBundle;
- (void)locationManager:(id)a0 didExitRegion:(id)a1;
- (void)locationManagerDidResumeLocationUpdates:(id)a0;
- (void)startUpdatingVehicleHeading;
- (id)initWithEffectiveBundle:(id)a0;
- (void)_updateForCLParameters:(id)a0;
- (void)stopMonitoringForRegion:(id)a0;
- (void)startMonitoringForRegion:(id)a0;
- (void)_createCLLocationManager;
- (void)setCLParameters:(id)a0;
- (void)startUpdatingLocation;
- (void)setDistanceFilter:(double)a0;
- (void)locationManager:(id)a0 didUpdateVehicleHeading:(id)a1;
- (void).cxx_destruct;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)_updateCoarseModeEnabled;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;

@end
