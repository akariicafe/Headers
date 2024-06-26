@class NSMutableDictionary, CLLocation, RTInvocationDispatcher, RTDefaultsManager, CLLocationManager, NSMutableArray, RTPlatform, RTTimerManager, NSString, RTPowerAssertion, CLLocationManagerRoutine, RTStore, RTTimer, RTAuthorizationManager, RTLocationSmoother;
@protocol RTLocationStoreProtocol;

@interface RTLocationManager : RTService <CLLocationManagerDelegateInternal, CLLocationManagerDelegate, RTPurgable, RTStoreManager>

@property (retain, nonatomic) NSMutableArray *currentLocationRequests;
@property (nonatomic) BOOL leechingLocations;
@property (nonatomic) BOOL monitoringLocations;
@property (nonatomic) BOOL monitoringRhythmicLocations;
@property (retain, nonatomic) NSString *effectiveLocationBundlePath;
@property (readonly, nonatomic) NSString *locationBundlePathShortname;
@property (retain, nonatomic) RTTimer *activeLocationRequestTimer;
@property (retain, nonatomic) RTPowerAssertion *powerAssertion;
@property (retain, nonatomic) RTInvocationDispatcher *dispatcher;
@property (retain, nonatomic) CLLocationManager *locationManager;
@property (retain, nonatomic) CLLocationManager *rhythmicLocationManager;
@property (retain, nonatomic) CLLocationManagerRoutine *locationManagerRoutine;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL supported;
@property (nonatomic) BOOL locationStoreAvailable;
@property (nonatomic) BOOL persistingLocations;
@property (retain, nonatomic) CLLocation *lastLocation;
@property (retain, nonatomic) RTAuthorizationManager *authorizationManager;
@property (retain, nonatomic) RTLocationSmoother *locationSmoother;
@property (retain, nonatomic) RTStore<RTLocationStoreProtocol> *locationStore;
@property (retain, nonatomic) RTPlatform *platform;
@property (retain, nonatomic) RTDefaultsManager *defaultsManager;
@property (retain, nonatomic) RTTimerManager *timerManager;
@property (retain, nonatomic) NSMutableDictionary *regionEventHandlerDictionary;
@property (retain, nonatomic) RTInvocationDispatcher *regionEventDispatcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)stringForRegionCallbackType:(long long)a0;
+ (BOOL)isValidIdentifier:(id)a0;
+ (id)errorUnregisteredClientIdentifier:(id)a0;
+ (id)regionIdentifierDelimiterString;
+ (id)errorUsedDelimiter;
+ (BOOL)isValidLocation:(id)a0 options:(id)a1;
+ (BOOL)supportsNotificationName:(id)a0;
+ (id)vendedClasses;
+ (id)defaultLocationRequestOptions;
+ (id)errorDuplicateClientIdentifier:(id)a0;
+ (long long)periodicPurgePolicy;
+ (id)regionWithModifiedIdentifier:(id)a0 forRegion:(id)a1;
+ (id)clientRegionForRegion:(id)a0 clientIdentifierPrefix:(id)a1;

- (void)locationManager:(id)a0 didChangeAuthorizationStatus:(int)a1;
- (void)performPurgeOfType:(long long)a0 referenceDate:(id)a1 completion:(id /* block */)a2;
- (void)fetchEnumerableObjectsWithOptions:(id)a0 offset:(unsigned long long)a1 handler:(id /* block */)a2;
- (void)internalRemoveObserver:(id)a0 name:(id)a1;
- (void)internalAddObserver:(id)a0 name:(id)a1;
- (void)onAuthorizationNotification:(id)a0;
- (BOOL)_considerInUse;
- (void)shouldPersistLocations;
- (void)locationManager:(id)a0 didStartMonitoringForRegion:(id)a1;
- (void)_unregisterForRegionEventsWithClientIdentifier:(id)a0 handler:(id /* block */)a1;
- (void)locationManager:(id)a0 didDetermineState:(long long)a1 forRegion:(id)a2;
- (id)init;
- (void)locationManager:(id)a0 monitoringDidFailForRegion:(id)a1 withError:(id)a2;
- (void)_fetchEstimatedLocationAtDate:(id)a0 options:(id)a1 handler:(id /* block */)a2;
- (id)initWithAuthorizationManager:(id)a0 defaultsManager:(id)a1 locationSmoother:(id)a2 locationStore:(id)a3 platform:(id)a4 routineLocationManager:(id)a5 timerManager:(id)a6 effectiveLocationBundlePath:(id)a7;
- (void)_registerNotifications;
- (void)_unregisterNotifications;
- (void)_shutdownWithHandler:(id /* block */)a0;
- (void)fetchStoredLocationsCountFromDate:(id)a0 toDate:(id)a1 uncertainty:(double)a2 limit:(unsigned long long)a3 handler:(id /* block */)a4;
- (void)_setup;
- (BOOL)_isMonitoringForRegionWithClientIdentifier:(id)a0 regionIdentifier:(id)a1;
- (void)fetchLastLocationWithHandler:(id /* block */)a0;
- (void)_fetchStoredLocationsWithContext:(id)a0 handler:(id /* block */)a1;
- (void)shouldMonitorRhythmicLocations;
- (void)_registerForRegionEventsWithClientIdentifier:(id)a0 handler:(id /* block */)a1;
- (void)unregisterForRegionEventsWithClientIdentifier:(id)a0 handler:(id /* block */)a1;
- (void)registerForRegionEventsWithClientIdentifier:(id)a0 handler:(id /* block */)a1;
- (void)fetchStoredLocationsWithOptions:(id)a0 handler:(id /* block */)a1;
- (id)_fullIdentifierForClientIdentifier:(id)a0 regionIdentifier:(id)a1 error:(id *)a2;
- (id)_prefixForClientIdentifier:(id)a0 error:(id *)a1;
- (void)fetchCachedLocationWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)shouldMonitorLocations;
- (BOOL)startMonitoringForRegion:(id)a0 clientIdentifier:(id)a1 error:(id *)a2;
- (void)performCallbackForRegion:(id)a0 regionEvent:(long long)a1 callbackError:(id)a2 handler:(id /* block */)a3;
- (BOOL)stopMonitoringAllRegionsForClientIdentifier:(id)a0 error:(id *)a1;
- (BOOL)isMonitoringForRegionWithClientIdentifier:(id)a0 regionIdentifier:(id)a1;
- (id)initWithAuthorizationManager:(id)a0 defaultsManager:(id)a1 locationSmoother:(id)a2 locationStore:(id)a3 platform:(id)a4 routineLocationManager:(id)a5 timerManager:(id)a6;
- (void)fetchStoredLocationsWithContext:(id)a0 handler:(id /* block */)a1;
- (void)onLocationStoreNotification:(id)a0;
- (BOOL)stopMonitoringForRegion:(id)a0 clientIdentifier:(id)a1 error:(id *)a2;
- (double)_activeLocationRequestsMinDesiredAccuracy;
- (BOOL)_isClientIdentifierAvailable:(id)a0;
- (void)injectLocations:(id)a0 handler:(id /* block */)a1;
- (void).cxx_destruct;
- (BOOL)_performCallbackForRegion:(id)a0 regionEvent:(long long)a1 callbackError:(id)a2 handler:(id /* block */)a3;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)fetchCachedLocationWithHandler:(id /* block */)a0;
- (void)_storeLocations:(id)a0 handler:(id /* block */)a1;
- (void)_removeLocationsPredating:(id)a0 handler:(id /* block */)a1;
- (void)shouldLeechLocations;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1 completion:(id /* block */)a2;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (id)_regionForClientRegion:(id)a0 clientIdentifier:(id)a1 error:(id *)a2;
- (BOOL)_stopMonitoringAllRegionsForClientIdentifier:(id)a0 error:(id *)a1;
- (void)onUserSessionChangeNotification:(id)a0;
- (void)_reviewActiveLocationRequests;
- (void)_fetchStoredLocationsWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)_fetchStoredLocationsCountFromDate:(id)a0 toDate:(id)a1 uncertainty:(double)a2 limit:(unsigned long long)a3 handler:(id /* block */)a4;
- (void)_handleExpiredLocationRequestsWithIndexes:(id)a0;
- (void)submitHarvestSample:(id)a0 handler:(id /* block */)a1;
- (id)_activeLocationRequestTimerExpiryDate;
- (BOOL)_performCallbackForClientRegion:(id)a0 clientIdentifier:(id)a1 regionEvent:(long long)a2 callbackError:(id)a3 handler:(id /* block */)a4;
- (id)_clientIdentifierForRegion:(id)a0;
- (void)onActiveLocationRequestTimerExpiry;
- (void)fetchCurrentLocationWithHandler:(id /* block */)a0;
- (void)_fetchStoredLocationsWithContext:(id)a0 limit:(unsigned long long)a1 referenceDate:(id)a2 handler:(id /* block */)a3;
- (void)_createLocationManager;
- (void)fetchCurrentLocationWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)fetchEstimatedLocationAtDate:(id)a0 options:(id)a1 handler:(id /* block */)a2;

@end
