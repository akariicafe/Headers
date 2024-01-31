@interface FMIPCore.FMIPLocationController : NSObject <CLLocationManagerDelegate> {
    void /* unknown type, empty encoding */ locationManager;
    void /* unknown type, empty encoding */ locationShifter;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ locationUpdatingQueue;
    void /* unknown type, empty encoding */ currentLocation;
    void /* unknown type, empty encoding */ limitedPrecision;
}

- (void)locationManager:(id)a0 didChangeAuthorizationStatus:(int)a1;
- (id)init;
- (void).cxx_destruct;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;

@end
