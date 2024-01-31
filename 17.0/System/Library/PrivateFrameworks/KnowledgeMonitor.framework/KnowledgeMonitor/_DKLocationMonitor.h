@class NSString, RTRoutineManager, CLLocationManager;

@interface _DKLocationMonitor : _DKMonitor <CLLocationManagerDelegate> {
    CLLocationManager *_locationManager;
    RTRoutineManager *_routineManager;
    BOOL _locationEnabled;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventStream;
+ (id)entitlements;

- (id)init;
- (unsigned long long)userSpecificPlaceTypeFromType:(unsigned long long)a0;
- (void)start;
- (void)locationManager:(id)a0 didVisit:(id)a1;
- (void)locationManagerDidChangeAuthorization:(id)a0;
- (void)stop;
- (void)_handleVisit:(id)a0;
- (id)_locationFromVisit:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)placeTypeFromType:(unsigned long long)a0;

@end
