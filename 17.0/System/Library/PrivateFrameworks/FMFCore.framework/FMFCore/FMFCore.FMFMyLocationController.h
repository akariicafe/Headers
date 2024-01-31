@interface FMFCore.FMFMyLocationController : NSObject <CLLocationManagerDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ unshiftedLocation;
    void /* unknown type, empty encoding */ currentMyLocation;
    void /* unknown type, empty encoding */ myLocation;
    void /* unknown type, empty encoding */ myUnshiftedLocation;
    void /* unknown type, empty encoding */ locationShifter;
    void /* unknown type, empty encoding */ accuracyThreshold;
    void /* unknown type, empty encoding */ distanceThreshold;
    void /* unknown type, empty encoding */ locationManager;
    void /* unknown type, empty encoding */ myLocationUpdatingQueue;
    void /* unknown type, empty encoding */ interactionController;
}

- (void)locationManager:(id)a0 didChangeAuthorizationStatus:(int)a1;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
