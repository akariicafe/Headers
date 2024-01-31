@class RELocationManager, CLLocation, REObserverStore;

@interface REEngineLocationManager : RERelevanceEngineSubsystem <REEngineLocationManagerProperties> {
    RELocationManager *_locationManager;
    RELocationManager *_simulatedLocationManager;
    REObserverStore *_observers;
    BOOL _monitoringLocation;
}

@property (retain) CLLocation *location;
@property (retain, nonatomic) CLLocation *currentLocation;
@property (readonly, nonatomic) BOOL monitoringLocation;
@property (readonly, nonatomic) RELocationManager *locationManager;

- (void)pause;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void)resume;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (BOOL)_wantsLocation;
- (void)_beginMonitoringLocationForManager:(id)a0;
- (void)_beginTraining;
- (id)_currentLocationManager;
- (void)_endTraining;
- (void)_handleLocationUpdate:(id)a0;
- (void)_stopMonitoringLocationForManager:(id)a0;
- (void)_updateLocationStatus;
- (id)initWithRelevanceEngine:(id)a0 locationManager:(id)a1;

@end
