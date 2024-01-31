@class NSObject, NSArray, NSString, RTRoutineManager, NSBundle, CLLocationManager, NSMutableDictionary;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface LocationStateRelay : NSObject <CLLocationManagerDelegate> {
    void *coreLocationDyLibHandle;
    void *coreRoutineDyLibHandle;
    RTRoutineManager *routineManager;
    NSBundle *mobileWiFiBundle;
    CLLocationManager *mobileWiFiLocationManager;
    Class CLLocationManagerClassRef;
    NSMutableDictionary *pendingLOIBlocks;
    NSObject<OS_dispatch_source> *locationRequestTimer;
    void /* function */ *clCopyTechnologiesInUseFunc;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

@property (retain) NSArray *allLOIs;
@property (nonatomic) BOOL gpsInUse;
@property (nonatomic) BOOL LOIUseAuthorized;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (id)init;
- (void)dealloc;
- (long long)preflightFrameworks;
- (void)locationManagerDidChangeAuthorization:(id)a0;
- (unsigned long long)addPendingLOIBlocks:(id /* block */)a0;
- (void)cleanUpPendingLOIBlocks;
- (BOOL)loadCoreLocation;
- (void)fetchCurrentLocationLOIOnQueue:(id)a0 desiredAccuracy:(double)a1 reply:(id /* block */)a2;
- (void)determineIfLocationOfInterestIsKnownOfType:(long long)a0 queue:(id)a1 reply:(id /* block */)a2;
- (void).cxx_destruct;
- (BOOL)loadCoreRoutine;
- (void)callPendingLOIBlocksWithCLLocation:(id)a0 LOI:(id)a1 andError:(id)a2;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (BOOL)authorizedToUseCoreRoutine;
- (void)unloadFrameworks;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (id)mobileWiFiLocationManager;
- (void)showLocationArrow;
- (id)rtLOITypeToString:(long long)a0;
- (void)getLocationTechnologyStateForInitialState:(BOOL)a0;

@end
